#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;
node* creaNode(int val){
    node* temp=(node*)malloc(sizeof(node));
    temp->data=val;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
node* insert(node* root, int val){
    if(root==NULL)return creaNode(val);
    if(val>root->data) root->right=insert(root->right,val);
    else if(val<root->data) root->left=insert(root->left,val);
return root;
}

node* leftmost_right(node* root){
node* ans=NULL;
while(root!=NULL){
    ans=root;
    root=root->left;
}
return ans;
}
node* inorderSucc(node* root,int key){
node* curr=root;
node*suc=NULL;
while(curr!=NULL){
if(curr->data>key){
    suc=curr;
    curr=curr->left;
}
else if(curr->data<key){
    curr=curr->right;
}
else{
    if(root->right!=NULL)suc=leftmost_right(root->right);
    break;
}}
return suc;
}
int main(){
    int key;
    node* root=NULL;
    root=insert(root,1);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,5);
    root=insert(root,9);
    printf("enter the key :");
    scanf("%d",&key);
    node* suc=inorderSucc(root,key);
if(suc!=NULL)printf("%d ",suc->data);
else printf("NOT FOUND");
}
