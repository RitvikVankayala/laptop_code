#include <iostream>
using namespace std;
// introduction of the virtual functions in the run time polymorphism
class base
{
public:
    int a = 1;
    virtual void display()
    {
        cout << "THE VALUE OF THE VARIABLE IS " << a << endl;
        cout << "THE DISPLAY FUNCTION IS RUNNED IN THE BASE CLASS" << endl;
    }
};
class derived : public base
{
public:
    int b = 5;
    void display()
    {
        cout << "THE VALUE OF THE VARIABLE IS " << b << endl;
        cout << "THE DISPLAY FUNCTION IS RUNNED IN THE DERIVED CLASS " << endl;
    }
};

int main()
{

    derived d;
    base *ptr = &d;
    ptr->display();
    // IF THE VIRTUAL NAME BEFORE THE FUNCTION IN THE BASE CLASS IS NOT MENTIONED THEN THE DISPLAY IN THE BASE CLASS WILL BE RUNNED
    // ON USING THE VIRTUAL FUNCTION THE DISPLAY USED WILL BE FOR THE DERIVED

    return 0;
}