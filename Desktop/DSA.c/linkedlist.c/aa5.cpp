#include<iostream>
using namespace std;
class devices{
private:
string devicename;
public:
devices(string dname)
{
    devicename=dname;
}
void display()
{ 
    cout<<devicename;
}

};
class printer: virtual public devices{
    public:
    printer(string dname):devices(dname){}
void process()
{
    cout<<" printer operation";
}
};
class scanner:  virtual public devices{
    public:
     scanner(string dname) : devices(dname) {}

void process()
{
    cout<<" scanner operation";
}
};
class Allnone: public printer,public scanner{
    public:
     Allnone(string dname) : devices(dname), printer(dname), scanner(dname) {}

    void process(){
        printer::process();
        scanner::process();
    }
};

int main()
{
   string name;
   getline(cin,name);
   Allnone obj(name);
   obj.display();
   obj.process();

}
