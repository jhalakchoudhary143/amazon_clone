// singly linked list 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void print(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
 void insertatbeg(struct node **head)
{

    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("\nenter the value to insert");  
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=*head;
    *head=newnode;

}
void insertatend(struct node **head)
{
    int val;
     printf("\nenter the value to insert at end");
    scanf("%d",&val);
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(*head==NULL)
    {
        // list is empty
        *head=temp;
    }
    else{
        struct node *ptr=*head;

     while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
}
void insertafternode(struct node **head)
{
    int k,val;
     printf("\nenter the value of k= node after which you want to insert a node and \nval whivh is inserted");
    scanf("%d%d",&k,&val);
    struct node *temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=val;
    temp1->next=NULL;
    if(*head==NULL)
    {
        // list is empty
        *head=temp1;
        return ;
    }
    else{
        struct node *ptr=*head;
        while((ptr!=NULL)&&(ptr->data!=k))
        {
            ptr=ptr->next;

        }
    if (ptr == NULL) {
        printf("Node with value %d not found. Insertion failed.\n", k);
        free(temp1); }
        else 
        {
    temp1->next=ptr->next;
       ptr->next=temp1;}

    }

}
void insertbeforenode(struct node **head)
{
int k,val;
     printf("\nenter the value of k= node befor which you want to insert a node and \nval whivh is inserted");
    scanf("%d%d",&k,&val);
    struct node *temp2=(struct node*)malloc(sizeof(struct node));
    temp2->data=val;
    temp2->next=NULL;
    if(*head==NULL)
    {
        // list is empty
        *head=temp2;
        return;
    }
    if((*head)->data==k)
    {
        temp2->next=*head;
        *head=temp2;
        return;
    }
    struct node *ptr=*head;
    struct node *preptr=NULL;
    while((ptr!=NULL)&&(ptr->data!=k))
    {
        preptr=ptr;
    ptr=ptr->next;
    }
    if (ptr == NULL) {
        printf("Node with value %d not found. Insertion failed.\n", k);
        free(temp2);
        return;
    }

preptr->next=temp2;
temp2->next=ptr;
}
void deleteatbeg(struct node **head)
{
    if(*head==NULL)
    {
        printf("list is empty");
        return;
    }
    struct node *ptr=*head;
    *head=ptr->next;
    printf("deleted value is %d\n",ptr->data);
    free(ptr);
}
void deleteatend(struct node **head)
{
    if(*head==NULL)
    {
        printf("list is empty");
        return;
    }
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
void deletenode(struct node **head)
{
    int val;
    printf("enter the node value to delete");
    scanf("%d",&val);
    struct node *ptr=*head;
    struct node *preptr=NULL;
    if(*head==NULL)
    {
        printf("list is empty");
        return;

    }
    if(ptr->data==val)
    {
        deleteatbeg(&ptr);
    }
    else{
        while(ptr->data!=val)
        {5
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        printf("The delete node is %d\n",ptr->data);
        free(ptr);

    }
}

void sortlist(struct node **head)
{
    struct node *ptr1=*head;
    struct node *ptr2=NULL;
    int temp;
    while(ptr1->next!=NULL)
    {
        ptr2=ptr1->next;
        while(ptr2!=NULL)
        {
            if(ptr1->data > ptr2->data)
            {
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
}
int main()
{
    struct node *first;
     struct node *second;
      struct node *third;
       struct node *fourth;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    first->data=26;
    first->next=second;
    second->data=35;
    second->next =third;
    third->data=55;
    third ->next=fourth;
    fourth->data=78;
    fourth->next=NULL;

    print(first);
    insertatbeg(&first);
    print(first);
    insertatend(&first);
    print(first);
    insertafternode(&first);
     print(first);
     insertbeforenode(&first);
     print(first);
     deleteatbeg(&first);
     print(first);
     deleteatend(&first);
     print(first);
     deletenode(&first);
      print(first);
      sortlist(&first);
      print(first);
return 0;
}
///inserting at beg
//insert At end
//insert after a given node
//insert before a given node
// delete at beg 
// delete at end
// delete node
// sorting of list