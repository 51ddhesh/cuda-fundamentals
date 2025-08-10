#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;

    void *vptr;

    vptr = &i;
    printf("INT: %d\n", *(int*)vptr);
    
    vptr = &f;
    printf("INT: %.2f\n", *(float*)vptr);

    return 0;
}
