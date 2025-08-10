#include <iostream>

int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    std::cout << a << std::endl;
    std::cout << *b << std::endl;
    std::cout << **c << std::endl;
    std::cout << ***d << std::endl;

    return 0;
}
