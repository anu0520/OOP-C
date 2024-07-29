#include <iostream>
class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point& operator+=(const Point& other) {
        x += other.x;
        y += other.y;
        return *this;
    }
    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};
int main() {
    Point p1(3, 4);
    Point p2(1, 2);
    p1 += p2;
    std::cout << "Result of addition: ";
    p1.display();
    return 0;
}

