#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the element to seacrh");
    scanf("%d",&k);
    int row=0,col=n-1,found=0;
    while(row<n && col>=0)
    {
        if(arr[row][col]==k)
        {
            found =1;
            printf("present");
            break;
        }
        else if(arr[row][col]>k)
        {
         col--;
        }
        else{
            row++;
        }
    }
    if(!found)
    {
        printf("not present");
    }

        return 0;
}