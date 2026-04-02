#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
# define MAXSIZE 50
struct queue{
    int arr[MAXSIZE];
    int front,rear;
};
void enqueue(struct queue *s,int value)
{
    if(s->front>=MAXSIZE-1)
    {
        printf("queue is overflow");
    }
    s->rear++;
    s->arr[s->rear]=value;

}
void dequeue(struct queue *s)
{
    if(s->front==-1)
    {
        printf("queue is underflow");
    }
    s->front++;
}
void display(struct queue *s)
{
    if(s->front==-1)
    {
        printf("queue is empty");
    }
    for(int i=0;i<s->rear;i++)
    {
        printf("%d",s->arr[i]);
    }
}
int main()
{
int ch,val;
struct queue *s=(struct queue*)malloc( sizeof(struct queue));
s->front=s->rear=-1;
printf("Enter the choice\n press 1 for enqueue\n press 2 for dequeue\n press 3 for display\n press 4 for exit");

do{
    printf("enter your choice :");
    scanf("%d",ch);
switch(ch)
{
    case 1: printf("enter the value :");
             scanf("%d",&val);
                enqueue(s,val);
                break;
    case 2:  dequeue(s);
                 break;
    case 3: display(s);
                break;
    case 4:   exit(0);
}
}while(1);

}