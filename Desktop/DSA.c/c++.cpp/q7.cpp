#include<iostream>
#include<string.h>
using namespace std;
class bank{
    private:
string name;
string accno;
string type;
int balanced_ammount;
public:
void member_function()
{
    cout<<"enter the name ";
    getline(cin, name);
    cout<<"enter the account number"<<endl;
     getline(cin, accno); 
    cout<<"enter the account type :: saving or current"<<endl;
     getline(cin, type); 
    cout<<"enter the balanced_amount"<<endl;
    cin>>balanced_ammount;
}
void deposite()
{
    int amount;
    cout<<"Enter the amount to deposist"<<endl;
    cin>>amount;
    if(amount>0)
    {
       balanced_ammount= balanced_ammount+amount;
    }
    else
    {
        cout<<"Invalid amount enter";
    }
}
void withdraw()
{
    int wa;
    cout<<"your balance is "<<balanced_ammount<<endl;
    cout<<"enter the amount to withdral";
    cin>>wa;
    if(wa>=0)
    {
        balanced_ammount=balanced_ammount-wa;
    }
    else
    {
        cout<<"Invalid amount enter";
    }
    
}
void display()
{
    cout<<"user name is   "<<name<<endl;
    cout<<"acc no is  is   "<<accno<<endl;
    cout<<"acc type is   "<<type<<endl;
    cout<<"balanced left is"<< balanced_ammount<<endl;
}

};
int main()
{
    bank b;
    b.member_function();
    b.deposite();
    b.withdraw();
    b.display();
    return 0;
}