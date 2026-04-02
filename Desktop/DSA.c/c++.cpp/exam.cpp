#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size";
    scanf("%d",&n);
    int arr[n];
    cout<<"enter the element of array";
for(int i=0;i<n;i++)
cin>>arr[i];
int max=arr[0];
int min=arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}
for(int i=0;i<n;i++)
{
    if(arr[i]<min)
    {
        min=arr[i];
    }
}
cout<<"the max element of array is "<<max<<endl;
cout<<"the min element of array is "<<min<<endl;
int diffrence=0;
diffrence=max-min;
cout<<"the diffrence is"<<diffrence<<endl;

    return 0;
}