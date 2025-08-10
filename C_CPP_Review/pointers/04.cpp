#include <iostream>

int main() {
    int *p = NULL;
    std::cout << "Initial Pointer Value: " << (void *)p << std::endl;
    // printf("%p\n", (void *)p); -> outputs (nil)

    if (p == NULL) {
        std::cout << "Pointer is NULL, cannot be dereferenced" << std::endl;
    }

    p = (int *)malloc(sizeof(int));
    // p = malloc(sizeof(int)); -> throws an error as C++ does not allow for explicit casting of void* without explicit cast unlike C
    
    if (p == NULL) {
        std::cout << "Memory allocation failed" << std::endl;
        return 1;
    }

    // after allocation
    std::cout << p << std::endl;
    
    *p = 10;
    std::cout << *p << std::endl;
    
    // deallocate and set to NULL after free()
    free(p);
    p = NULL;
    
    std::cout << (void *)p << std::endl;
    if (p == NULL) std::cout << "deallocated successfully" << std::endl;

    return 0;
}

