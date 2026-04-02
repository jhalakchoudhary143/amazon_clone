#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
int top=-1;
void pop(int stack[])
{
    if(top==-1)
    {
        printf("STACK UNDERFLOW");
        return;
    }
    int element=stack[top];
    top--;
    printf(" the pop element is %d\n",element);
}
 void push(int stack[],int value,int n)
{
if(top==n-1)
{
    printf("STACK OVERFLOW");
    return;
}
    top++;
    stack[top]=value;
} 
 void print(int stack[])
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}
int size()
{
     return top+1;
}
bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);
    int stack[n];
    printf("Press 1to push\n press 2 to pop \n press 3 to find the size \n press 4 to ceck the stack is empty\n press 5 to print the stack\n press 6 to exit\n");
     int choice,value,ans,ans1; 
     
     do{
        printf("enter  your choice");
     scanf("%d",&choice);
     switch(choice){
        case 1:
        printf("enter the value to push\n");
        scanf("%d",&value);
        push(stack,value,n);
        print(stack);
        break;
          case 2:
          printf("enter the value to pop");
          scanf("%d",&value);
          pop(stack);
          print(stack);
        break;
         case 3:
         ans=size();
         printf("the size is %d",ans);
        break;
         case 4:
         ans1= isempty();
         if(ans1==true)
         {
            printf("Stack is empty\n");
         }
         else{
            printf("not empty\n");
         }
        break;
         case 5:
         print(stack);
        break;
         case 6:
         exit(0);
        break;
         default :
         printf("wrong choice\n");
        break;}
     }
        while(1);
     
}