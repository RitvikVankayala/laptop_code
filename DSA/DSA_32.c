#include <stdio.h>
// selection sort algorithm
// not stable and not adaptive
// minimum no of swaps and time complexity for the worst case is O(n*2)
// in one pass there will be n-1 comparitions
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void selection_sort(int *arr, int size)
{
    int index;
    printf("THE SELECTION SORT IS STARTED\n");
    for (int i = 0; i < size - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(&arr[i], &arr[index]);
    }
    printf("THE SELECTION SORT IS COMPLETED\n");
}
int main()
{

    int size = 6;
    int arr[] = {12, 54, 65, 7, 23, 9};
    printarray(arr, size);
    selection_sort(arr, size);
    printarray(arr, size);

    return 0;
}