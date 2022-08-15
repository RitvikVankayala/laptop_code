#include<iostream>
using namespace std;

//usage of the static variable 

int product(int a,int b){
      
      //if any one of a and b are fixed it should be written in extreme right
      //it can be over written if nothing is mentioned constant value will be used
      
    static int c=0;//-->it will be run at only one time
    c=c+1;
    return c*a+b;
}
int main(){
    
    int a;
    cout<<"ENTER THE VALUE OF INPUT\n";
    cin>>a;

    int b;
    cout<<"ENTER THE VALUE OF INPUT\n";
    cin>>b;

    cout<<"THE FINAL RETURN VALUE WILL BE "<<product(a,b)<<endl;
    cout<<"THE FINAL RETURN VALUE WILL BE "<<product(a,b)<<endl;
    cout<<"THE FINAL RETURN VALUE WILL BE "<<product(a,b)<<endl;
    cout<<"THE FINAL RETURN VALUE WILL BE "<<product(a,b)<<endl;

    return 0;
}