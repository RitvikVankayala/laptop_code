#include <stdio.h>

// insertion sort algorithm is adaptive,stable,time complexity worst case-O(n^2)
// best case time complexity is O(n)
// it is carried out with n-1 comparitions

void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert_sort(int *arr, int size)
{
    int j, buffer;
    for (int i = 1; i < size; i++)
    {
        // loop for the pass
        buffer = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > buffer) // for the ascending order for descending order arr[j]<buffer
        {
            // loop for the swaping
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = buffer;
    }
}

int main()
{

    int size = 6;
    int arr[] = {12, 54, 65, 7, 23, 9};
    printarray(arr, size);
    insert_sort(arr, size);
    printarray(arr, size);
    return 0;
}