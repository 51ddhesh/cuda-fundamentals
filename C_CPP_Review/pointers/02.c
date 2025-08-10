#include <stdio.h>

int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("%d\n", a);
    printf("%d\n", *b);
    printf("%d\n", **c);
    printf("%d\n", ***d);

    return 0;
}
