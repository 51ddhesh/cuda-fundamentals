#include <iostream>

int main() {
    int i = 10;
    float f = 3.14;

    void *vptr;

    vptr = &i;
    std::cout << "INT: " << *(int*)vptr << std::endl;
    
    vptr = &f;
    std::cout << "FLOAT: " << *(float*)vptr << std::endl;

    return 0;
}
