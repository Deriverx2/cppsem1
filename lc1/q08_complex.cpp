#include <iostream>
class complex
{
private:
    int real;
    int imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int);
    complex(int, int);
    complex add(complex);
    void display();
};

complex::complex(int a)
{
    real = a;
    imag = a;
}

complex::complex(int a, int b)
{
    real = a;
    imag = b;
}

complex complex::add(complex d1)
{
    complex temp;
    temp.real = real + d1.real;
    temp.imag = imag + d1.imag;
    return temp;
}

void complex::display()
{
    if (imag >= 0)
        std::cout << real << "+" << imag << "i"<<std::endl;
    else
        std::cout << real << "-" << imag * -1 << "i"<<std::endl;
}

int main()
{
    int m, n;
    std::cout << "\nEnter real and imaginary part of complex number: ";
    std::cin >> m >> n;
    complex t1(m, n);
    std::cout << "\nFirst complex number =";
    t1.display();
    std::cout << "\nEnter single value for real and imaginary part of complex number: ";
    std::cin >> m;
    complex t2(m);
    std::cout << "\nSecond complex number =";
    t2.display();
    std::cout << "\nComplex number taking no arguments =";
    complex t3;
    t3.display();
    complex sum = t1.add(t2);
    std::cout << "\nSum =";
    sum.display();
    return 0;
}