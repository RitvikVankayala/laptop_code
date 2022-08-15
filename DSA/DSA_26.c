#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
int stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int isEmpty(struct stack *ptr)
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

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int precedence(char f)
{
    // for a simple precedence
    if (f == '*' || f == '/')
    {
        return 3;
    }
    else if (f == '+' || f == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int match(char f)
{
    if (f == '*' || f == '/' || f == '+' || f == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char *infixtopostfix(char *infix)
{
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->size = 100;
    ptr->top = -1;
    ptr->arr = (char *)malloc(ptr->size * sizeof(char));
    char *postfix = (char *)malloc(strlen(infix) + 1 * sizeof(char));
    int i = 0; // helps in tracking the infix
    int j = 0; // helps in tracking the postfix
    while (infix[i] != '\0')
    {
        if (!match(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stacktop(ptr)))
            {
                push(ptr, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(ptr);
                j++;
            }
        }
    }
    while (!isEmpty(ptr))
    {
        postfix[j] = pop(ptr);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *exp = "a-b+t/6";
    printf("postfix is %s", infixtopostfix(exp));

    return 0;
}
