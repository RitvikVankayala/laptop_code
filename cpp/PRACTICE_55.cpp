#include<iostream>
using namespace std;
//constructor default arguments

class point{
    int x;
    int y;
    int z;

    public:
    point(int a,int b=4,int c=8){
        x=a;
        y=b;
        z=c;
    }
     void displaydata(){
        cout<<"THE COORDINATES OF THE POINT IS ("<<x<<","<<y<<","<<z<<")"<<endl;
    }

};
int main(){

    //if nothing is used in the arguments parts then then the default arguments are passed

    point p1(4);
    point p2(6,7);
    point p3(2,3,4);

    p1.displaydata();
    p2.displaydata();
    p3.displaydata();
    
    return 0;
}