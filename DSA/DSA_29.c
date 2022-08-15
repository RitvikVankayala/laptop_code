#include <stdio.h>
#include <stdlib.h>
struct list
{
    int data;
    struct list *next;
};

struct list *f = NULL;
struct list *r = NULL;

void linkedListTraversal(struct list *ptr)
{
    printf("linked list traversal is successfull\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int full()
{
    struct list *q = (struct list *)malloc(sizeof(struct list));
    if (q == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int empty()
{
    if (f == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int value)
{
    struct list *ptr = (struct list *)malloc(sizeof(struct list));

    if (full() == 1)
    {
        printf("THE LIST IS FULL\n");
    }
    else
    {
        ptr->data = value;
        ptr->next = NULL;
        if (f == NULL)
        {
            f = r = ptr;
        }
        else
        {
            r->next = ptr;
            r = ptr;
        }
    }
}
int dequeue()
{
    struct list *ptr = f;
    if (empty() == 1)
    {
        printf("THE LIST IS EMPTY\n");
        return -1;
    }
    else
    {
        f = f->next;
        int value;
        value = ptr->data;
        free(ptr);
        return value;
    }
}
int main()
{
    linkedListTraversal(f);

    enqueue(4);
    enqueue(43);
    enqueue(45);
    enqueue(47);

    linkedListTraversal(f);

    printf("DEQUEING THE ELEMENT : %d\n", dequeue());
    printf("DEQUEING THE ELEMENT : %d\n", dequeue());
    printf("DEQUEING THE ELEMENT : %d\n", dequeue());

    linkedListTraversal(f);

    return 0;
}