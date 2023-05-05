#include <iostream>
using namespace std;
class alpha
{
private:
    int alpha_value;

public:
    alpha(int x) : alpha_value(x)
    {
        cout << "\nalpha has been constructed" << endl;
    }
    void showalpha()
    {
        cout << "\nalpha value = " << alpha_value << endl;
    }
};
class beta
{
private:
    float beta_value;

public:
    beta(float y) : beta_value(y)
    {
        cout << "\nbeta has been constructed" << endl;
    }
    void showbeta()
    {
        cout << "\nbeta value = " << beta_value << endl;
    }
};
class gamma : public beta, public alpha
{
private:
    int gamma_value;

public:
    gamma(int a, float b, int c) : alpha(a), beta(b)
    {
        gamma_value = c;
        cout << "\ngamma has been constructed" << endl;
    }
    void showgamma()
    {
        cout << "\ngamma value = " << gamma_value << endl;
    }
};
int main()
{
    int i, k;
    float j;
    cout << "\nEnter integer values for class alpha: ";
    cin >> i;
    cout << "\nEnter float values for class beta: ";
    cin >> j;
    cout << "\nEnter integer values for class gamma: ";
    cin >> k;
    gamma g(i, j, k);
    g.showalpha();
    g.showbeta();
    g.showgamma();
    return 0;
}