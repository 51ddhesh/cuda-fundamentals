#include <iostream>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;

    size_t size = sizeof(a) / sizeof(a[0]);

    std::cout << "value\taddress" << std::endl;
    std::cout << "----------------------" << std::endl;
    for (size_t i = 0; i < size; i++) {
        std::cout << *p << "\t" << p << std::endl;
        p++;
    }

    return 0;
}
