#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head=NULL;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value to insert");
    scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
head=newnode;
printf("%d",newnode->data);
}