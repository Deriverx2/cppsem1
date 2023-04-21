#include<iostream>
class times
{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        void input(void);
        void add(times,times);
        void display(void);
};

void times::input(void)
{
    std::cout<<"\nEnter hours,minutes and seconds"<<std::endl;
    std::cin>>hours>>minutes>>seconds;
} 

void times::add(times t1,times t2)
{
    seconds=t1.seconds+t2.seconds;
    minutes=seconds/60;
    seconds=seconds%60;
    minutes=t1.minutes+t2.minutes+minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=t1.hours+t2.hours+hours;
}

void times::display(void)
{
    std::cout<<"\n"<<hours<<":Hours "<<minutes<<":Minutes "<<seconds<<":seconds "<<std::endl;
}

int main()
{
    times t1,t2,t3;
    t1.input();
    t1.display();
    t2.input();
    t2.display();
    std::cout<<"\nSum of first two entered time";
    t3.add(t1,t2);
    t3.display();
    return 0;
}