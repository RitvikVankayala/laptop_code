// FOR STL LIBRARIES USE THE C++ REFERENCE WEBSITE IN THE GOOGLE//

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {78, 12, 34, 32, 56, 20, 1};
    sort(arr, arr + 5); // sort(address ,final address)
                        // an acending order will be printed
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "*************************" << endl;

    int ar[] = {23, 900, 324, 2222, 134, 3};
    sort(ar, ar + 4, greater<int>()); // decreasing order will be printed

    for (int i = 0; i < 6; i++)
    {
        cout << ar[i] << endl;
    }

    return 0;
}