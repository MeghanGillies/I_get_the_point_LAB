#include <string>
#include <sstream>
#include <cmath>

#include "point.hpp"

// Constructor
Point::Point(double x, double y) : x(x), y(y) {}

// Getters for X and Y
double Point::get_x() const {return x;}
double Point::get_y() const {return y;}

// Calculates Distance between two points
double Point::operator-(Point point2) const {
    double x2 = point2.get_x();
    double y2 = point2.get_y();

    return sqrt( pow(x2 - x, 2) + pow(y2 - y, 2) );
}

// Calculates the Midpoint between two points
Point Point::operator/(Point point2) const {
    double x2 = point2.get_x();
    double y2 = point2.get_y();

    double new_x = (x + x2) / 2;
    double new_y = (y + y2) / 2;

    return Point(new_x, new_y);
}

// Returns true if two points are equal
bool Point::operator==(Point point2) const {
    if ( x == point2.get_x() && y == point2.get_y() ) {
        return true;
    } else {
        return false;
    }
}

// Returns true if two points are not equal
bool Point::operator!=(Point point2) const {
    if ( x != point2.get_x() || y != point2.get_y() ) {
        return true;
    } else {
        return false;
    }
}