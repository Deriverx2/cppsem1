#include <iostream>
using namespace std;
class alpha {
private:
int alpha_value;
public:
alpha(int x): alpha_value(x) {
cout << "alpha has been constructed" << endl;
}
void showalpha() {
cout << "alpha value = " << alpha_value << endl;
}
};
class beta {
private:
float beta_value;
public:
beta(float y): beta_value(y) {
cout << "beta has been constructed" << endl;
}
void showbeta() {
cout << "beta value = " << beta_value << endl;
}
};
class gamma : public beta, public alpha {
private:
int gamma_value;
public:
gamma(int a, float b, int c): alpha(a), beta(b) {
gamma_value = c;
cout << "gamma has been constructed" << endl;
}
void showgamma() {
cout << "gamma value = " << gamma_value << endl;
}
};
int main() {
int i, k;
float j;
cout << "Enter integer values for class alpha: ";
cin >> i;
cout << "Enter float values for class beta: ";
cin >> j;
cout << "Enter integer values for class gamma: ";
cin >> k;
gamma g(i, j, k);
g.showalpha();
g.showbeta();
g.showgamma();
return 0;
}