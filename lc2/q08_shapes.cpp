#include <iostream>
#include <cmath>
class Shapes
{
protected:
    double amount;

public:
    virtual void area() = 0;
};

class Circle : public Shapes
{
private:
    float radius;
    const float pi = 3.14;

public:
    Circle(float r) : radius(r) {}
    void area()
    {
        amount = pi * pow(radius, 2);
        std::cout << "Area of circle: " << amount << std::endl;
    }
};

class Square : public Shapes
{
private:
    float side;

public:
    Square(float s) : side(s) {}
    void area()
    {
        amount = pow(side, 2);
        std::cout << "Area of square: " << amount << std::endl;
    }
};

class Ellipse : public Shapes
{
private:
    float major, minor;
    const float pi = 3.14;

public:
    Ellipse(float a, float b) : major(a), minor(b) {}
    void area()
    {
        amount = pi * major * minor;
        std::cout << "Area of ellipse: " << amount << std::endl;
    }
};

class Rectangle : public Shapes
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    void area()
    {
        amount = length * breadth;
        std::cout << "Area of rectangle: " << amount << std::endl;
    }
};

int main()
{
    float len[2];
    Shapes *shape[4];
    std::cout << "\nEnter radius of circle: ";
    std::cin >> len[0];
    shape[0] = new Circle(len[0]);
    shape[0]->area();
    std::cout << "\nEnter side of square: ";
    std::cin >> len[0];
    shape[1] = new Square(len[0]);
    shape[1]->area();
    std::cout << "\nEnter major and minor axis of ellipse: ";
    std::cin >> len[0] >> len[1];
    shape[2] = new Ellipse(len[0], len[1]);
    shape[2]->area();
    std::cout << "\nEnter length and breadth of rectangle: ";
    std::cin >> len[0] >> len[1];
    shape[3] = new Rectangle(len[0], len[1]);
    shape[3]->area();
    return 0;
}