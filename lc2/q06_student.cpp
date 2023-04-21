#include <iostream>
class student
{
protected:
	int roll_no;

public:
	void get_roll(int a) { roll_no = a; }
	void show_no() { std::cout << "Roll no: " << roll_no << std::endl; }
};
class test : virtual public student
{
protected:
	float sub1, sub2, sub3;

public:
	void get_marks(float a, float b, float c)
	{
		sub1 = a;
		sub2 = b;
		sub3 = c;
	}
	void show_marks() { std::cout << "Marks for sub1: " << sub1 << std::endl
								  << "Marks for sub2: "
								  << sub2 << std::endl
								  << "Marks for sub3: " << sub3 << std::endl; }
};
class sports : virtual public student
{

protected:
	float score;

public:
	void get_score(float d) { score = d; }
	void show_score() { std::cout << "Marks for sports: " << score << std::endl; }
};
class result : public test, public sports
{
private:
	float total;

public:
	void display()
	{
		total = sub1 + sub2 + sub3 + score;
		std::cout << "Total marks(out of 350): " << total << std::endl;
		(total < 110) ? std::cout << "FAILED" : std::cout << "PASS";
	}
};
int main()
{
	int num, roll;
	float marks[3], smark;
	std::cout << "Enter number of students: ";
	std::cin >> num;
	result studs[num];
	for (int i = 0; i < num; i++)
	{
		std::cout << "Enter details for student " << i + 1 << std::endl;
		std::cout << "Enter roll number: ";
		std::cin >> roll;
		studs[i].get_roll(roll);
		std::cout << "\nEnter marks(out of 100)of 3 subjects\n";
		for (int i = 0; i < 3; i++)
		{
			std::cin >> marks[i];
			while (marks[i] > 100 || marks[i] < 0)
			{
				std::cout << "Error!Enter marks correctly\n";
				std::cin >> marks[i];
			}
		}
		studs[i].get_marks(marks[0], marks[1], marks[2]);
		std::cout << "Enter score of sports(out of 50): ";
		std::cin >> smark;
		while (smark > 50 || smark < 0)
		{
			std::cout << "Error!Enter marks correctly\n";
			std::cin >> marks[i];
		}
		studs[i].get_score(smark);
	}
	for (int i = 0; i < num; i++)
	{
		std::cout << "\n\nDetails of student " << i + 1 << std::endl;
		studs[i].show_no();
		studs[i].show_marks();
		studs[i].show_score();
		studs[i].display();
	}
	return 0;
}