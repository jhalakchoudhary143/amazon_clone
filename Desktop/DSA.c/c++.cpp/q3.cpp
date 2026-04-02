#include<iostream>
using namespace std;
#include<string.h>
int main() 
{
    string ch;
    cout<<"enter the string"<<endl;
    getline(cin,ch);
   
    for(int i=0;i<ch.length();i++)
    {
         int count=0;
        char cp=ch[i];
        for(int j=0;j<ch.length();j++)
        {
            if(cp==ch[j])
            count=count+1;
        }
        if(count==1)
        cout<<ch[i];
    }
    
    return 0;
}