#include <iostream>
using namespace std;
// usage of the delete keyword
int main()
{
    // delete p-->this helps to delete the allocated memory of the a pointer p
    int *arr = new int[3];
    // it dynamically allotes the memory required for the array of 3 variables

    for (int i = 0; i < 3; i++)
    {
        arr[i] = 10 * (i + 1);
    }
    delete[] arr; //-->this syntax is used to delete the allocated memory of a array

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    // garbage values will be printed as the allocated memory is deleted
    return 0;
}