#include <stdio.h>

void dfs(int graph[20][20], int n, int start, int visited[20]) {
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 0; i < n; i++) {
        if (graph[start][i] == 1 && visited[i] == 0) {
            dfs(graph, n, i, visited);
        }
    }
}

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[20][20], visited[20];
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    for (int i = 0; i < n; i++) visited[i] = 0;

    int start;
    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("DFS Traversal: ");
    dfs(graph, n, start, visited);
    printf("\n");

    return 0;
}