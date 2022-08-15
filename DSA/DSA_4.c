#include <stdio.h>
#include <stdlib.h>
// linear searching in the c
int linear_search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("THE ELEMENT IS PRESENT IN THE ARRAY\n");
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {45, 23, 1, 4, 5, 900, 234, 32, 45};
    int element;
    printf("ENTER THE ELEMENT\n");
    scanf("%d", &element);
    int size = sizeof(arr) / sizeof(int);

    int at_index = linear_search(arr, size, element);

    if (at_index == -1)
    {
        printf("NO MEMBER OF ARRAY AS THE ELEMENT \n");
    }
    else
    {
        printf("THE VALUE OF THE ARRAY OF INDEX %d IS MATCHED WITH THE ELEMENT %d GIVEN AS AN INPUT\n", at_index, element);
    }

    return 0;
}