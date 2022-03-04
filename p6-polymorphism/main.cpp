//
//  main.cpp
//  p6-polymorphism
//
//  Created by Jake Short on 2/27/22.
//

#include <iostream>
#include <math.h>
#include "main.h"

template <typename T>
void printArea(const T& shape) {
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

/* Reflection

 1. I think that static polymorphism is easier to implement than dynamic polymorphism. With dynamic polymorphism,
 we need to have another class in our code (the Shape class), and have all of our classes inherit from that. Then,
 our Rectangle/Square/Circle classes all need to inherit that class, and override the necessary methods (the area method).
 However, with static polymorphism, a lot of this code was cut out. We no longer needed the Shape class, so none of our
 classes needed to inherit it anymore. We could also remove the "override" keyword from the area method. Then, we just made
 our area method generic (using template/typename). Overall, we could out a lot of code while still achieving the same result.
 Therefore, I think that static polymorphism is easier and better to implement.
 
 2. One possible reason for using static polymorphism over dynamic polymorphism is that we are able to cut out a lot of
 code. As talked about above, static polymorphism was easier to write for this assignment. Furthermore, according to the
 URL https://blog.feabhas.com/2010/05/polymorphism-in-c/, dynamic polymorphism determines the functions at runtime while
 static polymorphism determines the functions at compile time. Due to this, static polymorphism may also be faster, since
 everything is determined at compile time. Therefore, I belive that static polymorphism is encouraged due to the smaller
 amount of code and determination at compile time.
 
*/
