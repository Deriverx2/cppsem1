#include <iostream>
template <class T, class U, class V = char>
class ClassTemplate
{
    T var1;
    U var2;
    V var3;

public:
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}
    void printVariables()
    {
        std::cout << "data1=" << var1 << std::endl
                  << "data2=" << var2 << std::endl
                  << "data3=" << var3 << std::endl;
    }
};
int main()
{
    int a;
    float b;
    char c;
    for (int i = 0; i < 50; i++)
    {
        std::cout << "-";
    }
    std::cout << "\nEnter an integer, a float, and a char: ";
    std::cin >> a >> b >> c;
    ClassTemplate<int, float> obj1(a, b, c);
    bool d;
    std::cout << "\nEnter an integer, a float, and a bool: ";
    std::cin >> a >> b >> d;
    for (int i = 0; i < 50; i++)
    {
        std::cout << "-";
    }
    ClassTemplate<int, float, bool> obj2(a, b, d);
    std::cout << "\nData of first object: " << std::endl;
    obj1.printVariables();
    std::cout << "\nData of second object: " << std::endl;
    obj2.printVariables();
    for (int i = 0; i < 50; i++)
    {
        std::cout << "-";
    }
    return 0;
}