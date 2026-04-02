
//	Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input) 
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int pos=0,step=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cin >>k;
for(int i=0;i<n;i++)
{
if(arr[i]==k)
{
    pos=1;
    step=i+1;
}
}
if(pos==1)
{
    cout<<"present "<<step;
}
else{
    cout<<"not present"<<step;
}
}