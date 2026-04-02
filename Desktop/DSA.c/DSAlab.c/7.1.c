#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
 void insertatbeg()
{
    int val;
    printf("enter the value to insert at beg");
    scanf("%d",&val);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=val;
     newnode->next=NULL;
     if(head == NULL)
    {
        head=newnode;
    }
   else{
    newnode->next=head; 
    head=newnode;
   }
}
void insertatend()
{
    int val;
    printf("enter the value to insert at end");
    scanf("%d",&val);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=val;
     newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
else{
    struct node *temp=head;[]l
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
}
void insertatposition()
{
    int val,k;
    printf("enter the value to insert at position and enter the value");
    scanf("%d%d",&k,&val);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=val;
     newnode->next=NULL;
     int position;
     if(position==1)
     {
        insertatbeg();
     }
     else{
        int i=1;
        struct node*temp=head;
        while(i<position-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;

     }

}
void deleteatbeg()
{
    if(head==NULL)
    {
    printf("list is empty");
    }
    else{
        struct node* temp=head;
        head=temp->next;
        temp->next=NULL;
    }

}
void deleteatend()
{
    if(head==NULL)
    {
    printf("list is empty");
    }
    else{
        struct node *ptr=*head;
    struct node *preptr=NULL;
    while(ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
     printf("deleted value is %d\n",ptr->data);
    free(ptr);
    }
}
void display()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ->",ptr->data);
        ptr=ptr->next; 
    }
}
int main()
{

printf("enter 1 for insertatbeg \npress 2 for insert at end\n  enter 3 to add at any position \n press 4 for detele at beg \n
  press 5 for delete at end\n  press 6for exit\n");
int ch;
do{
    printf("enter your choice;");
scanf("%d",&ch);
switch(ch)
{
    case 1:  insertatbeg();

                display();
                break;
    case 2:   insertatend();
                display();
                break;
    case 3:     insertatposition();
                display();
                break;
    case 4:     deleteatbeg();
                    display();
                    break;
    case 5:       deleteatend();
                     display();
                    break;
    case 6:     exit(0);
    default:  printf("Wrong input");
                break;
}}
while(1);
}