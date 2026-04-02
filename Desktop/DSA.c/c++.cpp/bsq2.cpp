//Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input).


#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int low=0,high=n-1;
    int comp;
while(low<=high)
{
   int mid=low+(high-low)/2;
    if(arr[mid]==key){
    comp++;
    return 1;}
    else if(arr[mid]<key)
    {
        low=mid+1;
        comp++;
    }
    else if(arr[mid]>key)
    {
        comp++;
        high=mid-1;
    }
}
return 0;
}
int main()
{
    int n,k,pos;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cin >>k;
pos=binarysearch(arr,n,k);
if(pos==1)
{
    cout<<"present ";
}
else{
    cout<<"not present";
}
}