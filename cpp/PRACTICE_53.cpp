#include<iostream>
#include<math.h>
using namespace std;
/*create a function which takes two points objects 
and computes the distance between those points */
class point;
double distance(point a1,point a2);
class point{
    int x;
    int y;
    friend double distance(point a1,point a2);
    public:
    point(int c1,int c2){
        x=c1;
        y=c2;
    }
    void displaydata(){
        cout<<"THE COORDINATES OF THE POINTS IS ("<<x<<","<<y<<")"<<endl;
    }
};

double distance(point a1,point a2){

     double z=sqrt(((a2.x-a1.x)*(a2.x-a1.x))+((a2.y-a1.y)*(a2.y-a1.y)));
     return z;
}

int main(){

    point p1(3,0);
    point p2(0,4);

    double result=distance(p1,p2);

    cout<<"THE DISTANCE BETWEEN THE TWO POINTS IS "<<result<<endl;

    return 0;
}