#include <iostream>
using namespace std;
// usage of the arrow operator and the pointer dereferencing for the class object
// arrow opperator is used to derefernce the pointer and run the function
class base
{
    int real;
    int imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "THE VALUE OF THE REAL PART IS " << real << endl;
        cout << "THE VALUE OF THE imaginary PART IS " << imaginary << endl;
    }
};
int main()
{
    // case 1:
    // base b;
    // b.setdata(3,4);
    // b.getdata();

    // case 2:
    // base b;
    // base *ptr = &b;
    // (*ptr).setdata(6, 5),
    // (*ptr).getdata();

    // case 3:
    // base*ptr=new base;
    // ptr->setdata(6, 7);
    // ptr->getdata();

    // case 4:
    // declaring an array in the case3 format
    // base*ptr=new base[4];
    // ptr->setdata(6, 7);
    // ptr->getdata();
    // prints the first element of the array ptr+1 second element and so on......

    // case 5:
    base b;
    base *ptr = &b;
    ptr->setdata(6, 7);
    ptr->getdata();

    return 0;
}