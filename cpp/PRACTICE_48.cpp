#include<iostream>
using namespace std;

//morechlarity for the friend functions

class b;

class a{
    int red;
    public:
    void setdata(int green){
        red=green;
    }
    friend void sumdata(a c1,b c2);

};

class b{
    int pink;
    public:
    void getdata(int white){
        pink=white;
    }
    friend void sumdata(a c1,b c2);

};

void sumdata(a c1,b c2){
    cout<<"THE SUM OF THE TWO DATA OF DIFFERENT CLASSES IS "<<c1.red + c2.pink<<endl;
}

int main(){
    a o1;
    b o2;

    o1.setdata(5);
    o2.getdata(9);

    sumdata(o1,o2);

    return 0;
}