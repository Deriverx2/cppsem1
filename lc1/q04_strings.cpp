#include <iostream>
#include <cstring>
class strings
{
private:
    char *name;
    int leng;

public:
    void input(void);
    void compare(strings);
    strings concatenate(strings);
    void length(void);
    void display(void);
};

void strings::input()
{
    std::string temp;
    std::cin >> temp;
    leng = temp.size();
    name = new char[leng + 1];
    for (int i = 0; i < leng; i++)
        name[i] = temp[i];
}

void strings::compare(strings s1)
{
    if (leng == s1.leng)
        std::cout << "\nGiven strings are of same size ";
    else if (leng > s1.leng)
        std::cout << "\nFirst string is larger than second string";
    else
        std::cout << "\nSecond string is larger than first string";
}

strings strings::concatenate(strings s1)
{
    strings temp;
    temp.leng = leng + s1.leng;
    temp.name = new char[temp.leng + 1];
    strcpy(temp.name, name);
    strcat(temp.name, s1.name);
    return temp;
}

void strings::length()
{
    std::cout << "\nLength of " << name << " is " << leng << std::endl;
}

void strings::display()
{
    std::cout << name << std::endl;
}

int main()
{
    strings s1, s2, s3;
    std::cout << "\nEnter first string" << std::endl;
    s1.input();
    s1.length();
    std::cout << "\nEnter second string" << std::endl;
    s2.input();
    s2.length();
    s1.compare(s2);
    s3 = s1.concatenate(s2);
    s3.length();
    return 0;
}