#include <stdio.h>
#include <stdlib.h>
// if time permits carefully observe the isbst function
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
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
int isBST(struct node *root)
{
    static struct node *pre = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (pre != NULL && root->data <= pre->data)
        {
            return 0;
        }
        pre = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
int main()
{
    struct node *root = create_node(5);
    struct node *p1 = create_node(3);
    struct node *p2 = create_node(6);
    struct node *p3 = create_node(1);
    struct node *p4 = create_node(4);
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;

    inorder(root);
    printf("\n");
    printf("%d", isBST(root));
    return 0;
}
