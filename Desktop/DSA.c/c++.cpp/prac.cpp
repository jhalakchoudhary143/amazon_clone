#include<iostream>
using namespace std;
class Distance{
private:
int feet;
int inches;
public:
Distance(int f=0,int inc=0)
{
    feet=f;
    inches=inc;
}
//input
void input()
{
    cout<<"Enter the feet "<<endl;
    cin>>feet;
    cout<<"Enter the inches "<<endl;
    cin>>inches;
}
void display()
{
    cout<<feet<<"feet"<<inches<<"inches"<<endl;
}
friend Distance operator+(Distance d1,Distance d2);
};
Distance operator+(Distance d1,Distance d2)
{
    int d=d1.inches+d2.inches;
int s=d1.feet+d2.feet+d/12;
d%=12;
return Distance(s,d);

}
int main()
{
    Distance d1,d2,d3;
    cout<<"enter the first distance"<<endl;
    d1.input();
    cout<<"enter the second distance"<<endl;
    d2.input();
d3=d1+d2;
cout<<"diplay "<<endl;
d3.display();

}