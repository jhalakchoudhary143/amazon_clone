#include<iostream>
using namespace std;
class areaofreactangle{
    private:
    int length;
    int breadth;
    public:
    void takedimenstion(int l,int b)
    {
        length=l;
        breadth=b;
    }
   void area()
    {
       cout<<"AREA=" <<length*breadth;
    }
};
int main()
{
    areaofreactangle r;
    int l,b;
    cout<<"enter the length of reactangle"<<endl;
    cin>>l;
    cout<<"enter the breadth of reactangle"<<endl;
    cin>>b;
   r.takedimenstion(l,b);
cout<<"area is egual to "<<endl;
r.area();    
}