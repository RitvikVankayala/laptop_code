#include<iostream>
using namespace std;
 
 //another way of the call by reference

 int &reference(int &a,int &b);

int main(){
    
    int x=9;
    int y=8;

    cout<<"TELL ME THE VALUE OF X "<<x<<endl;

     reference(x,y);

    cout<<"TELL ME THE VALUE OF X "<<x<<endl;

    reference(x,y)=123;

    cout<<"TELL ME THE VALUE OF X "<<x<<endl;

    return 0;
}

int &reference(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
    return a;
}

