#include<iostream>
#include<string>
using namespace std;
class bank{
private:
string name;
string accno;
string type;
int balance;
public:
void checkin(string na,string ano,string t,int bal)
{
name=na;
accno=ano;
type=t;
balance=bal;
}
void checkout()
{
    cout<<"acount details"<<endl;
    cout<<"name is"<<name;
    cout<<"current balance"<<balance;
}


};
int main()
{
    bank b;
    string na,ano,t;
    int bal;
    cout<<"enter bank account holder name"<<endl;
    getline(cin,na);
    cout<<"enter accc no"<<endl;
    getline(cin,ano);
    cout<<"enter acc type"<<endl;
    getline(cin,t);
    cout<<"enter balance"<<endl;
    cin>>bal;
    b.checkin(na,ano,t,bal);
    b.checkout();
    return 0;
}