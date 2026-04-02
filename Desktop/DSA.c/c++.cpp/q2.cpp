#include<iostream>
using namespace std;
#include<string.h>

string cut(string ch,char c)
{
    string result;
    for (int i = 0; i < ch.length(); i++) {
        if (ch[i] != c) {
            result += ch[i];
        }
        }
    return result;
}
int main() 
{
    string ch;
    cout<<"enter the string"<<endl;
    getline(cin,ch);
    cout<<"Input string is"<<ch<<endl;
    char c;
    cout<<"enter the character to remove"<<endl;
    cin>>c;
    string re=cut(ch,c);
    cout<<re;
    return 0;
}