#include <stdio.h>
#include <stdlib.h>
// usage of the stack adt implementation basic
struct stack
{
    int size;
    int top;
    int *arr;
};
int empty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void check(struct stack *ptr)
{
    int a = empty(ptr);
    if (a == 1)
    {
        printf("THE STACK IS EMPTY\n");
    }
    else
    {
        printf("THE STACK IS NOT EMPTY\n");
    }
}

int main()
{
    struct stack *s;
    s->size = 45;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(struct stack));

    // s->arr[0] = 7;
    // s->top++;

    check(s);
    return 0;
}