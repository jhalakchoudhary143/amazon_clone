#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int val) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node* createbst(struct node* root, int val) {
    if (root == NULL)
        return createnode(val);
    else if (val < root->data)
        root->left = createbst(root->left, val);
    else
        root->right = createbst(root->right, val);
    return root;
}
void inorder(struct node* root, int store[], int* i) {
    if (root == NULL)
        return;
    inorder(root->left, store, i);
    store[(*i)++] = root->data;
    inorder(root->right, store, i);
}
struct node* createbalancedbst(int store[], int start, int end) {
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    struct node* root = createnode(store[mid]);
    root->left = createbalancedbst(store, start, mid - 1);
    root->right = createbalancedbst(store, mid + 1, end);
    return root;
}
void printinorder(struct node* root) {
    if (root == NULL)
        return;
    printinorder(root->left);
    printf("%d ", root->data);
    printinorder(root->right);
}
int main() {
    struct node* root = NULL;
    int store[50], index = 0;
    root = createbst(root, 40);
    root = createbst(root, 30);
    root = createbst(root, 50);
    root = createbst(root, 20);
    root = createbst(root, 35);
    root = createbst(root, 25);
    inorder(root, store, &index);
    struct node* balancedRoot = createbalancedbst(store, 0, index - 1);
    printinorder(balancedRoot);
    printf("\n");

    return 0;
}