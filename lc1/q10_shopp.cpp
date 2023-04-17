#include<iostream>
class store
{
    private:
        std::string code[50];
        std::string name[50];
        float price[50];
        int quantity[50];
        int icount=0;
    public:
        void add_item(std::string,std::string, float, int);
        void del_item(std::string);
        void display();
        void purchase(store&,std::string, int);
        void bill();
};

void store::add_item(std::string cod, std::string item, float cost=0, int amount=0 )
{
    code[icount]=cod;
    name[icount]=item;
    price[icount]=cost;
    quantity[icount]=amount;
    icount++;
}

void store::del_item(std::string dcode)
{
    for(int i=0;i<icount;i++)
    {
        if(dcode==code[i])
        {
            for(int j=i;j<icount-1;j++)
            {
                code[j]=code[j+1];
                name[j]=name[j+1];
                price[j]=price[j+1];
                quantity[j]=quantity[j+1];
            }
            icount--;
        }
        else if(i==icount & dcode!=code[i])
        {
            std::cout<<"Wrong code! please check the code and try again"<<std::endl;
        }
    }
}

void store::display()
{
    int S_no=1;
    for (int i=0;i<icount;i++)
    {
        if (price[i]!=0 or quantity[i]!=0)
        {
            std::cout<<S_no<<"\t"<<code[i]<<"\t"<<name[i]<<"\t"<<price[i]<<"\t"<<quantity[i]<<std::endl;
            S_no++;
        }
    }
}

void store::purchase(store& shop, std::string cod, int amount)
{
    for(int i=0;i<shop.icount;i++)
    {
        if(cod==shop.code[i])
        {
            if (shop.quantity[i]<=amount)
            {
                std::cout<<"Sufficient amount is not present."<<std::endl;
            }
            else
            {
                add_item(shop.code[i],shop.name[i],shop.price[i],amount);
                shop.quantity[i]-=amount;
                break;
            }
        }
        else if(i==shop.icount & cod!=shop.code[i])
        {
            std::cout<<"Wrong code! please check the code and try again"<<std::endl;
        }
    }
}

void store::bill()
{
    int bill=0;
    for (int i=0;i<icount;i++)
    {
        bill+=price[i]*quantity[i];
    }
    std::cout<<"Total amount :"<<bill<<std::endl;
}

int main()
{
    std::string code;
    std::string name;
    float price;
    int amount;
    int ccart=0;
    store Item,cart[20];
    int choice;
    do{
        std::cout<<"Enter 1 for add items to shop"<<std::endl;
        std::cout<<"Enter 2 to remove items from shop"<<std::endl;
        std::cout<<"Enter 3 to display items in shop"<<std::endl;
        std::cout<<"Enter 4 to add to cart"<<std::endl;
        std::cout<<"Enter 5 to remove from cart"<<std::endl;
        std::cout<<"Enter 6 to show cart and purchase"<<std::endl;
        std::cout<<"Enter 7 to exit"<<std::endl;
        std::cout<<"Your choice ";
        std::cin>>choice;
        switch(choice)
        {
            case 1:
                std::cout<<"\nEnter code, name, price and quantity of item"<<std::endl;
                std::cin>>code>>name>>price>>amount;
                Item.add_item(code,name,price,amount);
                break;
            case 2:
                std::cout<<"\nEnter code of item to remove ";
                std::cin>>code;
                Item.del_item(code);
                break;
            case 3:
                std::cout<<"\n--------------------ITEM MENU--------------------"<<std::endl;
                std::cout<<"S.no.\tCode\tName\tPrice\tQuantity"<<std::endl;
                Item.display();
                std::cout<<std::endl<<std::endl;
                break;
            case 4:
                std::cout<<"Enter code and quantity of item\n";
                std::cin>>code>>amount;
                cart[ccart].purchase(Item,code,amount);
                break;
            case 5:
                std::cout<<"Enter code of item to remove";
                std::cin>>code;
                cart[ccart].del_item(code);
                break;
            case 6:
                std::cout<<"\n--------------------Cart--------------------"<<std::endl;
                std::cout<<"S.no.\tCode\tName\tPrice\tQuantity"<<std::endl;
                cart[ccart].display();
                std::cout<<std::endl<<std::endl;
                cart[ccart].bill();
                std::cout<<"Enter 1 to purchase"<<std::endl;
                std::cout<<"Otherwise, type any other number"<<std::endl;
                std::cin>>choice;
                if (choice==1)
                {
                    ccart++;
                    std::cout<<"Thank you for your purchase"<<std::endl;
                }
                break;
            case 7:
                std::cout<<"Thank You, for using the code!";
                break;
            default:
                std::cout<<"\nEnter a valid choice"<<std::endl;
        }
    }while(choice!=7);
    return 0;
}