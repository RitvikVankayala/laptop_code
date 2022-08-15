#include <stdio.h>
// quick sort algorithm
// number of the partition are used in the final sorting process
// best case complexity is O(nlog n)
// worst case complexity is 0(N^2)
// not stable
// inplace algorithm
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
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    } while (i < j);

    // Swap A[low] and A[j]
    swap(&arr[low], &arr[j]);
    return j;
}

void quicksort(int *arr, int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quicksort(arr, low, partitionIndex - 1);  // sort left subarray
        quicksort(arr, partitionIndex + 1, high); // sort right subarray
    }
}
int main()
{
    int size = 6;
    int arr[] = {12, 54, 65, 7, 23, 9};
    printarray(arr, size);
    quicksort(arr, 0, size - 1);
    printarray(arr, size);
    return 0;
}