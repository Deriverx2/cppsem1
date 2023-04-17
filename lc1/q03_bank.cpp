#include<iostream>
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
	std::cout<<"\nEnter name :";
	std::cin>>cust_name;
	std::cout<<"\nEnter account number :";
	std::cin>>acc_no;
	int type=0;
	std::cout<<"\nChoose account type"<<std::endl;
	std::cout<<"Type 1 for savings\nType 2 for current\n";
	std::cin>>type;
	if(type==1)
	{
		std::cout<<"\nYou choose savings account";
		acc_type="Savings";
	}
	else if(type==2)
	{
		std::cout<<"\nYou choose current account";
		acc_type="Current";
	}
	else
		std::cout<<"\nInvalid choice!";
	std::cout<<"\nEnter bank balanace"<<std::endl;
	std::cin>>balance;
}
void bank::withdraw(int amount)
{
	if (balance-amount>=500)
	{
		balance-=amount;
		std::cout<<"\nSuccessfully withdrawn"<<amount;
	}
	else
		std::cout<<"\nInsufficient balance!";
}
void bank::deposit(float amount)
{
	balance=balance+amount;
	std::cout<<"\nSuccessfully deposited"<<amount;
}
void bank::balance_enquiry()
{
	std::cout<<"Your balance is "<<balance;
}
void bank::acc_state()
{
	std::cout<<"*************************************";
	std::cout<<"Name :"<<cust_name<<std::endl;
	std::cout<<"Account no.:"<<acc_no<<std::endl;
	std::cout<<"Account type :"<<acc_type<<std::endl;
	std::cout<<"Balance :"<<balance<<std::endl;
	std::cout<<"*************************************";
}
int bank::get_no(int a)
{
	if (acc_no==a)
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
	int n;
	std::cout<<"Enter number of customers"<<std::endl;
	std::cin>>n;
	bank a[n];
	int choice;
	int num;
	int j=0;
	do
	{
		std::cout<<"\n---------MENU---------"<<std::endl;
		std::cout<<"1.Type '1' to create an account"<<std::endl;
		std::cout<<"2.Type '2' to deposit"<<std::endl;
		std::cout<<"3.Type '3' to withdraw"<<std::endl;
		std::cout<<"4.Type '4' for balance enquiry"<<std::endl;
		std::cout<<"5.Type '5' for account statement"<<std::endl;
		std::cout<<"6.Type '6' to exit"<<std::endl;
		std::cin>>choice;
		switch(choice)
		{
			case 1:
				if (j<n)
				{
					a[j].set_data();
					j++;
				}
				else
				{
					std::cout<<"Customer limit reached! Try again later";
				}
				break;
			case 2:
				std::cout<<"\nEnter account number"<<std::endl;
				std::cin>>num;
				for (int i=0;i<=j;i++)
					if (a[i].get_no(num)==1)
					{
						std::cout<<"\nEnter amount to deposit";
						std::cin>>num;
						a[i].deposit(num);
						break;
					}
					else if (i==j)
					{
						std::cout<<"\nEnter valid account number";
					}
				break;
			case 3:
				std::cout<<"\nEnter account number"<<std::endl;
				std::cin>>num;
				for (int i=0;i<=j;i++)
					if (a[i].get_no(num)==1)
					{
						std::cout<<"\nEnter amount to deposit";
						std::cin>>num;
						a[i].withdraw(num);
						break;
					}
					else if (i==j)
					{
						std::cout<<"\nEnter valid account number";
					}
				break;
			case 4:
				std::cout<<"\nEnter account number"<<std::endl;
				std::cin>>num;
				for (int i=0;i<=j;i++)
					if (a[i].get_no(num)==1)
					{
						a[i].balance_enquiry();
						break;
					}
					else if (i==j)
					{
						std::cout<<"\nEnter valid account number";
					}
				break;
			case 5:
				std::cout<<"\nEnter account number"<<std::endl;
				std::cin>>num;
				for (int i=0;i<=j;i++)
					if (a[i].get_no(num)==1)
					{
						a[i].acc_state();
						break;
					}
					else if (i==j)
					{
						std::cout<<"\nEnter valid account number!!";
					}
				break;
			case 6:
				std::cout<<"\nProgram successfully exited";
				break;
			default:
				std::cout<<"\nEnter a valid choice!!";
		}
	}while(choice!=6);
	return 0;
}
