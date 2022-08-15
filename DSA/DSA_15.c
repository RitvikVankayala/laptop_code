#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedlist_traversal(struct node *first)
{
    struct node *p = first;
    do
    {
        printf("THE VALUE OF THE ELEMENT IS %d\n", p->data);
        p = p->next;
    } while (p != first);
}

int main()
{

    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fivth;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fivth = (struct node *)malloc(sizeof(struct node));

    first->data = 67;
    first->next = second;

    second->data = 123;
    second->next = third;

    third->data = 676;
    third->next = fourth;

    fourth->data = 143;
    fourth->next = fivth;

    fivth->data = 666;
    fivth->next = first;

    linkedlist_traversal(first);
    return 0;
}