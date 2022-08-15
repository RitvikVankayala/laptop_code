#include<iostream>
using namespace std;

//else if conditionf usage

int main()
{
    int marks;
    cout<<"ENTER YOUR MARKS";
    cin>>marks;

    if(marks<=90){
        cout<<"YOU ARE FROM USA\n";
    }
    else if(marks>90 && marks<100){
        cout<<"YOU ARE FROM UK\n";
    }
    else if(marks==100){
        cout<<"YOU ARE FROM INDIA\n"; 
    }
    else{
        cout<<"REENTER YOUR MARKS\n";
    }
    return 0;
}