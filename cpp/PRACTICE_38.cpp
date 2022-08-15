#include<iostream>
using namespace std;

//using recursion pritn the n th term of the fibonache series
//1,1,2,3,5,8,13,21........

int fib(int n){

    if(n==1  ||  n==2){

        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    
    int num;
    cout<<"ENTER THE VALUE OF THE NUMBER \n";
    cin>>num;

    int result=fib(num);

    cout<<"THE "<<num<<"th TERM IN THE FIBONACHE SERIES IS "<<result<<endl;
    
    return 0;
}