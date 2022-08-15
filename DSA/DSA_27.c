#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int *arr;
    int f;
    int r;
    int size;
};
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
void enqueue(struct queue *q, int value)
{
    if (isfull(q) == 1)
    {
        printf("THE QUEUE IS OVERFLOWN\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
        printf("THE ENQUEUE FUNCTION IS SUCCESSFULLY CALLED\n");
    }
}
int dequeue(struct queue *q)
{
    if (isempty(q) == 1)
    {
        printf("THE QUEUE IS UNDERFLOWN\n");
        return -1;
    }
    else
    {
        int a;
        q->f++;
        a = q->arr[q->f];
        printf("THE DEQUEUE FUNCTION IS SUCCESSFULLY CALLED\n");
        return a;
    }
}

int main()
{
    struct queue q;
    q.size = 4;
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isempty(&q))
    {
        printf("THE QUEUE IS EMPTY\n");
    }

    enqueue(&q, 12);
    enqueue(&q, 13);
    printf("DEQUEING OF THE ELEMENT %d\n", dequeue(&q));
    printf("DEQUEING OF THE ELEMENT %d\n", dequeue(&q));
    enqueue(&q, 4566);
    enqueue(&q, 94566);
    enqueue(&q, 4566);
    enqueue(&q, 94566);

    if (isempty(&q))
    {
        printf("THE QUEUE IS EMPTY\n");
    }

    return 0;
}