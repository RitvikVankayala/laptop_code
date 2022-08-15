#include <iostream>
using namespace std;

void function(int a)
{
    cout << "I AM FIRST FUNCTION " << a << endl;
}

template <class t>
void function(t a)
{
    cout << "I AM TEMPLATERED FUNCTION" << a << endl;
}

int main()
{

    function(3);   //-->the funcion with argument int will be runned due to its higher priority
    function(7.5); //-->the template function is runned beause the arguments are decided over here

    return 0;
}