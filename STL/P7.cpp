#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // priority_queue<int, vector<int>, greater<int>> mini;
    //  max heap means the elements of poping gives the max of the remaianing elements
    //  min heap means the elements of poping gives the min of the remaining elements
    //   priority queue the element that we pop is either max or the min of the all values it is base on the heap concept

    //  process of making max heap
    priority_queue<int> maxi; //-->decresing order
    // process of making min heap
    priority_queue<int, vector<int>, greater<int>> mini; //-->min heap incresing order

    maxi.push(1);
    maxi.push(5);
    maxi.push(2);
    maxi.push(4);
    // for(int i:maxi){

    // }-->we cannot write this for the prority queue
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    mini.push(1);
    mini.push(5);
    mini.push(2);
    mini.push(4);
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    cout << "Empty or Not" << maxi.empty() << endl;
    return 0;
}