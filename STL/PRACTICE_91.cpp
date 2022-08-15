// usage of the list in the stl
// it is a bidirectional array
// not a contiuous memory allocation not as array and the vector
// deletion and the insertion is easy then any other datatype

#include <iostream>
#include <list>
using namespace std;

void display(list<int> l)
{
    list<int>::iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {

        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l1; // empty list of length 0
    l1.push_back(3);
    l1.push_back(43);
    l1.push_back(34);
    l1.push_back(135);

    display(l1);

    // l1.sort(); //-->it is used for the sorting
    //        display(l1);

    /* -->it is used for removing a element

        l1.pop_back(); //-->helps to delete element from back
        display(l1);

        l1.pop_front(); //-->helps to delete element from front
        display(l1);

        l1.remove(43); // removes that particular element
        display(l1);
        */

    list<int> l2(3); // empty list of length 3
    list<int>::iterator iter;
    iter = l2.begin();
    *iter = 45;
    iter++;
    *iter = 90;
    iter++;
    *iter = 909;
    iter++;
    display(l2);

    l1.merge(l2); //-->helps for the mergig of the list
    display(l1);

    l1.reverse();
    display(l1); // helps for the reversal of the list
    return 0;
}