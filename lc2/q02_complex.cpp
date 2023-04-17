#include <iostream>
class Complex 
{
    int real, imag;
    public:
        Complex() : real(0), imag(0) {}
        Complex(int real_, int imag_) : real(real_), imag(imag_) {}
        void display() const 
        {
        if (imag < 0)
            std::cout << real << imag<< "i" ;
        else
            std::cout << real << "+" << imag<< "i" ;
        }
        friend Complex operator +(const Complex& comp1, const Complex& comp2) 
        {
        Complex temp;
        temp.real = comp1.real + comp2.real;
        temp.imag = comp1.imag + comp2.imag;
        return temp;
        }
        friend Complex operator *(const Complex& comp1, const Complex& comp2) 
        {
        Complex temp;
        temp.real = comp1.real * comp2.real - comp1.imag * comp2.imag;
        temp.imag = comp1.real * comp2.imag + comp1.imag * comp2.real;
        return temp;
        }   
};
int main() 
{
    int a, b;
    Complex C1, C2, C3;
    int choice = 0;
    do {
    std::cout << "1. Input values of complex number" << std::endl;
    std::cout << "2. Multiply complex numbers" << std::endl;
    std::cout << "3. Add complex numbers" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter choice: ";
    std::cin >> choice;
    switch (choice) 
    {
    case 1:
        std::cout << "Enter real and imaginary part of first complex: ";
        std::cin >> a >> b;
        C1 = Complex(a, b);
        std::cout << "Enter real and imaginary part of second complex: ";
        std::cin >> a >> b;
        C2 = Complex(a, b);
        break;
    case 2:
        C3 = C1 * C2;
        C1.display();
        std::cout  << " * " ;
        C2.display();
        std::cout << " = ";
        C3.display();
        std::cout << std::endl;
        break;
    case 3:
        C3 = C1 + C2;
        C1.display();
        std::cout  << " + " ;
        C2.display();
        std::cout << " = ";
        C3.display();
        std::cout << std::endl;
        break;
    case 4:
        std::cout << "Thank you for using our program" << std::endl;
        break;
    default:
        std::cout << "Incorrect choice" << std::endl;
    }
    }while (choice != 4);
    return 0;
}