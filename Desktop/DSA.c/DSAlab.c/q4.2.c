#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int arr[MAX];
int top1 = -1;
int top2;
int size;

void push1(int val) {
    if (top1 + 1 < top2) {
        arr[++top1] = val;
        printf("✅ Pushed %d to Stack1\n", val);
    } else {
        printf("❌ Stack1 Overflow\n");
    }
}

void push2(int val) {
    if (top2 - 1 > top1) {
        arr[--top2] = val;
        printf("✅ Pushed %d to Stack2\n", val);
    } else {
        printf("❌ Stack2 Overflow\n");
    }
}

void pop1() {
    if (top1 >= 0) {
        printf(" Popped %d from Stack1\n", arr[top1--]);
    } else {
        printf(" Stack1 Underflow\n");
    }
}

void pop2() {
    if (top2 < size) {
        printf("Popped %d from Stack2\n", arr[top2++]);
    } else {
        printf(" Stack2 Underflow\n");
    }
}

int main() {
    int choice, val;
    printf("Enter size of array (max %d): ", MAX);
    scanf("%d", &size);

    if (size > MAX || size <= 0) {
        printf(" Invalid size. Exiting.\n");
        return 1;
    }

    top2 = size;

    while (1) {
        printf("\n Menu:\n");
        printf("1. Push to Stack1\n");
        printf("2. Push to Stack2\n");
        printf("3. Pop from Stack1\n");
        printf("4. Pop from Stack2\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push to Stack1: ");
                scanf("%d", &val);
                push1(val);
                break;
            case 2:
                printf("Enter value to push to Stack2: ");
                scanf("%d", &val);
                push2(val);
                break;
            case 3:
                pop1();
                break;
            case 4:
                pop2();
                break;
            case 5:
                printf(" Exiting program.\n");
                exit(0);
            default:
                printf(" Invalid choice. Try again.\n");
        }
    }

    return 0;
}