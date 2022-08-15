#include <iostream>
using namespace std;
// introduction to run time polymorphism and usage of the base class pointer to the derived class
// this binding is called as late binding as the function will be runned of the type the pointer we used
class base
{
public:
    int base_va;
    void display()
    {
        cout << "BASE CLASS FUNCTION IS EXECUTED " << endl;
        cout << "THE VALUE OF THE BASE CLASS VARIABLE IS " << base_va << endl;
    }
};

class derived : public base
{
public:
    int derived_va;
    void display()
    {
        cout << "DERIVED CLASS FUNCTION IS EXECUTED " << endl;
        cout << "THE VALUE OF THE DERIVED CLASS VARIABLE IS " << derived_va << endl;
    }
};

int main()
{
    // even if the  pointer points the derived class only the base class is runned it is the speciality in the run time polymorphism
    derived d;
    base *ptr = &d;

    ptr->base_va = 67;
    // ptr->derived_va = 12; -->this will throw error
    ptr->display();

    base b;
    base *ptr1 = &b;
    ptr1->base_va = 90;
    ptr1->display();

    derived d1;
    derived *ptr2 = &d1;
    ptr2->base_va = 8;
    // ptr2->display(); it tells that only derived class function display is executed

    ptr2->derived_va = 89;
    ptr2->display();

    // base t;
    // derived *ptr3 =&t;
    // we cannot do this we cannot point a base clas variable to derived class

    return 0;
}