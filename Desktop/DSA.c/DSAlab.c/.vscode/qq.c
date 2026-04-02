#include<stdio.h>
#include<stdlib.h>
  typedef struct Node {
    int data;
    struct Node* next;
}n;

n* newNode(int data) {
    n* node = (n*)malloc(sizeof(n));
    node->data = data;
    node->next = NULL;
    return node;
}

int size(n* head){
    n* temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}

void InsertNth(n** head, int position, int data) {
    n* node = newNode(data);
    if(node==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    if (position == 0) {
        node->next = *head;
        *head = node;
        return;
    }
    n* current = *head;
    for (int i = 0; current != NULL && i < position - 1; i++) {
        current = current->next;
    }
    if (current == NULL) {
        printf("Position is greater than the length of the list.\n");
        free(node);
        return;
    }
    node->next = current->next;
    current->next = node;
}

void removeDup(n* head) {
    n* curr=head;
    n* ind=NULL;
    n* temp=NULL;
    while(curr!=NULL && curr->next!=NULL){
        ind=curr;
        while(ind->next!=NULL){
            if(curr->data==ind->next->data){
                temp=ind->next;
                ind->next=ind->next->next;
                free(temp);
            }
            else{
                ind=ind->next;
            }
        }
        curr=curr->next;
    }
}

void displayLinkedList(n* head){
    n* temp=head;
    if(!head){
        printf("Linked List is empty.\n");
        return;
    }
    while(temp){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
     n* head=NULL;
    int ch,val,pos;
     printf("1.create a linked list\n3.display list\n4.remove duplicates\n5.exit\n ");
    while(1){
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter the value: ");
            scanf("%d",&val);
            InsertNth(&head,0,val);
        }
        else
        if(ch==3){
            displayLinkedList(head);
        }
        else
        if(ch==4){
            removeDup(head);
            printf("Duplicates removed from the linked list.\n");
        }
        else
        if(ch==5){
            return 0;
        }
        else{
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;}
