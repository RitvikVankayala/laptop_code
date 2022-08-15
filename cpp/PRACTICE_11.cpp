#include<iostream>
using namespace std;

int main()
{
    cout<<"\n********TYPE CASTING********";

    int a=11;
    float b=11.11;
    
    cout<<"\nTHE VALUE OF a is "<<(float)a;
    cout<<"\nTHE VALUE OF a is "<<float(a);

    cout<<"\nTHE VALUE OF b is "<<(float)b;
    cout<<"\nTHE VALUE OF b is "<<float(b);

    cout<<"\nTHE SUM OF a AND b IS "<<a+b;
    cout<<"\nTHE SUM OF a AND b IS "<<(int)a+int(b);
    cout<<"\nTHE SUM OF a AND b IS "<<int(a)+float(b);

    return 0;
}