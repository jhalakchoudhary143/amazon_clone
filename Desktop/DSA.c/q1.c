#include<stdio.h>
#include<stdlib.h>
struct node{        //method no 1 but lead to wastage of memory 
    int data;
    struct node *link;
};
int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    struct node *current2=malloc(sizeof(struct node));
    current2->data=150;
    current2->link=NULL;
    current->link=current2;
    printf("%d\t",head->data);
     printf("%d\t",current->data);
      printf("%d\t",current2->data);
    return 0;
}
