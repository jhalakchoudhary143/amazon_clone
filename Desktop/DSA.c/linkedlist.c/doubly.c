#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
} Node;

// Linked list structure
typedef struct linked_list {
    Node* head;
    Node* tail;
} LinkedList;

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

// Insert at beginning
void insertAtBeginning(LinkedList* list)
 {
    int data;
    printf("\nEnter the value to insert at beg");
    scanf("%d",&data);
    Node* newNode = createNode(data);
    newNode->next = list->head;
    if (list->head != NULL)
        list->head->prev = newNode;
    else
        list->tail = newNode; // First node
    list->head = newNode;
}

// Insert at end
void insertAtEnd(LinkedList* list, int data) {
    Node* newNode = createNode(data);
    if (list->tail == NULL) {
        list->head = list->tail = newNode;
        return;
    }
    list->tail->next = newNode;
    newNode->prev = list->tail;
    list->tail = newNode;
}

// Insert before node with value k
void insertBeforeK(LinkedList* list, int k, int data) {
    Node* temp = list->head;
    while (temp != NULL && temp->data != k)
        temp = temp->next;
    if (temp == NULL) {
        printf("Node with value %d not found.\n", k);
        return;
    }
    Node* newNode = createNode(data);
    newNode->next = temp;
    newNode->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = newNode;
    else
        list->head = newNode;
    temp->prev = newNode;
}

// Insert after node with value k
void insertAfterK(LinkedList* list, int k, int data) {
    Node* temp = list->head;
    while (temp != NULL && temp->data != k)
        temp = temp->next;
    if (temp == NULL) {
        printf("Node with value %d not found.\n", k);
        return;
    }
    Node* newNode = createNode(data);
    newNode->prev = temp;
    newNode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = newNode;
    else
        list->tail = newNode;
    temp->next = newNode;
}

// Display the list
void displayList(LinkedList* list) {
    Node* temp = list->head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    LinkedList list;
    list.head = list.tail = NULL;

    insertAtBeginning(&list);
    insertAtEnd(&list, 20);
    insertAtEnd(&list, 30);
    insertBeforeK(&list, 20, 15);
    insertAfterK(&list, 10, 12);

    displayList(&list);

    return 0;
}