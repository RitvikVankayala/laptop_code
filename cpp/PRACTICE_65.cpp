#include <iostream>
using namespace std;
// ambiguity in the inheritance ther are two types of the ambiguity this is case 1
class base1
{
public:
    void function()
    {
        cout << "FROM THE BASE 1";
    }
};
class base2
{
public:
    void function()
    {
        cout << "FROM THE BASE 2";
    }
};
class derived : public base1, public base2
{
public:
    void function()
    {
        base1::function();
    }
    // it clears the ambiguity for the compiler
};

int main()
{
    derived d;
    // d.function();-->brings an error due to the ambiguity in the class whether it should call for base 1 or base2
    d.function();
    return 0;
}