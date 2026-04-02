#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}st;
st* createnode(int val)
{
    st* new=(st*)malloc(sizeof(st));
    new->data=val;
    new->left=NULL;
    new->right=NULL;
   return new;  
}
st* insert(st* root,int val)
{
    if(root==NULL)
    return createnode(val);
    if(val<root->data)
    root->left=insert(root->left,val);
  else  if(val>root->data)
    root->right=insert(root->right,val);
    return root;
}
void inorder(st* root)
{
    if(root!=NULL){
    inorder(root->left);
    printf(" %d  ",root->data);
    inorder(root->right);}
}
 int full_node(st* root)
 {
    if(root==NULL)
    return 0;
    int count=0;
    if(root->left!=NULL && root->right!=NULL)
    count=1;
    return (count+full_node(root->left)+full_node(root->right));
 }
 int leaf_node(st* root){
    if(root==NULL)
    return 0;
    int count=0;
    if(root->left==NULL && root->right==NULL)
    count=1;
    return (count+leaf_node(root->left)+leaf_node(root->right));
 }
 st* deletion(st* root,int key)
 {
    if(root==NULL)return NULL;
    if(key<root->data)
    {
        root->left=deletion(root->left,key);
    }else if (key>root->data)
    {
        root->right=deletion(root->right,key);
    }else
    {
        if(root->left==NULL)
        {
            st* temp=root->right;
            free(root);
            return temp;
        }else if (root->right==NULL)
        {
            st* temp=root->left;
            free(root);
            return temp;}
    st* succ = root->right;
    while(root->left!=NULL)
    succ=succ->left;
    root->data=succ->data;
    root->right=deletion(root->right,succ->data);}
    return root;
 }
 st* smallest(st* root)
 {
    if(root==NULL)
    return NULL;
    if(root->left==NULL){
    return root;}
    else{
  return smallest(root->left);}
 }
 int height(st* root)
 {
    if(root==NULL)
    return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    if(lh>rh) return lh+1;
    else 
    return rh+1;
 }
st* inorder_predeccesssor(st* root,int key)
 {
    st* predecessor=NULL;
    st* current=root;
    while(current!=NULL){
        if(key>current->data)
        {
            predecessor=current;
            current=current->right;
        }
        else if (key<current->data)
        {
current=current->left;
        }else
        break;
    }
    if(current==NULL)
    {
        return NULL;
    }
    if(current->left!=NULL)
    {
        st* temp=current->left;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        predecessor =temp;

    }
return predecessor;
 }
 st* inorder_successor(st* root, int key) {
    st* successor = NULL;
    st* current = root;

    while (current != NULL) {
        if (key < current->data) {
            successor = current;
            current = current->left;
        } else if (key > current->data) {
            current = current->right;
        } else {
            break;
        }
    }

    if (current == NULL) return NULL;

    if (current->right != NULL) {
        st* temp = current->right;
        while (temp->left != NULL)
            temp = temp->left;
        successor = temp;
    }

    return successor;
}
int main()
{
    int full,leaf,kk,kkk;
    st* root=NULL;
    root=insert(root,20);
     root=insert(root,10);
      root=insert(root,30);
       root=insert(root,5);
        root=insert(root,15);
        inorder(root);
        full=full_node(root);
        printf("\n%d are the node have both chiled",full);
leaf=leaf_node(root);
printf("\n%d are the leaf node ",leaf);
st* small= smallest(root);
if(small!=NULL)
{
    printf("\n%d is the smallest node",small->data);
}else{
    printf("\ntree is empty");
}
printf("\nEnter the key jiska predecessor niukalna h");
scanf("%d",&kk);
st* pree= inorder_predeccesssor(root,kk);
if(pree!=NULL){
printf("\n%d predecessor is this",pree->data);}
else{
    printf("not found");
}printf("\nEnter the key jiska succeecessor niukalna h");
scanf("%d",&kkk);
st* succ = inorder_successor(root, kkk);
if (succ != NULL)
    printf("\n%d successor is this", succ->data);
else
    printf("\nNo successor exists");

int hh=height(root);
printf("\n%d is the height ",hh);

}