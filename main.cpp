#include <iostream>

#include "src/point.hpp"

// Definition of the overloaded operator<< for Point Class
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.get_x() << ", " << point.get_y() << ")";
    return os; // Return the ostream reference to allow chaining
}

int main() {
    Point p1 = Point(3.2, 9.8);
    Point p2 = Point(5.5, -1.2);

    // Distance = 11.2379
    std::cout << "Distance between " << p1 << " and " << p2 << " = " << (p1 - p2) << std::endl;

    // Midpoint = (4.35, 4.3)
    std::cout << "Midpoint between " << p1 << " and " << p2 << " = " << (p1 / p2) << std::endl;

    // Prints False
    if (p1 == p2) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    // Prints True
    if (p1 != p2) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
