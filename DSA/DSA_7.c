#include <stdio.h>
#include <stdlib.h>

// insertion in the linked list with various cases
// insertion in the middle
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

struct node *insert_first(struct node *ptr, int data, struct node *first)
{

    ptr->next = first;
    first = ptr;
    first->data = data;
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

    int data;
    printf("enter the value of the data\n");
    scanf("%d", &data);

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    first = insert_first(ptr, data, first);

    linkedlist_traversal(first);

    return 0;
}