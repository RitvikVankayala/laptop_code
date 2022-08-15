#include<iostream>
using namespace std;

//usage of array
//array-->continuous memory allocated

int main(){

    int age[]={12,13,14,15};
     
     cout<<age[0]<<endl;
     cout<<age[1]<<endl;

     age[2]=45;
     //redeclaration of array changes the value of array

     cout<<age[2]<<endl;
     cout<<age[3]<<endl;

    
    return 0;
}