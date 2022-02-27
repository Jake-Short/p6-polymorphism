//
//  main.h
//  p6-polymorphism
//
//  Created by Jake Short on 2/27/22.
//

class Shape {
    
};

class Rectangle: public Shape {
    double _width;
    double _height;
    
public:
    Rectangle(double width, double height);
};

class Square: public Shape {
    double _side;
    
public:
    Square(double side);
};


class Circle: public Shape {
    double _radius;
    
public:
    Circle(double radius);
};
