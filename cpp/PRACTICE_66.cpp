#include <iostream>
using namespace std;
// ambiguiy in the class function calling of case2
class base
{
public:
    void function()
    {
        cout << "FROM THE BASE CLASS";
    }
};
class derived : public base
{
public:
    void function()
    {
        cout << "FROM THE DERIVED CLASS";
    }
};

int main()
{
    derived d;
    d.function();
    // first priority is given to the function written in its own class rather than the base class

    return 0;
}