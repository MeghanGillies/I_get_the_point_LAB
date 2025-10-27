#pragma once

#include <string>

class Point {
private:
    double x;
    double y;
public:
    Point(double x, double y); // Constructor

    // Getters
    double get_x() const;
    double get_y() const;

    double operator-(Point point2) const; // Distance
    Point operator/(Point point2) const; // Midpoint
    bool operator==(Point point2) const;
    bool operator!=(Point point2) const;
};