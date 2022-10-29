#include <stdio.h>
#include <malloc.h>
#define size 10

int adj_mat[size][size];
int vis[size];

struct ll_node
{
    int vertex;
    struct ll_node *next;
};

typedef struct ll_node node;

node *adj[size];

struct queue1
{
    int x[size];
    int front, rear;
} q1;

void enqueue(int z)
{
    if (q1.front == -1)
    {
        q1.front++;
        q1.rear++;
        q1.x[q1.front] = z;
        return;
    }
    q1.rear++;
    q1.x[q1.rear] = z;
    return;
}

int dequeue()
{
    int t;
    t = q1.x[q1.front];
    q1.front++;
    return t;
}

void bfs(int s)
{
    int p;
    enqueue(s);
    vis[s] = 1;
    p = dequeue();
    if (p != 0)
    {
        printf("\t%d", p);
    }
    while (p != 0)
    {
        while (adj[p] != NULL && vis[adj[p]->vertex] == 0)
        {
            enqueue(adj[p]->vertex);
            vis[adj[p]->vertex] = 1;
            adj[p] = adj[p]->next;
        }
        p = dequeue();
        if (p != 0)
        {
            printf("\t%d", p);
        }
    }
}

node* creategraph(node *temp, int x)
{
    node *new1;
    new1 = (node *)malloc(sizeof(node));
    new1->vertex = x;
    new1->next = temp;
    temp=new1;
    return temp;
}

int main()
{
    int node, edges, sp, ep, sv;
    struct ll_node* hp;
    printf("Queue\n");
    q1.front = -1;
    q1.rear = -1;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            adj_mat[i][j] = 0;
        }
    }

    for (int i = 0; i < size; i++)
    {
        adj[i] = NULL;
    }

    printf("Number of nodes: ");
    scanf("%d", &node);
    printf("Number of edges: ");
    scanf("%d", &edges);

    for (int i = 1; i <= edges; i++)
    {
        printf("Enter the start point: ");
        scanf("%d", &sp);
        printf("Enter the end point: ");
        scanf("%d", &ep);

        // adj_mat[sp][ep] = 1;
        // adj_mat[ep][sp] = 1;
        adj[sp] = creategraph(adj[sp], ep);
        adj[ep] = creategraph(adj[ep], sp);
    }

    printf("\nAdjacency List\n");
    for (int i = 1; i <= size; i++)
    {
        hp = adj[i];
        printf("\n");
        while (hp != NULL)
        {
            printf("%d->", hp->vertex);
            hp = hp->next;
        }
    }
    printf("\nEnter source vertex: ");
    scanf("%d", &sv);
    bfs(sv);
    return 0;
}
