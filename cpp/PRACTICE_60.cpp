#include <iostream>
using namespace std;
// usage of the single inheritance in the oops
class base
{
    int d1;

public:
    int d2;
    void fixdata();
    int getdata1();
    int getdata2();
};

class derived :public base       
{
    int d3;

public:
    void data();
    void process();
};

int base::getdata1()
{
    return d1;
}

int base::getdata2()
{
    return d2;
}
void base::fixdata()
{
    d1 = 50;
    d2 = 20;
}
void derived::data()
{
    d3 = d2 * getdata1();
}
void derived::process()
{

    cout << "THE VALUE OF THE VARIABLE D1 IS " << getdata1() << endl;
    cout << "THE VALUE OF THE VARIABLE D2 IS " << d2 << endl;
    cout << "THE VALUE OF THE VARIABLE D3 IS " << d3 << endl;
}

int main()
{
    derived b1;
    b1.fixdata();
    b1.data();
    b1.process();

    return 0;
}