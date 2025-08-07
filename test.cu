#include <iostream>

__global__ void add(int *a, int *b, int *c) {
    c[threadIdx.x] = a[threadIdx.x] + b[threadIdx.x];
}

int main() {
    int n = 256;
    size_t size = n * sizeof(int);

    // allocate memory on CPU
    int *h_a = (int*)malloc(size);
    int *h_b = (int*)malloc(size);
    int *h_c = (int*)malloc(size);

    // Init host arrays
    for (size_t i = 0; i < n; i++) {
        h_a[i] = i * 10;
        h_b[i] = i * 5;
    }

    // allocate memory on GPU
    int *d_a, *d_b, *d_c;
    cudaMalloc(&d_a, size);
    cudaMalloc(&d_b, size);
    cudaMalloc(&d_c, size);

    // copy data from CPU to GPU
    cudaMemcpy(d_a, h_a, size, cudaMemcpyHostToDevice);
    cudaMemcpy(d_b, h_b, size, cudaMemcpyHostToDevice);

    // launch kernel on GPU with 256 threads
    add<<<1, n>>>(d_a, d_b, d_c);

    // copy data from GPU to CPU
    cudaMemcpy(h_c, d_c, size, cudaMemcpyDeviceToHost);

    // verify the result
    size_t index = 100;
    if (h_c[index] == h_a[index] + h_b[index]) {
        std::cout << "Successful addition of vectors" << std::endl;
    } else {
        std::cout << "Failed" << std::endl;
    }

    // free memory
    free(h_a);
    free(h_b);
    free(h_c);
    cudaFree(d_a);
    cudaFree(d_b);
    cudaFree(d_c);

    return 0;
}

