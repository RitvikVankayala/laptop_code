#include <iostream>
#include <list>
using namespace std;
int main()
{
    // size-empty-push_back-pop_back-erase(it)
    //  no direct access
    //  trace will be done in O(n)
    //  remaing like empty font back will be in O(1)
    //  here erase is similiar to the deque
    //  similiar function of pop front and back
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << l.size() << endl;
    list<int> a(l); // copy elements in the list l to a that l is at which it is initialized
    list<int> b(5, 200);
    for (int i : b)
    {
        cout << i << " ";
    }
    return 0;
}