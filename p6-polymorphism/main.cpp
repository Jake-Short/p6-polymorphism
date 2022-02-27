//
//  main.cpp
//  p6-polymorphism
//
//  Created by Jake Short on 2/27/22.
//

#include <iostream>
#include <math.h>
#include "main.h"

void printArea(const Shape& shape) {
    std::cout << shape.area() << "\n";
}

int main() {
    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };
    
    printArea(r1);
    printArea(s1);
    printArea(c1);
}

Rectangle::Rectangle(double width, double height) {
    _width = width;
    _height = height;
}

double Rectangle::area() const {
    return _width * _height;
}

Square::Square(double side) {
    _side = side;
}

double Square::area() const {
    return _side * _side;
}

Circle::Circle(double radius) {
    _radius = radius;
}

double Circle::area() const {
    return (_radius * _radius) * M_PI;
}

