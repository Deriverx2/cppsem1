#include <iostream>
#include <cmath>
int area(int a)
{
	int area;
	area = a * a;
	return area;
}
int area(int a, int b)
{
	int area;
	area = a * b;
	return area;
}
int area(int a, int b, int c)
{
	int area;
	int s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}
float area(float r)
{
	float area;
	area = 3.14 * r * r;
	return area;
}
float area(float d1, float d2)
{
	float area;
	area = 0.5 * d1 * d2;
	return area;
}
int main()
{
	int choice;
	float value;
	do
	{
		std::cout << "\nFinding area" << std::endl;
		std::cout << "1.Type '1' for square." << std::endl;
		std::cout << "2.Type '2' for rectangle." << std::endl;
		std::cout << "3.Type '3' for triangle" << std::endl;
		std::cout << "4.Type '4' for circle" << std::endl;
		std::cout << "5.Type '5' for rhombus" << std::endl;
		std::cout << "6.Type '6' to exit" << std::endl;
		std::cout << "Enter choice: ";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			int side;
			std::cout << "\nSQUARE" << std::endl;
			std::cout << "Enter side of square\n";
			std::cin >> side;
			value = area(side);
			std::cout << "Area of square=" << value << std::endl;
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << std::endl;
			break;
		case 2:
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			int width, breadth;
			std::cout << "\nRECTANGLE" << std::endl;
			std::cout << "Enter width and breadth of rectangle\n";
			std::cin >> width >> breadth;
			value = area(width, breadth);
			std::cout << "Area of rectangle=" << value << std::endl;
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << std::endl;
			break;
		case 3:
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			int sid1, sid2, sid3;
			std::cout << "\nTRIANGLE" << std::endl;
			std::cout << "Enter 3 sides of triangle\n";
			std::cin >> sid1 >> sid2 >> sid3;
			value = area(sid1, sid2, sid3);
			std::cout << "Area of traingle=" << value << std::endl;
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << std::endl;
			break;
		case 4:
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			float radius;
			std::cout << "\nCIRCLE" << std::endl;
			std::cout << "Enter radius of circle\n";
			std::cin >> radius;
			value = area(radius);
			std::cout << "Area of circle=" << value << std::endl;
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << std::endl;
			break;
		case 5:
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			float diag1, diag2;
			std::cout << "\nRHOMBUS" << std::endl;
			std::cout << "Enter diagonals of rhombus\n";
			std::cin >> diag1 >> diag2;
			value = area(diag1, diag2);
			std::cout << "Area of rhombus=" << value << std::endl;
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << std::endl;
			break;
		case 6:
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << "\nSuccessfully exited!!!\n";
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << std::endl;
			break;
		default:
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << "\nInvalid entry!!!\n";
			for (int j = 0; j < 35; j++)
			{
				std::cout << "-";
			}
			std::cout << std::endl;
		}
	} while (choice != 6);
	return 0;
}