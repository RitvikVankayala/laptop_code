#include <stdio.h>
#include <stdlib.h>
// creating a binary tree using the linked representation
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create_node(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    struct node *p = create_node(5);
    struct node *p1 = create_node(6);
    struct node *p2 = create_node(7);
    // linking the data
    p->left = p1;
    p->right = p2;
    return 0;
}