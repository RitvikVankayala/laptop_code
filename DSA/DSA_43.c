#include <stdio.h>
#include <stdlib.h>
// Find why the code is not running for 10
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
// the below function is used for the inorder precidence
struct node *inorder_precidor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *delete_node(struct node *root, int key)
{
    struct node *ipre;
    // ipre is nothing but the inorder precedor
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    // deleting of the node in the binary search tree
    if (root->data > key)
    {
        root->left = delete_node(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = delete_node(root->right, key);
    }
    else
    {
        ipre = inorder_precidor(root);
        root->data = ipre->data;
        root->left = delete_node(root->left, ipre->data);
    }
    return root;
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
    delete_node(root, 3);
    printf("\n");
    inorder(root);

    return 0;
}