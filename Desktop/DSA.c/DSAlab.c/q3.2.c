#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 100

int top = -1;
void push(char stack[], char value) {
    if (top >= SIZE - 1) {
        printf("STACK OVERFLOW\n");
        return;
    }
    stack[++top] = value;
}

char pop(char stack[]) {
    if (top == -1) {
         printf("STACK underFLOW\n");
        return '\0'; 
    }
    return stack[top--];
}

// Matching function
bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

int main() {
    char stack[SIZE];
    char expr[SIZE];
    int i;//expression{{([])}}

    printf("Enter an expression: ");// 
    scanf("%s", expr); // 

    for (i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(stack, ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            char popped = pop(stack);
            if (!isMatchingPair(popped, ch)) {
                printf("Unbalanced\n");
                return 0;
            }
        }
    }

    if (top == -1) {
        printf("Balanced\n");
    } else {
        printf("Unbalanced\n");
    }

    return 0;
}