#include <iostream>
using namespace std;

// usage of the multiple inheritance and the common syntax introduction
/*class derived : visibilitymode base1,visibilitymode base2{
        **common code**
};
*/
class base1
{
protected:
    int a;

public:
    void fixdata1(int d);
    void getdata1();
};
class base2
{
protected:
    int b;

public:
    void fixdata2(int e);
    void getdata2();
};
class derived : public base1, public base2
{
public:
    void process();
};
void base1::fixdata1(int d)
{
    a = d;
}
void base2::fixdata2(int e)
{
    b = e;
}
void base1::getdata1()
{
    cout << "THE VALUE OF THE VARIABLE a IS " << a << endl;
}
void base2::getdata2()
{
    cout << "THE VALUE OF THE VARIABLE b IS " << b << endl;
}
void derived::process()
{
    cout << "THE SUM OF THE TWO VARIABLES IS " << a + b << endl;
}
int main()
{
    derived d;
    d.fixdata1(4);
    d.fixdata2(7);
    d.getdata1();
    d.getdata2();
    d.process();
    return 0;
}