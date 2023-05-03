#include<iostream>
class ITEM
{
    private:
        static int count;
    public:
        void get_data();
        void get_count()
        {
            std::cout<<"Count="<<count<<"\n";
        }
};

void ITEM::get_data()
{
    count++;
}

int ITEM::count;

int main()
{
    const int num=10;
    ITEM a[num];
    int dot;
    int i=0;
    do
    {
        std::cout<<"\nEnter '1' to create object"<<std::endl;
        std::cout<<"Enter '2' to show count"<<std::endl;
        std::cout<<"Enter '3' to exit"<<std::endl;
        std::cout<<"Choice: ";
        std::cin>>dot;
        if(dot==1)
        {
            a[i];
            std::cout<<"Object created"<<std::endl;
            a[i].get_data();
            i++;
        }
        else if(dot==2)
        {
            a[i].get_count();
        }
        else if(dot==3)
        {
            std::cout<<"You have successfully exited!!!";
        }
        else if(dot!=1 && dot!=2 && dot!=3)
        {
            std::cout<<"Invalid choice ";
        }
    }while(dot!=3);
    return 0;    
}