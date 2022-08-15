#include<iostream>
using namespace std;
#include<math.h>

//learning the function overloading same name with different number of arguments

int area(int l,int b){

    return l*b;
}

int area(int a){

    return pow(a,2);

}

int main(){
    
    int l;
    cout<<"ENTER THE VALUE OF LENGTH OF THE RECTANGLE\n ";
    cin>>l;

    int b;
    cout<<"ENTER THE VALUE OF BREADTH OF THE RECTANGLE\n ";
    cin>>b;

    int a;
    cout<<"ENTER THE VALUE OF SIDE OF THE SQUARE\n ";
    cin>>a;


    cout<<"THE AREA OF THE RECTANGLE IS "<<area(l,b)<<endl;
    cout<<"THE AREA OF THE SQUARE IS "<<area(a)<<endl;

    return 0;
}