#include <iostream>
using namespace std;

// MEMBER FUNCTION TEMPLATES AND THE OVERLOADING TEMPLATE FUNCTIONS

template <class t>
class base
{
public:
    t data;
    base(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void base<t>::display()
{
    cout << data;
}

int main()
{

    base<int> b(5.7);
    b.display();

    return 0;
}