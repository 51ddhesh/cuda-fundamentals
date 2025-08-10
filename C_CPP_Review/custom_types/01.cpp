#include <iostream>

int main() {

    int a[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(a) / sizeof(a[0]);

    std::cout << "Size of array: " << size << std::endl;
    std::cout << "Size of size_t " << sizeof(size_t) << " bytes" << std::endl;
    std::cout << "Size of int " << sizeof(int) << " bytes" << std::endl;

    return 0;
}
