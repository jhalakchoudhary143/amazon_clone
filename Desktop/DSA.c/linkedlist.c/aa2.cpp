#include<iostream>
#include<stdexcept>
using namespace std;
class aa{
    private: 
    string sentence;
    public:
    aa(string sen)
    {
       if(sen.length()>20)
       {
        throw (invalid_argument("string length greater than 20"));
       }else{
        for(char &c: sen)
        {
            if(c>='a'&&c<='z'){
            c=c-32;}
        }
        cout<<"string is accepted";
        cout<<sen;
       }
       sentence=sen;
    }
};
int main()
{
    string sen;
    getline(cin,sen);
    try{
        aa stu(sen);
    }catch(const invalid_argument)
    {
        cout<<"string is not accepted";
    }
}