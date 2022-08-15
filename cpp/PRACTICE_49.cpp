#include<iostream>
using namespace std;

//using friend functions for swaping the private data of the two different classes
class b;

class a{
    int red;
    public:
    void setdata(int green){
        red=green;
    }
    friend void swap_rule(a &x,b &y);

    void displaydata(){
        cout<<"THE VALUE OF RED IS "<<red<<endl;
    }
};

class b{
    int pink;
    public:
    void getdata(int white){
        pink=white;
    }
    friend void swap_rule(a &x,b &y);

    void displaydata2(){
        cout<<"THE VALUE OF pink IS "<<pink<<endl;
    }

};

void swap_rule(a &x,b &y){
    int temp;
    temp = x.red;
    x.red = y.pink;
    y.pink=temp;



}
int main(){

    a tom;
    b kim;

    tom.setdata(7);
    kim.getdata(76);

    //before swap

    tom.displaydata();
    kim.displaydata2();

    swap_rule(tom,kim);

    //after swap

    tom.displaydata();
    kim.displaydata2();


    
    return 0;
}