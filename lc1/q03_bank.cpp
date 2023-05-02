#include <iostream>
class bank
{
private:
	std::string cust_name;
	int acc_no;
	std::string acc_type;
	float balance;

public:
	void set_data();
	void withdraw(int);
	void deposit(float);
	void balance_enquiry(void);
	void acc_state(void);
	int get_no(int);
};
void bank::set_data()
{
	std::cout << "\nEnter name :";
	std::cin >> cust_name;
	std::cout << "Enter account number :";
	std::cin >> acc_no;
	int type = 0;
	do
	{
		std::cout << "Choose account type" << std::endl;
		std::cout << "Type 1 for savings\nType 2 for current\n";
		std::cin >> type;
		if (type == 1)
		{
			std::cout << "You choose savings account\n";
			acc_type = "Savings";
		}
		else if (type == 2)
		{
			std::cout << "You choose current account\n";
			acc_type = "Current";
		}
		else
			std::cout << "Invalid choice!\n";
	} while ((type != 1) && (type != 2));
	balance = 0.0;
	std::cout << "Your account has been successfully created." << std::endl;
}
void bank::withdraw(int amount)
{
	if (balance - amount >= 500)
	{
		balance -= amount;
		std::cout << "Successfully withdrawn :" << amount << std::endl;
	}
	else
		std::cout << "Insufficient balance!" << std::endl;
}
void bank::deposit(float amount)
{
	balance = balance + amount;
	std::cout << "Successfully deposited :" << amount << std::endl;
}
void bank::balance_enquiry()
{
	std::cout << "Your balance is " << balance << std::endl;
}
void bank::acc_state()
{
	std::cout << "*************************************" << std::endl;
	std::cout << "Name :\t" << cust_name << std::endl;
	std::cout << "Account no.:\t" << acc_no << std::endl;
	std::cout << "Account type :\t" << acc_type << std::endl;
	std::cout << "Balance :\t" << balance << std::endl;
	std::cout << "*************************************" << std::endl;
}
int bank::get_no(int checkAccNo)
{
	if (acc_no == checkAccNo)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int Customer_limit;
	std::cout << "\nEnter number of customers:";
	std::cin >> Customer_limit;
	bank a[Customer_limit];
	int choice;
	int num;
	int Customer_count = 0;
	do
	{
		std::cout << "\n--------------MENU--------------" << std::endl;
		std::cout << "1.Type '1' to create an account" << std::endl;
		std::cout << "2.Type '2' to deposit" << std::endl;
		std::cout << "3.Type '3' to withdraw" << std::endl;
		std::cout << "4.Type '4' for balance enquiry" << std::endl;
		std::cout << "5.Type '5' for account statement" << std::endl;
		std::cout << "6.Type '6' to exit" << std::endl;
		std::cout << "Enter choice:";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			if (Customer_count < Customer_limit)
			{
				a[Customer_count].set_data();
				Customer_count++;
			}
			else
			{
				std::cout << "\nCustomer limit reached! Try again later" << std::endl;
			}
			break;
		case 2:
			std::cout << "\nEnter account number :";
			std::cin >> num;
			for (int i = 0; i <= Customer_count; i++)
				if (a[i].get_no(num) == 1)
				{
					std::cout << "Enter amount to deposit :";
					std::cin >> num;
					a[i].deposit(num);
					break;
				}
				else if (i == Customer_count)
				{
					std::cout << "Enter valid account number" << std::endl;
				}
			break;
		case 3:
			std::cout << "\nEnter account number :";
			std::cin >> num;
			for (int i = 0; i <= Customer_count; i++)
				if (a[i].get_no(num) == 1)
				{
					std::cout << "Enter amount to withdraw :";
					std::cin >> num;
					a[i].withdraw(num);
					break;
				}
				else if (i == Customer_count)
				{
					std::cout << "Enter valid account number" << std::endl;
				}
			break;
		case 4:
			std::cout << "\nEnter account number :";
			std::cin >> num;
			for (int i = 0; i <= Customer_count; i++)
				if (a[i].get_no(num) == 1)
				{
					a[i].balance_enquiry();
					break;
				}
				else if (i == Customer_count)
				{
					std::cout << "Enter valid account number" << std::endl;
				}
			break;
		case 5:
			std::cout << "\nEnter account number :";
			std::cin >> num;
			for (int i = 0; i <= Customer_count; i++)
				if (a[i].get_no(num) == 1)
				{
					a[i].acc_state();
					break;
				}
				else if (i == Customer_count)
				{
					std::cout << "Enter valid account number!!" << std::endl;
				}
			break;
		case 6:
			std::cout << "\nProgram successfully exited!!";
			break;
		default:
			std::cout << "\nEnter a valid choice!!";
		}
	} while (choice != 6);
	return 0;
}