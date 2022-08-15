// vectors cannot be resized and insertion in the middle is middle
// INTRODUCTON TO CONTAINERS IN THE STL MAINLY THE VECTORS
// IF FORGET ANY OF THE FUNCTIONS IN THE CPP USE THE CPP REFERENCE.COM TO REFER
// usage of the push back and the size() fuction in the vector file
// pop back is used to delete the last element
// begin() hepls to point the first element of the vector
// insert() is used to insert a variable in the vector and we should use iterator
// at() is used to allot the element to that memory allocation
// vector is reusable array

#include <iostream>
#include <vector>

using namespace std;

template <class t>

void display(vector<t> &v)
{
    for (int i = 0; i < v.size(); i++) //-->size helps to know the size of the vector
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v1; //-->ZERO LENGTH VECTOR
    int element;
    int size;
    cout << "ENTER THE SIZE OF THE VECTOR" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "ENTER THE VALUE OF THE ELEMENT" << endl;
        cin >> element;
        v1.push_back(element); //-->alloat a element at the end of the vector
    }
    display(v1);
    // v1.pop_back();-->for the popback function in the vector
    vector<int>::iterator iter = v1.begin();
    v1.insert(iter, 5);         //-->helps to point on the first element and insert a element in the first place
    v1.insert(iter + 1, 555);   //-->in this way it helps to insert an element at the required position
    v1.insert(iter + 3, 5, 77); //-->it means it points to 3 rd element and the value 77 is reapeted 5 times
    display(v1);

    // ANOTHET METHOD TO USE SPECIFIC NUMBERD VECTOR
    cout << endl;
    vector<char> v2(5);   // vector of the size 5,5 element char vector
    vector<char> v3(v2);  // 5 element char vector from v2
    vector<int> v4(6, 5); // 6 element vector of 5s

    v2.push_back('e');
    display(v2);
    display(v3);
    display(v4);
    // v3 and v4 has no elements so nothing will be displayed
    return 0;
}