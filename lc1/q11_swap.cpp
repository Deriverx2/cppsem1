#include <iostream>
class class_2;
class class_1
{
private:
    int value_1;

public:
    void setvalue(int a)
    {
        value_1 = a;
    }
    void display(void)
    {
        std::cout << "value_1=" << value_1<<std::endl;
    }
    friend void exchange(class_1 &, class_2 &);
};

class class_2
{
private:
    int value_2;

public:
    void setvalue(int b)
    {
        value_2 = b;
    }
    void display()
    {
        std::cout << "value_2=" << value_2<<std::endl;
    }
    friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 &x, class_2 &y)
{
    int temp = x.value_1;
    x.value_1 = y.value_2;
    y.value_2 = temp;
}

int main()
{
    class_1 c1;
    class_2 c2;
    int value;
    std::cout << "\nEnter an integer value for class 1 :";
    std::cin >> value;
    c1.setvalue(value);
    std::cout << "Enter an integer value for class 2 :";
    std::cin >> value;
    c2.setvalue(value);
    for (int j = 0; j < 50; j++)
    {
        std::cout << "-";
    }
    std::cout << "\nValues before interchange:"<<std::endl;
    c1.display();
    c2.display();
    exchange(c1, c2);
    for (int j = 0; j < 50; j++)
    {
        std::cout << "-";
    }
    std::cout << "\nValues after interchange:"<<std::endl;
    c1.display();
    c2.display();
    for (int j = 0; j < 50; j++)
    {
        std::cout << "-";
    }
    return 0;
}
