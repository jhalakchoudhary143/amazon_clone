#include <stdio.h>
#include <stdlib.h>
typedef struct treetype{
    int data;
    struct treetype* left;
    struct treetype* right;
}treenode;

treenode* newNode(int info){
    treenode* temp=(treenode*)malloc(sizeof(treenode));
    temp->data=info;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void insert(treenode** root,int val){
    if(*root==NULL){
        *root=newNode(val);
        return;
    }
    if(val<(*root)->data){
        insert(&((*root)->left),val);
    }
    else{
        insert(&((*root)->right),val);
    }
}

int countFullNodes(treenode* root){
    if(root==NULL){
        return 0;
    }
    if(root->left && root->right){
        return 1 + countFullNodes(root->left) + countFullNodes(root->right);
    }
    return countFullNodes(root->left) + countFullNodes(root->right);
}

int countLeafNodes(treenode* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

treenode* findMin(treenode* root){
    if(root==NULL){
        return NULL;
    }
    treenode* current=root;
    while(current->left!=NULL){
        current=current->left;
    }
    return current;
}

treenode* inorderPredecessor(treenode* root, int key){
    treenode* predecessor=NULL;
    treenode* current=root;
    while(current!=NULL){
        if(key > current->data){
            predecessor=current;
            current=current->right;
        }
        else if(key < current->data){
            current=current->left;
        }
        else{
            if(current->left!=NULL){
                predecessor=findMin(current->left);
            }
            break;
        }
    }
    return predecessor;
}

int main(){
    treenode* root=NULL;
    int n, val,key;
    printf("1. Insert\n2. Count Full Nodes\n3. Count Leaf Nodes\n4. Find Minimum Node\n5. Find Inorder Predecessor\n6. Exit\n");
    while(1){
        printf("Enter your choice: ");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("Enter value to insert: ");
                scanf("%d",&val);
                insert(&root,val);
                break;
            case 2:
                printf("Number of nodes with both children: %d\n",countFullNodes(root));
                break;
            case 3:
                printf("Number of leaf nodes: %d\n",countLeafNodes(root));
                break;
            case 4:
                {
                    treenode* minNode=findMin(root);
                    if(minNode){
                        printf("Minimum node value: %d\n",minNode->data);
                    }
                    else{
                        printf("Tree is empty.\n");
                    }
                }
                break;
            case 5:
                printf("Enter key to find inorder predecessor: ");
                scanf("%d",&key);
                {
                    treenode* pred=inorderPredecessor(root,key);
                    if(pred){
                        printf("Inorder predecessor of %d is %d\n",key,pred->data);
                    }
                    else{
                        printf("Inorder predecessor not found.\n");
                    }
                }
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
