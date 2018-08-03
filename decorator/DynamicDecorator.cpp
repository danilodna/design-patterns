#include <iostream>
#include <string>

class Shape
{
public:
    virtual std::string str() const = 0;
};

class Circle: public Shape
{
    float radius;
public:
    Circle() {};
    Circle(float radius): radius(radius) {};

    std::string str() const override {
        std::cout << "The string of the Circle is: " << radius;
    }

};

class Square: public Shape
{
    float side;
public:
    Square() {};
    Square(float side): side(side) {};

    std::string str() const override {
        std::cout << "The string of the Square is: " << side;
    }};

class ColoredShape: public Shape
{
public:
    Shape& aue;

    ColoredShape(ColoredShape& a): aue(a) { }; 
};


int main(int argc, char const *argv[])
{ 

    return 0;
}
