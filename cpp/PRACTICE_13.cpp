#include<iostream>
#include<iomanip> //HELPS TO ADD SETW()
using namespace std;

int main()
{
    int a=89;
    int b=999999;
    int c=1039;

    cout<<"\nTHE VALUE WITH SETW :"<<setw(6)<<a;
    cout<<"\nTHE VALUE WITH SETW :"<<setw(6)<<b;
    cout<<"\nTHE VALUE WITH SETW :"<<setw(6)<<c;

    cout<<"\nTHE VALUE WITHOUT SETW :"<<a;
    cout<<"\nTHE VALUE WITHOUT SETW :"<<b;
    cout<<"\nTHE VALUE WITHOUT SETW :"<<c;

    return 0;

}