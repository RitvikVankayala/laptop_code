#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // push-pop-empty-size-top
    //  stack follows lifo principle
    stack<string> s;  // initialization of the string
    s.push("Ritvik"); // pushing the string in the stack push property
    s.push("Phani");
    s.push("Vankayala");
    cout << "TOP ELEMENT IS " << s.top() << endl; // top element is the last entered element
    s.pop();
    cout << "TOP ELEMENT IS " << s.top() << endl;
    cout << s.size() << endl;  // size of the stack
    cout << s.empty() << endl; // empty or not
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}