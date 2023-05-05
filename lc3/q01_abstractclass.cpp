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
    for (int i = 0; i < 35; i++)
    {
        std::cout << "-";
    }
    std::cout << "\nEnter side of square :";
    std::cin >> a;
    square squa(a);
    std::cout << "\nEnter radius of circle :";
    std::cin >> a;
    for (int i = 0; i < 35; i++)
    {
        std::cout << "-";
    }
    Circle cir(a);
    shape1 = &squa;
    shape2 = &cir;
    cout << "\nArea of square: " << shape1->area()
         << endl;
    cout << "\nArea of Circle: " << shape2->area()
         << endl;
    for (int i = 0; i < 35; i++)
    {
        std::cout << "-";
    }
    return 0;
}