#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;
    
    int size = sizeof(a) / sizeof(int);
    
    printf("value\taddress\n");
    printf("----------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t%p\n", *p, p);
        p++;
    }

    return 0;
}
