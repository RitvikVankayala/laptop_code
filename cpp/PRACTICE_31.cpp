#include<iostream>
using namespace std;

//usage of the function and also an example of the call by value
 
 int sum(int a,int b);//-->function prototype

int main(){
    
    int n1,n2;

    cout<<"\nENTER THE VALUE OF n1 ";
    cin>>n1;

    cout<<"\nENTER THE VALUE OF n2 ";
    cin>>n2;

    //n1 and n2 are the actual parameters

    cout<<"\nTHE SUM OF n1 AND n2 IS "<<sum(n1,n2);//-->function call

    return 0;
}

int sum(int a,int b){   //-->function declaration
    int c=a+b;
    //a and b are formal parameters
    return c;
}