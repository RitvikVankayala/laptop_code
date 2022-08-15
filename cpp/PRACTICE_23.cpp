#include<iostream>
using namespace std;

int main(){

    int a=9;
    int* b;
    b=&a;

    //&-->IT IS KNOWN AS THE ADDRESS OF OPERATOR

    cout<<"\nTHE VALUE OF a IS "<<a;
    cout<<"\nTHE VALUE OF a IS "<<*b;
    cout<<"\nTHE ADDRESS OF a IS "<<&a;
    cout<<"\nTHE ADDRESS OF a IS "<<b;
    cout<<"\nTHE VALUE OF b IS "<<b;
    cout<<"\nTHE VALUE OF b IS "<<&a;

    //DEREFERENCE OPERATOR-->*

    int**c;
    c=&b;

    cout<<"\nTHE VALUE OF c IS "<<c;
    cout<<"\nTHE ADDRESS OF b IS "<<&b;
    cout<<"\nTHE ADDRESS OF b IS "<<c;

    return 0;
}