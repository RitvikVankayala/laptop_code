#include<iostream>
using namespace std;
//another example other than the complex number

class point{
    int x;
    int y;
    public:
    point(int c1,int c2){
        x=c1;
        y=c2;
    }
    void displaydata(){
        cout<<"THE COORDINATES OF THE POINTS IS ("<<x<<","<<y<<")"<<endl;
    }
};
int main(){

    point c(6,1);
    point d(9,10);

    c.displaydata();
    d.displaydata();
    
    return 0;
}