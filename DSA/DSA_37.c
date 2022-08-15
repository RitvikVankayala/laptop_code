#include <stdio.h>
#include <stdlib.h>

// array representation of the array

int main()
{
    int *arr = (int *)malloc(3 * sizeof(int));
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 3;
    return 0;
}