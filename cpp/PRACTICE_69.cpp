#include <iostream>
using namespace std;
// usage of the constructor in the derived in the derived class and its preference
/*case1:
base derived :public base{
    first preference of the constructor is base class and next derived class
}
case2:
base derived:public base1,public base2{
    first preference to first mentioned base class base1--base2--derived
}
case3:
base derived:public base1,virtual public base2{
    first prefernce to the virtual class and then to other base class
    virtual---normal---derived
}
*/
class base1
{
    int a1;

public:
    base1(int i)
    {
        a1 = i;
        cout << "THE BASE1 CONSTRUCTOR IS CALLED" << endl;
    }
    void printdata1()
    {
        cout << "THE VALUE OF THE FUNCTION " << a1 << endl;
    }
};
class base2
{
    int a2;

public:
    base2(int i)
    {
        a2 = i;
        cout << "THE BASE2 CONSTRUCTOR IS CALLED" << endl;
    }
    void printdata2()
    {
        cout << "THE VALUE OF THE FUNCTION " << a2 << endl;
    }
};
class derived : public base1, public base2
{
    int d1, d2;

public:
    // common syntax for writing the constructor in the
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        d1 = c;
        d2 = d;
        cout << "DERIVED CLASS IS CALLED" << endl;
    }
    void displaydata()
    {
        cout << "THE VALUE OF THE VARIABLE derived1 IS " << d1 << endl;
        cout << "THE VALUE OF THE VARIABLE derived2 IS " << d2 << endl;
    }
    void process()
    {
        printdata1();
        printdata2();
        displaydata();
    }
};

int main()
{
    derived d(1, 2, 3, 4);
    d.process();

    return 0;
}