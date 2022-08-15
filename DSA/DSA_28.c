#include <stdio.h>
#include <stdlib.h>

// incircular queue we use f=r=0;
struct queue
{
    int size;
    int *arr;
    int f;
    int r;
};
int isempty(struct queue *q)
{
    if (q->r == q->f)
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
    if ((q->r + 1) % q->size == q->f)
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
    if (isfull(q) == 1)
    {
        printf("THE QUEUE IS OVERFLOWN\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = value;
        printf("Enqued element: %d\n", value);
    }
}
int dequeue(struct queue *q)
{
    int v = -1;
    if (isempty(q) == 1)
    {
        printf("THE QUEUE IS UNDERFLOWN\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        v = q->arr[q->f];
    }
    return v;
}
int main()
{
    struct queue q;
    q.size = 4;
    q.f = 0;
    q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isempty(&q))
    {
        printf("THE QUEUE IS EMPTY\n");
    }

    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 122);

    printf("DEQUEING OF THE ELEMENT %d\n", dequeue(&q));
    printf("DEQUEING OF THE ELEMENT %d\n", dequeue(&q));

    enqueue(&q, 13);
    enqueue(&q, 122);
    enqueue(&q, 122);

    if (isempty(&q))
    {
        printf("THE QUEUE IS EMPTY\n");
    }
    if (isfull(&q))
    {
        printf("THE QUEUE IS FULL\n");
    }

    return 0;
}
