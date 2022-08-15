#include <stdio.h>
#include <stdlib.h>

struct node
{
    char *arr;
    int size;
    int top;
};

int empty(struct node *ptr)
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
int full(struct node *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("THE STACK IS FULL\n");
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct node *ptr, char value)
{
    if (full(ptr) == 1)
    {
        printf("THE PUSH IS NOT POSSIBLE\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

char pop(struct node *ptr)
{
    if (empty(ptr) == 1)
    {
        printf("THE POP IS NOT POSSIBLE\n");
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }
    else if (a == '(' && b == ')')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int parenthesis_match(char *exp)
{
    struct node *s;
    s->size = 1555;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (empty(s))
            {
                return 0;
            }

            popped_ch = pop(s);

            if (match(popped_ch, exp[i]) == 0)
            {
                return 0;
            }
        }
    }
    if (empty(s) == 1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    char *exp = "{((8)(*--$$9))}";
    // Check if stack is empty
    if (parenthesis_match(exp) == 1)
    {
        printf("The parenthesis is matching");
    }
    else
    {
        printf("The parenthesis is not matching");
    }
    return 0;
}
