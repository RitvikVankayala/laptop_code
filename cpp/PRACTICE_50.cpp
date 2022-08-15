//default constructor will not take the aarguments
    //constructor should be always written in the public section but not on the private
    //it will be automatically invoked
    //constructor cannot return values
    //its address cannot be reffered
    
#include<iostream>
using namespace std;

//usage of the constructers in the classes
class complex{
    int a;
    int b;
    public:
    complex();
    //this is an default constructor
    
    void printdata()
    {
        cout << "THE COMPLEX NUMBER IS " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(){
    a=45;
    b=89;
}

int main(){
    complex c;
    c.printdata();
    return 0;
}