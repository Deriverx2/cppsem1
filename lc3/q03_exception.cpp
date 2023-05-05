#include <iostream>
class division
{
private:
    int p, q;

public:
    division(int a, int b) : p(a), q(b) {}
    void quotient()
    {
        if (q == 0)
        {
            throw "Denominator cannot be zero";
        }
        else
        {
            std::cout << "\nQuotient is " << p / q;
            std::cout << "\nReminder is " << p % q << std::endl;
        }
    }
};
int main()
{
    int x, y;
    for (int i = 0; i < 50; i++)
    {
        std::cout << "-";
    }
    std::cout << "\nEnter numerator and denominator:";
    std::cin >> x >> y;
    division d(x, y);
    try
    {
        d.quotient();
    }
    catch (const char *message)
    {
        std::cout << "\nError! " << message << std::endl;
    }
    for (int i = 0; i < 50; i++)
    {
        std::cout << "-";
    }
    return 0;
}