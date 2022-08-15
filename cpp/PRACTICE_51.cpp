#include<iostream>
using namespace std;

//usage of the parametrilized constructor 

class complex{
    int a;
    int b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
void printdata()
    {
        cout << "THE COMPLEX NUMBER IS " << a << "+" << b << "i" << endl;
    }
};

int main(){

//there are two ways to execute the parametarized arguments
    //implicite call
    complex c(3,5);
    complex d(7,45);

    c.printdata();
    d.printdata();

    //explicit call
    complex e=complex(34,65);
    e.printdata();

    return 0;
}