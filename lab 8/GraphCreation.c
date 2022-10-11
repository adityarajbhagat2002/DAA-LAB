#include <stdio.h>
#include <stdlib.h>

typedef struct graph
{
    int edges;
    int vertices;
    int **adjMat;
} graph;

graph makeGraph(int V)
{
    graph newGraph;
    newGraph.vertices = V;
    newGraph.edges = 0;
    newGraph.adjMat = (int **)malloc(sizeof(int) * V);
    for (int i = 0; i < V; i++)
        newGraph.adjMat[i] = (int *)malloc(sizeof(int) * V);
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            newGraph.adjMat[i][j] = 0;
    return newGraph;
}

graph addEdge(graph g, int s, int e)
{
    g.edges++;
    g.adjMat[s][e] = 1;
    g.adjMat[e][s] = 1;
    return g;
}

void dfs(graph g, int i, int j)
{
    for (int i = 0; i < g.vertices; i++)
    {
        for (int j = 0; j < g.vertices; j++)
        {
            printf("%d ", g.adjMat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    graph g = makeGraph(5);
    g = addEdge(g, 0, 1);
    g = addEdge(g, 1, 2);
    g = addEdge(g, 2, 3);
    g = addEdge(g, 3, 4);
    dfs(g,0,0);
    return 0;
    
}

