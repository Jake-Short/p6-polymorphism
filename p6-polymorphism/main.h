//
//  main.h
//  p6-polymorphism
//
//  Created by Jake Short on 2/27/22.
//

class Rectangle {
    double _width;
    double _height;
    
public:
    Rectangle(double width, double height);
    double area() const;
};

class Square {
    double _side;
    
public:
    Square(double side);
    double area() const;
};


class Circle {
    double _radius;
    
public:
    Circle(double radius);
    double area() const;
};
