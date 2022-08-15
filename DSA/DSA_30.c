#include <stdio.h>

// bubble sort algorithm worst case time complexity is O(n^2)
// and bubble sort adaptive algorithm worst case time complexity is O(n)

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sort_array(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void adaptive_sort_array(int *arr, int size)
{
    int counter = 0;
    for (int i = 0; i < size - 1; i++)
    {
        printf("working on PASS NUMBER IS %d\n", i + 1);
        counter = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                counter = 0;
            }
        }
        if (counter == 1)
        {
            return; // it tells to come out of the function
        }
    }
}
int main()
{
    // int arr[] = {4, 2, 98, 34, 23};
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    printarray(arr, size);
    // sort_array(arr, size);
    adaptive_sort_array(arr, size);
    printarray(arr, size);
    return 0;
}