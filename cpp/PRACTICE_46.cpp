#include<iostream>
using namespace std;

//usage of the friend functions in the classes
//friend functon can accept the private members of the class by writting the required function in friend function

class complex{
    int a;
    int b;
    //friend complex sumdata(complex i1,complex i2);-->can be written at any where
    public:
    friend complex sumdata(complex i1,complex i2);
    //it can be added at both public or private at required position we needed it can be at any where
    void setdata(int x,int y){
        a=x;
        b=y;    
    }
    void printdata(){
        cout<<"THE COMPLEX NUMBER IS "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex sumdata(complex i1,complex i2){
    complex i3;
    i3.setdata((i1.a+i2.a),(i1.b+i2.b));

    //if this function is not a friend function then it cannot now about the numbers a and b
    //if it is added in the freiend function then it can access the private information from complex class
    return i3;
}
int main(){

    complex c1,c2;

    c1.setdata(4,6);
    c1.printdata();

    c2.setdata(7,12);
    c2.printdata();

    complex variable;
    variable=sumdata(c1,c2);
    variable.printdata();

    //complex c;
    //c.sumdata();-->it should not be written like this

    
    return 0;
}