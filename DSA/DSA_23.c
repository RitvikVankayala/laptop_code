#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node *tp)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int peek(int index)
{
    struct Node *ptr = top;
    ;
    for (int i = 0; (i < index - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
int stack_top(struct Node *ptr)
{
    return ptr->data;
}
int stack_bottom(struct Node *ptr)
{
    if (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}
int main()
{
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    top = push(top, 5555);

    linkedListTraversal(top);

    printf("THE VALUE AT THE INDEX 3 IS : %d\n", peek(3));
    printf("THE TOP MOST ELEMENT IS %d\n", stack_top(top));
    printf("THE BOTTOM MOST ELEMENT IS %d\n", stack_bottom(top));

    return 0;
}
