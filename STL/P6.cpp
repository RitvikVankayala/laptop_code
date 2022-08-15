#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // push-pop-size-empty-front-back
    //  queue follows first in first out principle
    queue<string> q;  // initializing queue
    q.push("Ritvik"); // pushing in a queue
    q.push("Phani");
    q.push("Vankayala");
    cout << "top element " << q.front() << endl; // front element
    cout << q.size() << endl;                    // size of the queue
    // q.pop();                                     // poping a element
    cout << "top element " << q.front() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl; // empty or not
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}