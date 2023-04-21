#include <iostream>

using namespace std;
// Abstract Base Class
class Shape
{
public:
    virtual double area() = 0; // pure virtual function
};
// Derived class 1
class square : public Shape
{
private:
    double side;

public:
    square(double s)
    {
        side = s;
    }
    double area()
    {
        return side * side;
    }
};
// Derived class 2
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    double area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    int a;
    Shape *shape1;
    Shape *shape2;
    std::cout << "Enter side of square";
    std::cin >> a;
    square squa(a);
    std::cout << "Enter radius of circle";
    std::cin >> a;
    Circle cir(a);
    shape1 = &squa;
    shape2 = &cir;

    cout << "Area of square: " << shape1->area() << endl;
    cout << "Area of Circle: " << shape2->area() << endl;
    return 0;
}