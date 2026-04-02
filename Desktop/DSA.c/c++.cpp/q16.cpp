#include<iostream>
using namespace std;
class add{
int age;
public:
add(int a)
{
    age=a;

}friend void operator-( const add& obj);

friend void operator++(add& obj);
friend void operator++(add& obj,int);
friend void operator--(add& obj);
friend void operator--(add& obj,int);
};
void operator-(const add& obj)
{
    cout<<-obj.age;
}
void operator++(add& obj)
{
    cout<<++obj.age;
}
void operator--(add& obj)
{
    cout<<--obj.age;
}
void operator--(add& obj,int)
{
    cout<<--obj.age;
}
void operator++(add& obj ,int) {
        cout << "\nPostfix aaa++: " << obj.age++ << endl;
    }
int main()
{
int age=10;
add ag(age);
-ag;
++ag;
ag++;
--ag;
ag--;

    return 0;
}