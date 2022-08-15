#include <stdio.h>
#include <limits.h> //for using INT MAX AND MIN
#include <stdlib.h>
// count sort algorithm
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int maximum(int *a, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void countsort(int *a, int n)
{
    int i, j;
    // find the maximum element in a
    int max = maximum(a, n);
    // creating a buffer array
    int *buffer = (int *)malloc((max + 1) * sizeof(int));
    // allocating zero to all elements
    for (int i = 0; i < (max + 1); i++)
    {
        buffer[i] = 0;
    }
    // allocating value to the indexes of the buffer array
    for (int i = 0; i < n; i++)
    {
        buffer[a[i]] = buffer[a[i]] + 1;
    }
    // allocating the value to the indexes of the new array
    i = 0; // for the buffer array
    j = 0; // for the final array
    while (i < max + 1)
    {
        if (buffer[i] > 0)
        {
            a[j] = i;
            buffer[i] = buffer[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    countsort(A, n);
    printArray(A, n);
    return 0;
}
