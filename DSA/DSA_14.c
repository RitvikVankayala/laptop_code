#include <stdio.h>
#include <stdlib.h>

// GIVES A VALUE THAT IS PRESENT IN THE LINKED LIST WE NEED TO DELETE THAT VALUE
struct node
{
    int data;
    struct node *next;
};

void linkedlist_traversal(struct node *ptr)
{

    while (ptr != NULL)
    {

        printf("THE VALUE OF THE ELEMENT %d \n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *value_delete(struct node *first, int value)
{
    struct node *p = first;
    struct node *q = first->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
    }
    else
    {
        printf("THE VALUE IS NOT PRESENT TO GET DELETED\n");
    }
    free(q);
    return first;
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
    fivth->next = NULL;

    linkedlist_traversal(first);

    printf("***************\n");

    int value;
    printf("ENTER THE VALUE OF THE NUMBER TO BE DELETED\n");
    scanf("%d", &value);

    first = value_delete(first, value);

    linkedlist_traversal(first);

    return 0;
}