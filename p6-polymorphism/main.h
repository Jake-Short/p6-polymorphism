//
//  main.h
//  p6-polymorphism
//
//  Created by Jake Short on 2/27/22.
//

class Shape {
public:
    virtual double area() const = 0;
};

class Rectangle: public Shape {
    double _width;
    double _height;
    
public:
    Rectangle(double width, double height);
    double area() const override;
};

class Square: public Shape {
    double _side;
    
public:
    Square(double side);
    double area() const override;
};


class Circle: public Shape {
    double _radius;
    
public:
    Circle(double radius);
    double area() const override;
};
