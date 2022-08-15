#include <stdio.h>
#include <stdlib.h>
// BINERY SEARCH WITH INPUT AS THE SORTED ARRAY
int bineary_search(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("ENTER THE VALUE OF THE ELEMENT \n");
    scanf("%d", &element);

    int at_array = bineary_search(arr, size, element);
    if (arr[at_array] == element)
    {
        printf("THE NUMBER IS PRESENT AT THE INDEX %d\n", at_array);
    }
    else
    {
        printf("error!!!!!!\n");
    }
    return 0;
}