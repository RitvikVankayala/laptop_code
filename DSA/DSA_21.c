#include <stdio.h>
#include <stdlib.h>
// stack bottom top and peek and empty and full and push pull all works at O(1)
struct stack
{
    int top;
    int size;
    int *arr;
};
int stack_top(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int stack_bottom(struct stack *ptr)
{
    return ptr->arr[0];
}
int empty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("THE STACK IS EMPTY\n");
        return 1;
    }
    else
    {
        return 0;
    }
}
int full(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("THE STACK IS OVERFLOWED\n");
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek(struct stack *ptr, int i)
{
    if (ptr->top - i + 1 < 0)
    {
        printf("ERROR!!\n");

        return 0;
    }
    else
    {
        int value;
        value = ptr->arr[ptr->top - i + 1];
        return value;
    }
}
void push(struct stack *ptr, int val)
{
    if (full(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *p)
{
    if (empty(p) == 1)
    {
        printf("THE POP CANNOT BE PERFORMED\n");
        return -1;
    }
    else
    {
        int value;
        value = p->arr[p->top];
        p->top--;
        return value;
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 10;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("THE STACK IS SUCCESFULLY PREPARED\n");

    printf("Before pushing, Full: %d\n", full(s));
    printf("Before pushing, Empty: %d\n", empty(s));

    push(s, 21);
    push(s, 23);
    push(s, 25);
    push(s, 27);
    push(s, 29);
    push(s, 31);
    push(s, 41);
    push(s, 51);
    push(s, 61);
    push(s, 71);
    // push(s, 71);-->stack overflow

    for (int i = 1; i <= s->top + 1; i++)
    {
        printf("THE VALUE AT %d is %d\n", i, peek(s, i));
    }

    printf("THE VALUE AT THE TOP OF THE STACK IS %d\n", stack_top(s));
    printf("THE VALUE AT THE BOTTOM OF THE STACK IS %d\n", stack_bottom(s));

    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));

    printf("THE VALUE AT THE TOP OF THE STACK IS %d\n", stack_top(s));
    printf("THE VALUE AT THE BOTTOM OF THE STACK IS %d\n", stack_bottom(s));

    return 0;
}