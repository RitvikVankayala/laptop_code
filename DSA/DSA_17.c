#include <stdio.h>
#include <stdlib.h>

// programme for sorting an array
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        printf("--> %d\n", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(&arr[j], &arr[i]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 12, 3, 8, 7};
    int size = 5;
    print_array(arr, size);

    printf("..........................\n");
    sort_array(arr, size);
    print_array(arr, size);

    return 0;
}