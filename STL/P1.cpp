#include <iostream>
#include <array>
using namespace std;
int main()
{
    // size-at-empty-front-back
    //  it is static not the dynamic
    //   all the a.size at front back empty take place at O(1)
    int basic[3] = {1, 3, 4};
    array<int, 4> a = {1, 2, 3, 4}; // initializing an array in the stl
    int size = a.size();            // gives the size of the array
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << endl; // at i the a[i] value
    }
    cout << "EMPTY OR NOT " << a.empty() << endl;  // return boolean 0 or 1 empty 1 or else 0
    cout << "FIRST ELEMENT " << a.front() << endl; // for the first element
    cout << "last ELEMENT " << a.back() << endl;   // for the last element

    return 0;
}