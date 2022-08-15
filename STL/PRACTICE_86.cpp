#include <iostream>
using namespace std;
// class templates with default parameters
template <class t1 = int, class t2 = float>
class base
{
public:
    t1 data1;
    t2 data2;

    base(t1 m, t2 n)
    {
        data1 = m;
        data2 = n;
    }
    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2 << endl;
    }
};
int main()
{

    base<float, int> b(4, 5.5); // default template will be overwritten
    b.display();

    base<> b1(4.45, 56.6); //-->default template will be passed
    b1.display();
    return 0;
}