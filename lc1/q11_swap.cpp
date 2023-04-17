#include<iostream>
class class_2;
class class_1
{
    private:
        int value_1;
    public:
        void setvalue(int a)
        {
            value_1=a;
        }
        void display(void)
        {
            std::cout<<"\nvalue_1="<<value_1;
        }
        friend void exchange(class_1&,class_2& );
};

class class_2
{
    private:
        int value_2;
    public:
        void setvalue(int b)
        {
            value_2=b;
        }
        void display()
        {
            std::cout<<"\nvalue_2="<<value_2;
        }
        friend void exchange(class_1&,class_2&);
};

void exchange (class_1& x, class_2& y)
{
    int temp=x.value_1;
    x.value_1=y.value_2;
    y.value_2=temp;
}

int main()
{
    class_1 c1;
    class_2 c2;
    int value;
    std::cout<<"Enter value for class 1";
    std::cin>>value;
    c1.setvalue(value);
    std::cout<<"Enter value for class 2";
    std::cin>>value;
    c2.setvalue(value);
    std::cout<<"Values before interchange:";
    c1.display();
    c2.display();
    exchange(c1,c2);
    std::cout<<"Values after interchange:";
    c1.display();
    c2.display();
    return 0;
}
