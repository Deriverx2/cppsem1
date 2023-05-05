#include<iostream>
class complex
{
    private:
        int real;
        int imag;
    public:
        complex(int,int);
        friend complex add(complex,complex);
        void display();
};


complex::complex(int a=0, int b=0)
{
    real=a;
    imag=b;
}

complex add(complex d1, complex d2)
{
    complex temp;
    temp.real=d1.real+ d2.real;
    temp.imag=d1.imag+ d2.imag;
    return temp;
}

void complex::display()
{
    if (imag>0)
        std::cout<<real<<"+"<<imag<<"i"<<std::endl;
    else
        std::cout<<real<<"-"<<imag*-1<<"i"<<std::endl;
}

int main()
{
    int m,n;
    for (int j = 0; j < 50; j++)
    {
        std::cout << "-";
    }
    std::cout<<"\nFirst complex number"<<std::endl;
    std::cout<<"Enter real and imaginary part :";
    std::cin>>m>>n;
    complex t1(m,n);
    std::cout<<"\nSecond complex number"<<std::endl;
    std::cout<<"Enter real and imaginary part :";
    std::cin>>m>>n;
    complex t2(m,n);
    for (int j = 0; j < 50; j++)
    {
        std::cout << "-";
    }
    std::cout<<"\nZ1=";
    t1.display();
    std::cout<<"Z2=";
    t2.display();
    complex sum=add(t1,t2);
    std::cout<<"\nSum=";
    sum.display();
    for (int j = 0; j < 50; j++)
    {
        std::cout << "-";
    }
    return 0;
}