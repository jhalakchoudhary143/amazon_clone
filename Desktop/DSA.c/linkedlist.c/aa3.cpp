#include<iostream>
using namespace std;
class shapes{
public:
virtual  void draw()=0;
virtual ~shapes()
{
    cout<<"shape destructor;";
}
};
class circle : public shapes{
    public:
void draw()
{
cout<<"this is circle class";
}
 ~circle() {
        cout << "Circle destructor called\n";
    }

};
class rectangle : public shapes{
    public:
void draw()
{
cout<<"this is rectangle class";
}
 ~rectangle() {
        cout << "Rectangle destructor called\n";
    }

};
int main()
{
    shapes *ptr= new circle();
    ptr->draw();
    delete ptr;
    shapes *ptr1=new rectangle();
    ptr1->draw();
    delete ptr1;

}
