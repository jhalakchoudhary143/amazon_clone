#include<stdio.h>
#include<stdlib.h>
#define max 100 
struct queue
{
     int arr[max];
    int front,rear;
};
    void enqueue(struct queue *q1,int val)
{
    if (q1->front == max - 1)
     {
    printf("Queue overflow\n");
    return;
    }
else if(q1->front==-1)
q1->front=0;
else
q1->rear++;
q1->arr[q1->rear]=val;
}
void dequeue(){
    if (isempty(q1)) {
        printf("Queue underflow\n");
        return -1; 
    }

     int val=q1->arr[q1->front];
    else if(q1->front==q1->rear)
    {
        q1->front=0;
        q1->rear=0;
    }
   else
    q1->front++;
    return val;
}
int main()
{
    struct queue *q1=(struct queue *)malloc(sizeof(struct queue));
    struct queue *q2=(struct queue *)malloc(sizeof(struct queue));
    int ch,value;
    q1->front = q1->rear = -1;
q2->front = q2->rear = -1;

    printf("enter 1 for push \n enter 2 for pop \n enter 3 for exit");
    do{
        printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("enter the value to insert\n"); 
                scanf("%d",&value);
                push(q1,q2,value);
                display(q1);
                break;
        case 2:pop(q1);
               break;
        case 3:   exit(0);

        default:  printf("Wrong choice");
            break; 
    }}while(1);
}
 