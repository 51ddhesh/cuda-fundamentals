#include <assert.h>
#include <iostream>

typedef struct Point {
    float x;
    float y;
} Point;

int main() {
    Point p1 = {1.0, 2.0};
    assert(sizeof(p1) == sizeof(Point));
    std::cout << "Size of Point: " << sizeof(Point) << std::endl;
    return 0;
}
