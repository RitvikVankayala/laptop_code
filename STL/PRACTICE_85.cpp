#include <iostream>
using namespace std;
// multi parameter templates in the template making
// helps for making use of the multiple parameters
// HELPS TO OBEY DRY PRINCIPLE -->DOONT REPEAT YOURSELF

template <class t1, class t2>
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
    base<int, float> b(4, 5.5);
    b.display();

    return 0;
}