 #include<iostream>
 using namespace std;
 void area(int l)
 {
    int a=l*l;
    cout<<"area of square is"<<a;
 }
 void area(int l,int b)
 {
    int a=l*b;
    cout<<"area of rectangle is"<<a;
 }
 void area(int b,float h)
 {
    int a=0.5*b*h;
    cout<<"area of traingle is"<<a;
 }
 int main()
 {
    int l,b;
    cout<<"enter 1 foe area of square"<<endl<<" enter 2 for area of reactangle"<< "enter 3 for area of traingle"<<endl<<"enter 4 for exit"<<endl;
    int ch;  
    do
    {
        cout<<"enter you choice"<<endl;
         cin>>ch;
         switch(ch)
         {
            case 1:cout<<"enter the sside of square"<<endl;
                    cin>>l;
                    area(l);
                    break;
           case 2:cout<<"enter the length and breadth of rectangle"<<endl;
                    cin>>l;
                    cin>>b;
                    area(l,b);
                    break;
            case 3:cout<<"enter the base and  heigth of traingle"<<endl;
            int ba;
            float h;
                    cin>>ba;
                    cin>>h;
                    area(ba,h);
                    break;
            case 4: exit(0);
            default : cout<<"wrong choice"<<endl;
                        break;
         }
    }while(1);
    return 0;
 }
 
