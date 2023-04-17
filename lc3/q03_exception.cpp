#include<iostream>
class division
{
    private:
        int p,q;
    public:
        division(int a, int b): p(a),q(b){}
        void quotient()
        {
            if (q==0)
            {
                throw "Denominator cannot be zero";
            }
            else
            {
                std::cout<<"Quotient is "<<p/q;
            }
        }
};
int main()
{
    int x,y;
    std::cout<<"Enter numerator and denominator:";
    std::cin>>x>>y;
    division d(x,y);
    try{
        d.quotient();
    }
    catch(const char* message)
            {
                std::cout<<"Error! "<<message;
            }
    return 0;
}