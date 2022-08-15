#include<iostream>
using namespace std;

//usage of call by reference

void swap(int *a,int *b);
void noswap(int a,int b);

int main(){
    
    int x=9;
    int y=8;

    cout<<"THE VALUE OF x AND y BEFORE SWAP IS "<<x<<","<<y<<endl;

    noswap(x,y);
    
    cout<<"THE VALUE OF x AND y AFTER NO SWAP IS "<<x<<","<<y<<endl;

    swap(&x,&y);

    cout<<"THE VALUE OF x AND y AFTER SWAP IS "<<x<<","<<y<<endl;

    return 0;
}

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void noswap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
}

