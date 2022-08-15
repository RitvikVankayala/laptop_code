#include<iostream>
using namespace std;

//usage of the recursion by calculating factorial of a number taking an input from the user

int factorial(int n){

    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    
    int num;
    cout<<"ENTER THE VALUE OF THE NUMBER \n";
    cin>>num;

    int value=factorial(num);

    cout<<"THE FACTORIAL OF THE NUMBER "<<num<<" IS "<<value<<endl;
    
    return 0;
}