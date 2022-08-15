#include <iostream>
using namespace std;
// usage of the virtual base class in the inheritance
// using virtual calls it makes the ambiguity when 2 classes are made from base class after making
// another class from the 2 classes it help to not to make clash between same variable
class base1
{
public:
    int a;
};
class base2 : virtual public base1
{
public:
    void entered()
    {
        cout << "ENTERED TO BASE 2" << endl;
    }
};
class base3 : virtual public base1
{
public:
    void entered1()
    {
        cout << "ENTERD IN TO BASE3" << endl;
    }
};
class base4 : public base2, public base3
{
public:
    void entry()
    {
        cout << "ENTERED INTO BASE 4" << endl;
    }
    void data()
    {
        a = 7;
        cout << a;
    }
};
int main()
{
    base4 b;
    b.data();

    return 0;
}