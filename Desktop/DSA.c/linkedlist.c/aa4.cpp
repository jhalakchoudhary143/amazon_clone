#include<iostream>
using namespace std;
class logger{
public:
virtual  void draw()=0;
virtual ~logger()
{
    cout<<"logger destructor;";
}
};
class circle : public logger{
    public:
void draw()
{
cout<<"this is circle class";
}
 ~circle() {
        cout << "Circle destructor called\n";
    }

};
class rectangle : public logger{
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
    logger *ptr= new circle();
    ptr->draw();
    delete ptr;
    logger *ptr1=new rectangle();
    ptr1->draw();
    delete ptr1;

}
