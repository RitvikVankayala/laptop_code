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

void insert_num(int capacity, int size, int arr[], int index, int number)
{
    // USES THE PRINCIPLE OF THE INSERTION

    if (size >= capacity)
    {
        printf("THE INSERTION IS NOT POSSIBLE\n");
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = number;
        printf("THE INSERTION IS SUCCESFULL\n");
    }
}

int main()
{
    int arr[100] = {1, 5, 9, 2, 11};
    int capacity = 100;
    int size = 5;
    int index;
    printf("ENTER THE INDEX NUMBER AT WHICH YOU WANT TO INSERT THE NUMBER\n");
    scanf("%d", &index);
    int number;
    printf("ENTER THE NUMBER TO BE INSERTED\n");
    scanf("%d", &number);
    if (index >= size)
    {
        printf("ERROR\n");
    }
    else
    {
        display(arr, size);
        insert_num(capacity, size, arr, index, number);
        size += 1;
        display(arr, size);
    }

    return 0;
}
