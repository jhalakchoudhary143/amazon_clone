 #include<iostream>
using namespace std;
class Complex {
private:
    int real;
    int img;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Input method
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> img;
    }

    // Display method
    void display() const {
        cout << real << " + " << img << "i" << endl;
    }

    // Overload + operator
    
    friend void operator+(Complex s9,Complex s10) ;

    // Overload - operator
    friend void operator-(Complex s9,Complex s10);

    // Overload == operator
    friend bool operator==(Complex s9,Complex s10) ;
};
void operator+(Complex s9,Complex s10)
{
    int r=s9.real + s10.real;
     int i=s9.img + s10.img;
     cout<<"sum is "<<r<<" + "<<i<<"i"<<endl;
}
void operator-(Complex s9,Complex s10)
{
    int r=s9.real - s10.real;
     int i=s9.img - s10.img;
     cout<<"diffreance is "<<r<<" - "<<i<<"i"<<endl;
}
bool operator==(Complex s9,Complex s10)
{
    if((s9.real == s10.real)&&(s9.img ==s10.img)){

    
     cout<<"both are equal complex numbers"<<endl;
     return true;
    }
     else{

     
     cout<<"both are not equal complex numbers"<<endl;
     return false;
     }

}



int main() {
    Complex c1, c2;

    cout << " Enter first complex number:\n";
    c1.input();

    cout << "\n Enter second complex number:\n";
    c2.input();

     c1 + c2;
     c1 - c2;
    c1==c2;

    return 0;
}