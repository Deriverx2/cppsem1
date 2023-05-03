#include <iostream>
class times
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void input(void);
    void add(times, times);
    void display(void);
};

void times::input(void)
{
    std::cout << "Enter hours,minutes and seconds" << std::endl;
    std::cin >> hours >> minutes >> seconds;
}

void times::add(times t1, times t2)
{
    seconds = t1.seconds + t2.seconds;
    minutes = seconds / 60;
    seconds = seconds % 60;
    minutes = t1.minutes + t2.minutes + minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = t1.hours + t2.hours + hours;
}

void times::display(void)
{
    std::cout << hours << ":Hours " << minutes << ":Minutes " << seconds << ":Seconds " << std::endl;
}

int main()
{
    times t1, t2, t3;
    std::cout << "\nEnter fist time:" << std::endl;
    t1.input();
    std::cout << "Enter second time:" << std::endl;
    t2.input();
    for (int j = 0; j < 35; j++)
    {
        std::cout << "-";
    }
    std::cout << "\nFirst time:\t";
    t1.display();
    std::cout << "Second time:\t";
    t2.display();
    std::cout << "Resultant time:\t";
    t3.add(t1, t2);
    t3.display();
    for (int j = 0; j < 45; j++)
    {
        std::cout << "-";
    }
    return 0;
}