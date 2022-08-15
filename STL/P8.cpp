#include <iostream>
#include <set>
using namespace std;
int main()
{
    // insert-count-erase(it)-find(element)
    //  it shows only unquie elements if multiple elements are used also onlye one time they are printed
    //  IT IS DONE BY BST
    //  IT CANNOT BE MODIFIED
    //  IT CAN RETURN AN SORTED OUTPUT
    //  THE ONLY BETWEEN ORDERED AND UNORDERED SET IS ORDERED IS SLOW AND UNORDERED RETURN A RANDOM VALUE NOT THE SORTED ONE
    //  INSETION TAKES PLACE AT O(logn)
    //  insert find erase count O(logn)
    //  size begin empty O(1)
    // s.erase(value) for erasing the value
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(8);
    s.insert(4);
    s.insert(7);
    s.insert(7);
    s.insert(3);
    s.insert(2);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it); // delete the element
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << "33 is present or not-->" << s.count(33);
    cout << endl;
    set<int>::iterator itr = s.find(5); // starts the iterator from here
    // it return the iterator of the 5
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}