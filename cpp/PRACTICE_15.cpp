#include<iostream>
using namespace std;

//if else statement 

int main()
{ 
    int age;
    cout<<"ENTER THE VALUE OF YOUR AGE\n";
    cin>>age;

    if(age<=18){
        cout<<"YOU CAN'T DRIVE\n";
    }
    else{
        cout<<"YOU CAN DRIVE";
    }
    return 0;
}