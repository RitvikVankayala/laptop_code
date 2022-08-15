#include<iostream>
using namespace std;
int main()
{
    //TO FIX A VARIABLE AS CONSTANT
    //THEORY CONSTANTS

    const int a=9;
    cout<<"\n"<<a;

    //a=5; HERE a IS CONSTANT NOT A VARIABLE AS IT IS FIXED AS CONSTANT

    int b=9;
    cout<<"\n"<<b;
    b=10;
    cout<<"\n"<<b;

    //HERE B IS RE ALLOCATED 
    
    return 0;

}