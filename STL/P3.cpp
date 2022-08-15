#include <iostream>
#include <deque>
using namespace std;
int main()
{
    // push_back-push_front-pop_front-pop_back-erase(i1,it2)-front-back-size-empty-at
    //  it is dynamic
    deque<int> d;
    d.push_back(2);  // adding element from the back
    d.push_front(3); // adding element from the front
    d.push_back(4);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_back(); // deleting element from the back
    d.push_front(5);
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // d.pop_front(); // deleting element from the front
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    cout << "at the index 2" << d.at(2) << endl;   // element at index 2
    cout << d.front() << endl;                     // element at front
    cout << d.back() << endl;                      // element at back
    cout << "empty or not :" << d.empty() << endl; // empty or not
    cout << d.size() << endl;                      // size of the deque
    d.erase(d.begin(), d.begin() + 2);             // erase first two elements
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << d.size();
    return 0;
}