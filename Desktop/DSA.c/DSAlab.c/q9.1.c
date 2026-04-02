#include<stdio.h>
#include<stdlib.h>
int size;
createtree(1);
int binarytree[50];
void createtree(int val)
{
    binarytree[0]=val;
}
void set_left_child(int val,int index)
{
binarytree[2*index+1]=val;
}
void set_right_child(int val,int index)
{
binarytree[2*index+2]=val;
}
void insertnode(int parentindex,int val,char c)
{
    int childindex;
if(c=='l'||c=='L')
childindex=2*parentindex+1;
else
childindex=2*parentindex+2;
tree[childindex]=val;
size=childindex+1;
}
void display()
{
    for(int i=0;i<size;i++)
    {
        printf("%d->",binarytree[i]);
    }
}
void postorder
int search(int val)
{
    for(int i=0;i<size;i++)
    {
        if(binarytree==val)
        return 1;

    }
    return -1;
}
int main()
{
    int parentindex ,val,v;
    char child;
    set_left_child(10,0);
    set_right_child(20,0);
    int n,ch;
    printf("enter the root");
    scanf("%d",&n);
    createtree(n);
    printf("enter the choice");
    do{
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    break;
    case 2:printf("enter the index \n enter the val\n enter the L for left child or enter R for right child");
    scanf("%d %d%c",&parentindex,&val,&child);
    
    insertnode(parentindex,val,child);
    case 3: printf(""enter the value to search);
    scanf("%d",&v);
    search(v);
    }
}while(1);
}
// inorder preorder postoreder wutrhout using recursion