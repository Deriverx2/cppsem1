#include <iostream>
class students
{
private:
	std::string name;
	int roll_no;
	float marks[3];
	char grade;

public:
	void input();
	void calcGrade();
	void display();
};
void students::input()
{
	std::cout << "\nEnter name of student :";
	std::cin >> name;
	std::cout << "Enter roll no. :";
	std::cin >> roll_no;
	std::cout << "Enter marks(out of 100)of 3 subjects\n";
	for (int i = 0; i < 3; i++)
	{
		std::cin >> marks[i];
		while (marks[i] > 100 || marks[i] < 0)
		{
			std::cout << "Error! Enter marks correctly\n";
			std::cin >> marks[i];
		}
	}
	std::cout << std::endl;
}
void students::calcGrade()
{
	int avg = (marks[0] + marks[1] + marks[2]) / 3;
	if (avg < 30)
		grade = 'F';
	else if (avg < 45)
		grade = 'E';
	else if (avg < 60)
		grade = 'D';
	else if (avg < 75)
		grade = 'C';
	else if (avg < 90)
		grade = 'B';
	else
		grade = 'A';
}
void students::display()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Roll no.: " << roll_no << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	if (grade == 'F')
		std::cout << "Status: Failed" << std::endl;
	else if (grade == 'A')
		std::cout << "Status: Passed with Distinction" << std::endl;
	else
		std::cout << "Status: Passed" << std::endl;
	std::cout << std::endl;
}
int main()
{
	int n;
	std::cout << "\nEnter number of students: ";
	std::cin >> n;
	students a[n];
	for (int i = 0; i < n; i++)
	{
		a[i].input();
		a[i].calcGrade();
	}
	std::cout << "\tMARKLIST" << std::endl;
	for (int i = 0; i < n; i++)
	{
		a[i].display();
		for (int j = 0; j < 75; j++)
		{
			std::cout << "-";
		}
		std::cout << std::endl;
	}
	return 0;
}