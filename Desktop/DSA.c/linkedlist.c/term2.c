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
    printf("->NULL\n");
 }
void remove_dupli(sn** head)
{
sn* ptr=*head;
sn* prev=NULL;
while(ptr!=NULL) 
{
    prev=ptr;
    while(prev-> next!=NULL)
    {
if(prev->next->data==ptr->data)
    {    
       sn* temp=prev->next;
        prev->next=temp->next;
        free(temp); 
    }else{
    prev=prev->next;}}
    ptr=ptr->next;
}
}

 int main(){
    int k,val;
    sn* head=NULL;
    insert(&head,10);
     insert(&head,20);
      insert(&head,10);
       insert(&head,40);
        insert(&head,20);
        display(&head);   
        remove_dupli(&head);
        display(&head);
 }
