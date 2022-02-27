//
//  main.cpp
//  p6-polymorphism
//
//  Created by Jake Short on 2/27/22.
//

#include <iostream>
#include "main.h"

int main() {
    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };
    
    // printArea(r1);
    // printArea(s1);
    // printArea(c1);
}

Rectangle::Rectangle(double width, double height) {
    _width = width;
    _height = height;
}

Square::Square(double side) {
    _side = side;
}

Circle::Circle(double radius) {
    _radius = radius;
}

