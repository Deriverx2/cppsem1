#include <iostream>
#include <string>

class Base1
{
protected:
    std::string base1_value;

public:
    Base1(const std::string &value) : base1_value(value)
    {
    }
    void display_base1()
    {
        std::cout << "Data in Base1: " << base1_value << std::endl;
    }
};

class Base2
{
protected:
    std::string base2_value;

public:
    Base2(const std::string &value) : base2_value(value)
    {
    }
    void display_base2()
    {
        std::cout << "Data in Base2: " << base2_value << std::endl;
    }
};

class IBase : public Base1, public Base2
{
protected:
    std::string ibase_value;

public:
    IBase(const std::string &value1, const std::string &value2,
          const std::string &value3) : Base1(value1), Base2(value2)
    {
        ibase_value = value3;
    }
    void display_ibase()
    {
        display_base1();
        display_base2();
        std::cout << "Data in Intermediate Base: " << ibase_value << std::endl;
    }
};

class Derived : public IBase
{
protected:
    std::string derived_value;

public:
    Derived(const std::string &value1, const std::string &value2, const std::string &value3, const std::string &value4) : IBase(value1, value2, value3)
    {
        derived_value = value4;
    }
    void display()
    {
        display_ibase();
        std::cout << "Data in Derived: " << derived_value << std::endl;
    }
};
int main()
{
    std::string a, b, c, d;
    std::cout << "\nEnter data for base class1: ";
    std::cin >> a;
    std::cout << "Enter data for base class2: ";
    std::cin >> b;
    std::cout << "Enter data for intermediate class: ";
    std::cin >> c;
    std::cout << "\nMultiple Inheritance" << std::endl;
    std::cout << "Function of intermediate class is invoked" << std::endl;
    std::cout << "Intermediate class inherits base class1 and base class2" << std::endl;
    IBase obji(a, b, c);
    obji.display_ibase();
    std::cout << "\nEnter data for derived class: ";
    std::cin >> d;
    std::cout << "\nMultilevel Inheritance" << std::endl;
    std::cout << "Function of derived class is invoked" << std::endl;
    std::cout << "Derived class inherits intermediate class" << std::endl;
    Derived objd(a, b, c, d);
    objd.display();
    return 0;
}