#include<iostream>
using namespace std;
class add{
int age;
public:
add(int a)
{
    age=a;

}void operator-()
{
    cout<<-age;
}
void operator++()
{
    cout<<++age;
}
void operator++(int) {
        cout << "\nPostfix aaa++: " << age++ << endl;
    }
void operator--()
{
    cout<<--age;
}
void operator--(int)
{
    cout<<--age;
}
};
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