#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // push_back-pop_back-size-empty-at-capacity-clear
    //  it is dynamic
    //  it doubles it capacity after eack push_back
    //  capacity means the storage
    //  size means filled
    // v.resize(n) makes the size of vector as n
    vector<int> v;                                 // for the initialization
    cout << "capacity ->" << v.capacity() << endl; // for finding the capacity
    cout << "size -> " << v.size() << endl;        // for finding the size
    v.push_back(1);                                // for pushing the element in the vector
    cout << "capacity ->" << v.capacity() << endl;
    cout << "size ->" << v.size() << endl;
    v.push_back(2);
    cout << "capacity ->" << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;
    v.push_back(4);
    cout << "capacity ->" << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;

    cout << "ELEMENT AT THE INDEX 2 -> " << v.at(2) << endl; // at operation
    cout << v.front() << endl;                               // first index
    cout << v.back() << endl;                                // last index
    cout << "before the popback" << endl;
    for (int i : v) // for the range based loop v means vector it can also be used for the array list and soon
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "after popback" << endl;
    v.pop_back(); // used to remove the last element size changes but not the capacity
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "capacity ->" << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;

    v.clear(); // for making the vector clear size becomes zero but capacity remains same
    cout << "capacity ->" << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;

    vector<int> a(5, 1); // 5 element vector with all values as 1
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "capacity ->" << a.capacity() << endl;
    cout << "size -> " << a.size() << endl;
    a.push_back(9);
    cout << "capacity ->" << a.capacity() << endl;
    cout << "size -> " << a.size() << endl;
    vector<int> last(a); // for copying the first defined vector but it will not work for the size or default uninitialized vectors for example here v
    for (int i : last)
    {
        cout << i << " ";
    }

    return 0;
}