//insert at begning
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *newnode(int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    return temp;
}
void insert_at_begning(struct node **head,int val)
{
    struct node *temp=newnode(val);
    temp->next=*head;
    *head=temp;
}
void insertatend(struct node**head,int value)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    if(*head==NULL)
    {
        *head=new;
        return;
    }

    struct node *temp=*head;
    while(temp->next)
    {
        temp=temp->next;

    }
    temp->next=new;

}
void printlist(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head=NULL;
    int n, val;
    //scanf("%d",&n);
//for(int i=0;i<n;i++)//
//{
int ch;
printf("pree 1 for insert \n press 2 for insert at end \n press 3 for printlist \n press 4 for exit");
scanf("%d",&ch);
switch(ch)
{
case 1:   printf("enter the value to insert");
     scanf("%d",&val);
    insert_at_begning(&head,val);
    break;
case 2:printf("enter the value to insert at end");
    insertatend(&head,val);
    break;
case 3:

    printlist(head);
    break;
case 4:
exit(0);
//}
    
}
return 0;
}