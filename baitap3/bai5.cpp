#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

struct Rect {
    int x;
    int y;
    int w;
    int h;

    bool contains(const Point& p) const {
        return p.x >= x && p.x < x + w && p.y >= y && p.y < y + h;
    }
};

int main() {


    Rect rect = {10, 10, 20, 20};

    Point p1 = {15, 15};
    Point p2 = {5, 5};

    cout << "Point p1 is " << (rect.contains(p1) ? "inside" : "outside") << " the rectangle." << endl;
    cout << "Point p2 is " << (rect.contains(p2) ? "inside" : "outside") << " the rectangle." << endl;

    return 0;
}
