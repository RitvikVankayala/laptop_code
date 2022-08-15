#include <iostream>
using namespace std;
// usage of the new keyword
int main()
{
    // new keyword is used to allot the dynamic space for the required varialbe
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    // it dynamically allotes the memory required for the array of 3 variables

    for (int i = 0; i < 3; i++)
    {
        arr[i] = 10 * (i + 1);
    }
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}