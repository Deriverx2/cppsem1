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
        std::cout<<real<<"+"<<imag<<"i";
    else
        std::cout<<real<<"-"<<imag*-1<<"i";
}

int main()
{
    int m,n;
    std::cout<<"\nEnter real and imaginary part of complex number";
    std::cin>>m>>n;
    complex t1(m,n);
    std::cout<<"First complex number=";
    t1.display();
    std::cout<<"\nEnter real and imaginary part of complex number";
    std::cin>>m>>n;
    complex t2(m,n);
    std::cout<<"Second complex number=";
    t2.display();
    complex sum=add(t1,t2);
    std::cout<<"\nSum=";
    sum.display();
    return 0;
}