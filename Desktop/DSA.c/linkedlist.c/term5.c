#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int vertex;
    int weight;
    struct node* next;
}sn;

typedef struct graph{
    int v;
    sn** array;
}gg;

sn* newadjnode(int vertex,int weight)
{
    sn* node = (sn*)malloc(sizeof(sn));
    node->vertex = vertex;
    node->weight = weight;
    node->next = NULL;
    return node;
}
gg* creategraph(int v)
{
     gg* graph = (gg*)malloc(sizeof(gg));
    graph->v = v;
    graph->array=(sn**)malloc(v*sizeof(sn*));
    for(int i=0;i<v;i++)
    graph->array[i]=NULL;

    return graph;
}
void printgraph(gg* graph)
{
    for(int v=0;v<graph->v;v++)
    {
        sn* temp= graph->array[v];
        printf("vertex[%d]",v);
        while(temp){
            printf(" ->%d, w=%d",temp->vertex,temp->weight);
            temp=temp->next;
        }
        printf("\n");
    }
}
void addEdge(gg* graph, int src, int dest, int weight) {
    sn* node = newadjnode(dest, weight);
    node->next = graph->array[src];
    graph->array[src] = node;
    sn* node2 = newadjnode(src, weight);
    node2->next = graph->array[dest];
    graph->array[dest] = node2;
}

int main()
{
     int V = 5;
    gg* graph = creategraph(V);

    addEdge(graph, 0, 1, 10);
    addEdge(graph, 0, 4, 20);
    addEdge(graph, 1, 2, 30);
    addEdge(graph, 1, 3, 40);
    addEdge(graph, 1, 4, 50);
    addEdge(graph, 2, 3, 60);
    addEdge(graph, 3, 4, 70);

    printgraph(graph);
}