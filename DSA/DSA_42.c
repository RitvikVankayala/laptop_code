#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create_node(int data)
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void insert_node(struct node *root, int key)
{
    struct node *prev = NULL;
    struct node *ptr;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = create_node(key);
    if (prev->data > key)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}
int main()
{
    struct node *root = create_node(8);
    struct node *p = create_node(3);
    struct node *p1 = create_node(10);
    struct node *p2 = create_node(1);
    struct node *p3 = create_node(6);
    struct node *p4 = create_node(4);
    struct node *p5 = create_node(7);
    struct node *p6 = create_node(14);
    struct node *p7 = create_node(13);

    root->left = p;
    root->right = p1;
    p->left = p2;
    p->right = p3;
    p3->left = p4;
    p3->right = p5;
    p1->right = p6;
    p6->left = p7;

    inorder(root);
    insert_node(root, 5);
    printf("\n");
    inorder(root);
    return 0;
}