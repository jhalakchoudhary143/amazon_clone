#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int matrix[size][size];
    printf("Enter elements:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int row=0;
    int col=0;
    int m=size;
    int n=size;
    while(row<m && col<n){
        if(row+1==m || col+1==n)    break;
        int prev=matrix[row+1][col];
        for(int j=col;j<n;j++){         //loop for col
            int temp=matrix[row][j];
            matrix[col][j]=prev;
            prev=temp;
        }
        row++;
        for(int i=row;i<m;i++){         //loop for row
            int temp=matrix[i][n-1];
            matrix[i][n-1]=prev;
            prev=temp;
        }
        n--;
        for(int j=n-1;j>=col;j--){        //loop for col
            int temp=matrix[m-1][j];
            matrix[m-1][j]=prev; 
            prev=temp;
        }
        m--;
        for(int i=m-1;i>=row;i--){         //loop for rows
            int temp=matrix[i][col];
            matrix[i][col]=prev;
            prev=temp;
        }
        col++;
    }

    printf("Output Matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
189
704
744
54 */
