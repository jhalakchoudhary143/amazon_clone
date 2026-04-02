#include<stdio.h>
#include<stdlib.h>
struct node{        //method no 2 having error 
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

    current=malloc(sizeof(struct node));
    current->data=150;
    current->link=NULL;
    head->link->link=current;
    printf("%d\t",head->data);
     printf("%d\t",current->data);
     printf("%d\t",current->data);

    return 0;
}/////new question 
#include <stdio.h>

#define MAX_SIZE 10

// Stack structure
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

// Initialize the stack
void initStack(Stack* s) {
    s->top = -1;
}

// Check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Check if the stack is full
int isFull(Stack* s) {
    return s->top == MAX_SIZE - 1;
}

// Push an element onto the stack
void push(Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow: Cannot push %d\n", value);
        return;
    }
    s->data[++(s->top)] = value;
    printf("Pushed %d\n", value);
}

// Pop an element from the stack
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow: Cannot pop\n");
        return -1;
    }
    int poppedValue = s->data[(s->top)--];
    printf("Popped %d\n", poppedValue);
    return poppedValue;
}

// Peek at the top element of the stack
int peek(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty: Cannot peek\n");
        return -1;
    }
    int topValue = s->data[s->top];
    printf("Peeked %d\n", topValue);
    return topValue;
}
