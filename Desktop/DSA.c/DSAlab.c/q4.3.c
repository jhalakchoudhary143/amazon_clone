#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAXSIZE 20
struct stack{
    int arr[MAXSIZE];
     int top ;
};
void push(struct stack *s,int value)
{
    if((s->top)>=MAXSIZE-1)
    {
        printf("Stack overflow");
    }
    s->top++;
    s->arr[s->top]=value;

}
int pop(struct stack *s)
{
    if(s->top==-1)
    {
        printf("stack underflow");
    }
    int value=s->arr[s->top];
    s->top--;
    return value;
}
int main()
{int result=0;
char str[50];
printf("Enter the postfix expression\n");
scanf("%[^\n]s",str);
struct stack *s=(struct stack*)malloc( sizeof(struct stack));
s->top=-1;
for(int i=0;i<strlen(str);i++)
{
    if(str[i]==' ')
    {
 
        continue;
    }
    else if(str[i]>='0' && str[i]<='9')
    {
        int num=0;
        while(str[i]!=' ')
        {
            num=num*10+str[i]-'0';
            i++;
        }
        

        push(s,num);
    }
    else{
        int a=pop(s);
    
        int b=pop(s);
        if(str[i]=='+')
        result=a+b;
        else if(str[i]=='-')
        result=b-a;
        else if(str[i]=='*')
        result=b*a;
        else if(str[i]=='/')
        result=b/a;
        push(s,result);
    }
}
printf("%d",s->arr[s->top]);
}