#include <iostream>

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    int *p1 = a;
    int *p2 = b;

    int *m[] = {p1, p2};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << *m[i] << ' ';
            m[i]++;
        }
        std::cout << std::endl;
    }

    return 0;
}
