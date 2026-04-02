#include<iostream>
using namespace std;
class A{
    public:
  virtual void show()=0;
};
class B:public A{
    public: 
    void show()
    {
        cout<<"derived class";
    }
} ;
int main()
{
   A *ptr;
   B obj;
   ptr=&obj;
   ptr->show();
    return 0;
}