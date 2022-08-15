#include <stdio.h>
#include <stdlib.h>
// for the bfs(breadth first search)we use the que data structure
struct queue
{
    int f;
    int r;
    int size;
    int *arr;
};
int isempty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q, int value)
{
    if (isfull(q))
    {
        printf("THE QUEUE IS FULL\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
        // printf("%d ", q->arr[q->r]);
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        printf("THE QUEUE IS EMPTY\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    // initializing queue
    struct queue q;
    q.size = 400;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // bfs implementation
    int node;
    int i = 4; // i can be any number from 0 to 6
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};

    printf("%d ", i);
    visited[i] = 1;
    enqueue(&q, i); // enqueuing i for the exploration
    while (!isempty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    return 0;
}
