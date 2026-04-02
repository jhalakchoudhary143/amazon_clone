#include<iostream>
#include<stdexcept>
using namespace std;
class Invalidage : public exception{
    private:
    string meesage;
    public:
    Invalidage(int age){
        meesage="invalid age";
    }
};
class aa{
    private: int age;
    public:
    aa(int a)
    {
        if(a<18){
            throw Invalidage(a);  
        }else{
            cout<<"valid age";
        }
        age=a;
    }
};
int main()
{
    int age;
    cin>>age;
    try{
        aa stu(age);
    }catch(const Invalidage)
    {
        cout<<"error";
    }
}