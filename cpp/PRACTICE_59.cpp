#include <iostream>
using namespace std;

// usage of the inheritance in the c++ basic syntax

class employee
{
public:
    int id;
    employee(){};
    employee(int input)
    {
        id = input;
    }
};

/* class {{derived class}}:{{visibility mode}} base class{
    code
}
*/
//default visibility mode is private
//private visibility mode the public variables are private over here
//public visibiliy mode the public variables are public over here
//private variables cannot be inherited

class programmer :employee{
    public:
    int idcode;
    programmer(int inputcode){
        id=inputcode;
        idcode=9;
    }
    void getdata(){
        cout<<id<<endl;
    }

};

int main()
{
    employee e1(3),e2(6);
    cout<<e1.id<<endl;
    cout<<e2.id<<endl;

    programmer p1(10);
    //cout<<p1.id; id is inaccessible as by default it is in the private section of the derived class
    p1.getdata();
    cout<< p1.idcode<<endl;
    
    return 0;
}