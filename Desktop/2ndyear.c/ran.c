#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
     printf("Enter the  size of array");
     scanf("%d",&n);
     int arr[n];
     printf("enter the elements of the array");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     int r = 0;
    for (int i = 0; i < n; i++) {
        r = r ^ arr[i];  
    }
    
    printf("The number that occurs odd number of times is: %d\n", r);
    
    return 0;
}