#include<stdio.h>
#include<stdlib.h>
# define MAX 50
typedef struct node{
    int ver;
    struct node* next;
}node;
typedef struct graph{
    int v;
    node* adjList[MAX];
}graph;
node * 