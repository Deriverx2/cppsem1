#include<iostream>
class students
{
	private:
		std::string name;
		int roll_no;
		int marks[3];
		char grade;
	public:
		void input();
		void calcGrade();
		void display();
};
void students::input()
{
	std::cout<<"\nEnter name of student :";
	std::cin>>name;
	std::cout<<"Enter roll no. :";
	std::cin>>roll_no;
	std::cout<<"Enter marks(out of 100)of 3 subjects\n";
	for(int i=0; i<3; i++)
	{
		std::cin>>marks[i];
		while (marks[i]>100||marks[i]<0)
		{
			std::cout<<"Error! Enter marks correctly\n";
			std::cin>>marks[i];
		}
	}
}
void students::calcGrade()
{
	int avg=(marks[0]+marks[1]+marks[2])/3;
	if (avg<20)
		grade='E';
	else if (avg<40)
		grade='D';
	else if (avg<60)
		grade='C';
	else if (avg<80)
		grade='B';
	else
		grade='A';
}
void students::display()
{
	std::cout<<"\nName: "<<name<<std::endl;
	std::cout<<"Roll no.: "<<roll_no<<std::endl;
	std::cout<<"Grade: "<<grade<<std::endl;
}
int main()
{
	int n;
	std::cout<<"Enter number of students: ";
	std::cin>>n;
	students a[n];
	for(int i=0; i<n; i++)
	{
		a[i].input();
		a[i].calcGrade();
	}
	for(int i=0;i<n ;i++)
	{
		a[i].display();
	}
	return 0;
}