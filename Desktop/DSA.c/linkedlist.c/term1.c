 #include<stdio.h>
 #include<stdlib.h>
 typedef struct node{
    int data;
    struct node* next;
 }sn;
 void insert(sn** head,int val)
 {
    sn* new=(sn*)malloc(sizeof(sn));
    new->data=val;
    new->next=NULL;
     
    if(*head==NULL)
    {
        *head=new;
        return;
    }
    sn* ptr=*head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
 }
 void display(sn** head)
 {
    sn* ptr=*head;
    if(ptr==NULL)
    {
        printf("list is empty");
        return ;
    }
    while(ptr!=NULL)
    {
        printf(" %d-> ",ptr->data);
        ptr=ptr->next;
    }
    printf("->NULL");
 }
 void insertNth(sn** head,int k,int val)
 {
     sn* new=(sn*)malloc(sizeof(sn));
    new->data=val;
    new->next=NULL;
    sn* ptr=*head;
    while((ptr!=NULL)&&(ptr->data!=k)){
ptr=ptr->next;
    }
new->next=ptr->next;
ptr->next=new;

 }
 int main(){
    int k,val;
    sn* head=NULL;
    insert(&head,10);
     insert(&head,20);
      insert(&head,30);
       insert(&head,40);
        insert(&head,50);
        display(&head);
        printf("enter the value  of node after which you insert it");
        scanf("%d",&k);
        printf("enter the value to be inserty");
        scanf("%d",&val);
        insertNth(&head,k,val);
        display(&head);
 }
