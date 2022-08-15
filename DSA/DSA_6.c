#include <stdio.h>
#include <stdlib.h>

// linked list making and the traversal in the linked list
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

    first->data = 7;
    first->next = second;

    second->data = 77;
    second->next = third;

    third->data = 777;
    third->next = fourth;

    fourth->data = 7777;
    fourth->next = fivth;

    fivth->data = 77777;
    fivth->next = NULL;

    linkedlist_traversal(first);

    return 0;
}
