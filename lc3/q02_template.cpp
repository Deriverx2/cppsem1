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
        std::cout << var1 << std::endl
                  << var2 << std::endl
                  << var3 << std::endl;
    }
};
int main()
{
    int a;
    float b;
    char c;
    std::cout << "Enter an integer, a float, and a char: ";
    std::cin >> a >> b >> c;
    ClassTemplate<int, float> obj1(a, b, c);
    bool d;
    std::cout << "Enter an integer, a float, and a bool: ";
    std::cin >> a >> b >> d;
    ClassTemplate<int, float, bool> obj2(a, b, d);
    obj1.printVariables();
    obj2.printVariables();
    return 0;
}