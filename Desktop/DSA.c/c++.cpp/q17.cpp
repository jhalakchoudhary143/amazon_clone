#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "I am Parent\n";
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "I am Child\n";
    }
};

int main() {
    Child obj;
    obj.show();    
    obj.display();
    return 0;
}