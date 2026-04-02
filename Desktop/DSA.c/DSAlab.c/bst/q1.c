#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
void insert(struct node **tree,int val )
{
     if (*tree == NULL) {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = val;
        temp->left = temp->right = NULL;
        *tree = temp;
        return;
    }
    if (val < (*tree)->data) {
        insert(&((*tree)->left),val);
    } else {
        insert(&((*tree)->right),val);
    }
}
void preorder(struct node *tree)
{
    if(tree!=NULL)
    {
    printf("%d  ",tree->data);
    preorder(tree->left);
    preorder(tree->right);}
}
void inorder(struct node *tree)
{
    if(tree!=NULL)
    {
    inorder(tree->left);
     printf("%d  ",tree->data);
    inorder(tree->right);}
}
void postorder(struct node *tree)
{
    if(tree!=NULL)
    {
    postorder(tree->left);
    postorder(tree->right);
 printf("%d  ",tree->data);}
}
struct node* smallest(struct node *tree)
{
    if(tree ==NULL ||tree->left==NULL)
     return tree;
     else
     smallest(tree->left);
}
struct node* largest(struct node *tree)
{
    if(tree ==NULL ||tree->right==NULL)
     return tree;
     else
     largest(tree->right);
}
int totalnode(struct node* tree)
{
    if(tree==NULL) return 0;
    else
    return (totalnode(tree->left) + totalnode(tree->right)+1); 
}
int externalnode(struct node* tree)
{
    if(tree==NULL)
    return 0;
    else if(tree->left==NULL || tree->right==NULL) return 1;
    else
    return externalnode(tree->left)+externalnode(tree->right)+1;
}
int internalnode(struct node* tree)
{
    if(tree==NULL)
    return 0;
    else if(tree->left==NULL || tree->right==NULL) return 0;
    else
    return internalnode(tree->left)+internalnode(tree->right)+1;
}
int height(struct node*  tree)
{
    int leftheight,rightheight;
    if(tree==NULL)
    return 0;
    else{
    leftheight= height(tree->left);
    rightheight=height(tree->right);
    if(leftheight>rightheight)
    return leftheight+1;
    else
    return rightheight+1;
    }
}
struct node* deletenode(struct node* tree, int val)
{
    if (tree == NULL) {
        printf("Value not found in the tree\n");
        return NULL;
    }

    // Step 1: Search for the node
    if (val < tree->data) {
        tree->left = deletenode(tree->left, val);
    }
    else if (val > tree->data) {
        tree->right = deletenode(tree->right, val);
    }
    else { // Case 1: No child (leaf node)
        if (tree->left == NULL && tree->right == NULL) {
            free(tree);
            return NULL;
        }
        // Case 2: One child
        else if (tree->left == NULL) {
            struct node* temp = tree->right;
            free(tree);
            return temp;
        }
        else if (tree->right == NULL) {
            struct node* temp = tree->left;
            free(tree);
            return temp;
        }
        // Case 3: Two children
        else {
            // Find inorder successor (smallest in right subtree)
            struct node* succ = tree->right;
            while (succ->left != NULL) {
                succ = succ->left;
            }

            // Copy successor’s value into current node
            tree->data = succ->data;

            // Delete successor node recursively
            tree->right = deletenode(tree->right, succ->data);
        }
    }

    return tree;
}

int main()
{ struct node *ptr;
    struct node *tree=NULL;
    int n,val,ptrr,pp,qq;
    printf("press 1 to insert a node in a tree\n prees 2 for pre oder\n press 3 for in order \n prees 4 post order\n press 5 for smallest\n press 6 for largest\npress 8 for total extralnal internal node\npress 7for stop  ");
    do{
        printf("enter the choixe\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: 
    printf("Enter the value\n");
    scanf("%d",&val);
    insert(&tree,val);
        break;
        case 2:preorder(tree);
        break;
        case 3:inorder(tree);
        break;
        case 4:postorder(tree);
        break;
        case 5: ptr=smallest(tree);
        printf(" the smallest node is %d",ptr->data);
        break;
        case 6:ptr=largest(tree);
        printf(" the largest node is %d",ptr->data);
        break;
        case 8:ptrr= totalnode(tree);
        pp=externalnode(tree);
        qq=internalnode(tree);
        printf("total nodes is %d extral node is %d internal node is %d",ptrr,pp,qq);
        break;
        case 9:printf("the height of tree %d",height(tree));
        break;
        case 10: printf("Enter the value to delete");
        scanf("%d",&val);
        deletenode(tree,val);
        case 7: exit(0);
        break;
        default:printf("Wrong choice");
        break;

    }}while(1);
}