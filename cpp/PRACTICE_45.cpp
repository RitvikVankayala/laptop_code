#include<iostream>
using namespace std;

//usage of the arrays in the classes with input

class complex{
    int a;
    int b;
    public:
    void setdata( int r1,int r2){
        a=r1;
        b=r2;
    }

    void newdata(complex c1,complex c2){
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }

    void printnewdata(){
        cout<<"THE SUM OF THE COMPLEX NUMBERS IS "<<a<<"+"<<"i"<<b<<endl;
    }

    void printnumber(){

        cout<<"THE COMPLEX NUMBER IS "<<a<<"+"<<"i"<<b<<endl;
    }

};
int main(){
    
    complex c,d,e,f;

    c.setdata(2,3);
    c.printnumber();

    d.setdata(4,6);
    d.printnumber();

    e.setdata(7,9);
    e.printnumber();

    f.newdata(c,d);
    f.printnewdata();


    return 0;
}