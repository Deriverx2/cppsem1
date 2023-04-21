#include<iostream>
#include<cmath>
int area(int a)
{
	int area;
	area=a*a;
	return area;
}
int area(int a, int b)
{
	int area;
	area=a*b;
	return area;
}
int area(int a,int b, int c)
{
	int area;
	int s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
float area(float r)
{
	float area;
	area=3.14*r*r;
	return area;
}
float area(float d1,float d2)
{
	float area;
	area=0.5*d1*d2;
	return area;
}
int main()
{
	int choice;
	float value;
	int flag=0;
	while (flag==0)
	{
		std::cout<<"\nFinding area"<<std::endl;
		std::cout<<"1.Type '1' for square."<<std::endl;
		std::cout<<"2.Type '2' for rectangle."<<std::endl;
		std::cout<<"3.Type '3' for triangle"<<std::endl;
		std::cout<<"4.Type '4' for circle"<<std::endl;
		std::cout<<"5.Type '5' for rhombus"<<std::endl;
		std::cout<<"6.Type '6' to exit"<<std::endl;
		std::cout<<"Enter choice: ";
		std::cin>>choice;
		switch(choice)
		{
			case 1:
				int side;
				std::cout<<"Enter side of square\n";
				std::cin>>side;
				value=area(side);
				std::cout<<"Area of square="<<value<<std::endl;
				break;
			case 2:
				int width,breadth;
				std::cout<<"Enter width and breadth of rectangle\n";
				std::cin>>width>>breadth;
				value=area(width,breadth);
				std::cout<<"Area of rectangle="<<value<<std::endl;
				break;
			case 3:
				int sid1,sid2,sid3;
				std::cout<<"Enter 3 sides of triangle\n";
				std::cin>>sid1>>sid2>>sid3;
				value=area(sid1,sid2,sid3);
				std::cout<<"Area of traingle="<<value;
				break;
			case 4:
				float radius;
				std::cout<<"Enter radius of circle\n";
				std::cin>>radius;
				value=area(radius);
				std::cout<<"Area of circle="<<value;
				break;
			case 5:
				float diag1,diag2;
				std::cout<<"Enter diagonals of rhombus\n";
				std::cin>>diag1>>diag2;
				value=area(diag1,diag2);
				std::cout<<"Area of rhombus="<<value;
				break;
			case 6:
				flag=1;
				std::cout<<"Successfully exited\n";
				break;
			default:
				std::cout<<"Invalid entry!!!\n";
		}
	}
	return 0;
}