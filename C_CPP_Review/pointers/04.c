#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = NULL;
    printf("Initial Pointer value: %p\n", (void*)p);

    if (p == NULL) {
        printf("Pointer is NULL, cannot be dereferenced\n");
    }

    p = malloc(sizeof(int));
    
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // after allocation
    printf("%p\n", (void*)p);
    
    *p = 10;
    printf("%d\n", *p);
    
    // deallocate and set to NULL after free()
    free(p);
    p = NULL;
    
    printf("%p\n", (void*)p);
    if (p == NULL) printf("deallocated successfully\n");

    return 0;
}

