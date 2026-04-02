#include<iostream>
#include<string.h>
using namespace std;
class Hotel{
private:
int rno;
char name[20];
float tariff;
int nod;
void calc()
{
    float a=(float)nod*tariff;
    if(a>10000)
    {
        cout<<"total amount is ="<<1.05*a<<endl;
    }
    else{
        cout<<"total amount is ="<<a<<endl;
    }
}
public:
void checkin(int r,char *nm,float ta,int d){
rno=r;
strcpy(name,nm);
tariff=ta;
nod=d;
}
void checkout(){
    cout<<"your list :"<<endl;
    cout<<"room no is ="<<rno<<endl;
    cout<<"name  is ="<<name<<endl;
    cout<<"tariff is ="<<tariff<<endl;
    cout<<" no of dayas is ="<<nod<<endl;
    calc();
}
};
int main()
{  Hotel h;
    int rno,nod;
    float tariff;
    char n[20];
    cout<<"enter the following details"<<endl;
    cout<<"enter the room number"<<endl;
    cin>>rno;
    cout<<"enter the name"<<endl;
    cin.ignore();
    cin.getline(n,20);
    cout<<"enter the per day charges"<<endl;
    cin>>tariff;
    cout<<"enter the number of days to stay"<<endl;
    cin>>nod;
    h.checkin(rno,n,tariff,nod);
    h.checkout();
    return 0;

}