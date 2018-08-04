#include <iostream>
#include <string>
#include <sstream>

class Shape
{
  public:
    virtual std::string str() const = 0;
};

class Circle : public Shape
{
  private:
    float radius;

  public:
    Circle(){};
    Circle(float radius) : radius(radius){};

    std::string str() const override
    {
        std::ostringstream os;
        os << "The radius of the circle is: " << radius;
        return os.str();
    }
};

class Square : public Shape
{
  private:
    float side;

  public:
    Square(){};
    Square(float side) : side(side){};

    std::string str() const override
    {
        std::ostringstream os;
        os << "The side of the square is: " << side;
        return os.str();
    }
};

class TransparentShape : public Shape
{
  private:
    Shape &shape;
    int alpha;

  public:
    TransparentShape(Shape &shap, int alp) : shape(shap), alpha(alpha){};

    std::string str() const override
    {
        std::ostringstream os;
        os << "The alpha is: " << alpha;
        return os.str();
    }
};

class ColoredShape : public Shape
{
  private:
    Shape &shape;
    std::string color;

  public:
    ColoredShape(Shape &shap, const std::string color) : shape(shap), color(color){};

    std::string str() const override
    {
        std::ostringstream os;
        os << "The color is: " << color;
        return os.str();
    }
};

int main(int argc, char const *argv[])
{
    Circle circ(10);
    ColoredShape color_circ(circ, "green");

    circ.str();
    color_circ.str();

    return 0;
}
