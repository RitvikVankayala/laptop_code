#include <stdio.h>
#include <stdlib.h>
// preorder postorder and inorder traversal in the linkedlist representation of the tree
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
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node *root = create_node(4);
    struct node *p1 = create_node(1);
    struct node *p2 = create_node(6);
    struct node *p3 = create_node(5);
    struct node *p4 = create_node(2);
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;

    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);

    return 0;
}