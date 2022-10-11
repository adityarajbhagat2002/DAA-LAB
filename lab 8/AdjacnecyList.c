#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} node;

typedef struct graph
{
    int edges;
    int vertices;
    node **list;
} graph;

graph makeGraph(int V)
{
    graph newGraph;
    newGraph.vertices = V;
    newGraph.edges = 0;
    newGraph.list = (node **)malloc(sizeof(node) * V);
    for (int i = 0; i < V; i++)
        newGraph.list[i] = NULL;
    return newGraph;
}

graph addEdge(graph g, int s, int e)
{
    g.edges++;
    node *newNode = (node *)malloc(sizeof(node));
    newNode->val = e;
    newNode->next = g.list[s];
    g.list[s] = newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->val = s;
    newNode->next = g.list[e];
    g.list[e] = newNode;
    return g;
}

void dfs(graph g, int vertex, int *vis)
{
    if (vis[vertex])
        return;
    vis[vertex] = 1;
    printf("%d ", vertex);
    node *temp = g.list[vertex];
    while (temp != NULL)
    {
        dfs(g, temp->val, vis);
        temp = temp->next;
    }
}

int main()
{
    graph g = makeGraph(5);
    g = addEdge(g, 0, 1);
    g = addEdge(g, 1, 2);
    g = addEdge(g, 2, 3);
    g = addEdge(g, 3, 4);
    int *vis = (int *)malloc(sizeof(int) * g.vertices);
    for (int i = 0; i < g.vertices; i++)
        vis[i] = 0;
    dfs(g, 0, vis);
    return 0;
}