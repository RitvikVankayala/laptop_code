#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    // USES THE PRINCIPLE OF THE TRAVERSAL
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
}
void delete_number(int size, int index, int arr[])
{
    // usage of the deletion in the array
    if (index >= size)
    {
        printf("ERROR IS OBTAINED\n");
    }
    else
    {
        for (int i = index; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}

int main()
{
    int arr[100] = {32, 12, 67, 2, 45};
    int size = 5;
    int index;
    printf("ENTER THE VALUE OF THE INDEX\n");
    scanf("%d", &index);
    display(arr, size);
    delete_number(size, index, arr);
    if (index >= size)
    {
        printf("!!!!!!!\n");
    }
    else
    {
        size -= 1;
        display(arr, size);
        return 0;
    }
}