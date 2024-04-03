
#include <iostream>

struct Point {
    int x;
    int y;
};

struct Ship {
    int id;
    Point position;
    Point velocity;

    void move() {
        position.x += velocity.x;
        position.y += velocity.y;
    }
};

void display(const Ship& ship) {
    std::cout << "Ship " << ship.id << " at position (" << ship.position.x << ", " << ship.position.y << ")" << std::endl;
}

int main() {
    Ship ship1 = {1, {0, 0}, {1, 1}};
    Ship ship2 = {2, {10, 5}, {-1, 0}};

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }

    return 0;
}
