#include<iostream>
using namespace std;
class studentatten{
    private:
    string name;
    int roollno;
    int total;
    int attendlecture;
    public:
    studentatten(string n,int r,int t,int aa)
    {
        if(t<=0||aa<0||aa>t){
        throw invalid_argument("Invalid leecture data");}
        name = n;
        roollno = r;
        total = t;
        attendlecture = aa;
    }
    float attenper()
    {
        return ( static_cast<float>(attendlecture)/total)*100;
    }
    void eligible()
    {
        float percentage=attenper();
          if (percentage >= 75.0) {
            cout << "Status: Eligible for exams " << endl;
        } else {
            cout << "Status: Not eligible for exams " << endl;
        }

    }
};
int main(){
     string name;
    int roll, total, attended;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter total lectures: ";
    cin >> total;
    cout << "Enter attended lectures: ";
    cin >> attended;
try{
    studentatten student(name,roll,total,attended);
    student.eligible();
}catch(const invalid_argument)
{
    cout<<"error";
}
return 0;
}