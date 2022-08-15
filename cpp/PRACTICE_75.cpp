#include <iostream>
using namespace std;
// usage of the this pointer
class d
{
    int a;

public:
    // d setdata(int a)
    // {
    //     this->a = a;
    //     return *this;
    // }
    //-->another use of the this pointer

    void setdata(int a)
    {
        this->a = a;
        // a = a;
        //-->we will get a garbage value because the both a here are global that means from same function
        // to avoid this problem we use this pointer
        // this pointer points the varaible that is to be invoked by the main function
        // another use is to return the value of same name in non void function
    }
    void showdata()
    {
        cout << "THE VALUE OF a IS " << a;
    }
};
int main()
{
    d e;
    e.setdata(7);
    e.showdata();

    return 0;
}