#include<stdio.h>
#include<stdlib.h>
void main()
{
     int n,k,d;
     printf("Enter the  size of array");
     scanf("%d",&n);
     int arr[n];
     printf("enter the elements of the array");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     printf("Enter how many rotation made?");
     scanf("%d",&k);
     for(int i=0;i<n;i++)
     {
        printf("%d\t",arr[i]);
     }
     printf("\n");
     k=k%n;
     for(int i=0;i<k;i++)
     {
        d=arr[0];
        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
            
         }
         arr[n-1]=d;
     }
     for(int i=0;i<n;i++)
     {
        printf("%d\t",arr[i]);
     }
}