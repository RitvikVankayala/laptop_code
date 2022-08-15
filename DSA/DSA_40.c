#include <stdio.h>
#include <stdlib.h>
// recursive search in the binary search tree
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
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
struct node *check(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return check(root->left, key);
    }
    else
    {
        return check(root->right, key);
    }
}
int main()
{
    struct node *root = create(5);
    struct node *p1 = create(3);
    struct node *p2 = create(6);
    struct node *p3 = create(1);
    struct node *p4 = create(4);
    struct node *p5 = create(2);
    struct node *p6 = create(8);

    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

    inorder(root);
    printf("\n");
    struct node *n = check(root, 8);
    if (n == NULL)
    {
        printf("NO ELEMENT AS MENTIONED IS NOT AVAILABLE IN THE TREE\n");
    }
    else
    {
        printf("ELEMENT IN SEARCH : %d\n", n->data);
    }
    return 0;
}