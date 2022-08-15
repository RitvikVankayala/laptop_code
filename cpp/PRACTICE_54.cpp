#include<iostream>
using namespace std;
//constructor over loading
//based on the arguments the constructors or used 

class point{
    int x;
    int y;
    public:
    
    point(int s){
        x=s;
        y=3;
    }
    point(int c1,int c2){
        x=c1;
        y=c2;
    }
    point(){
        x=0;
        y=0;
    }
    void displaydata(){
        cout<<"THE COORDINATES OF THE POINT IS ("<<x<<","<<y<<")"<<endl;
    }
    
};

int main(){

    point p1(4);
    p1.displaydata();
    
    point p2(7,8);
    p2.displaydata();

    point p3;
    p3.displaydata();
    
    return 0;
}