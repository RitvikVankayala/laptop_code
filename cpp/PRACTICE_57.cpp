#include <iostream>
using namespace std;

// usage of the copy constructor
class number
{
    int a;

public:
    number()
    {
        a = 3;
    }
    number(int num)
    {
        a = num;
    }
    number(number &ref)
    {
        cout << "COPY CONSTRUCTOR CALLED SUCCESFULLY" << endl;
        a = ref.a;
    }
    // this a copy constructor even if it is not written the programme can be runned
    // but we can write extra information using the copy constructor
    // a default copy constructor is already present in the compiler
    void display()
    {
        cout << "***********" << endl;
        cout << "THE VALUE OF THE NUMBER IS " << a << endl;
    }
};
int main()
{

    number x, y, z(67), z2;

    x.display();
    y.display();
    z.display();

    number z1(x);//COPY CONSTRUCTOR CALLED
    z1.display();

    z2 = z;
    z2.display(); 
    // THE VALUE IS NOT CHANGED BECAUSE IT ALREADY CALLED THE VOID NUMBERR FUNCTON

    number z3 = z;//COPY CONSTRUCTOR called 
    z3.display(); 
    // THE VALUE IS CHANGED BECAUSE THE AS THE VARIABLE DEFINED IT IS ASSIGNED TO Z SO Z WILL BE COPIED
    // IF NO COPY CONSTRUCTOR IS USED THEN ALSO A DEFAULT CONSTRUCTOR RUNNER BUT WE CANNOT IMPART ANY EXTRA COMMENTS IN IT

    return 0;
}