#include<iostream>
using namespace std;

//THE LOCAL VARIABLE IS DOMINENT THEN THE GLOBAL VARIABLE 
//LOCAL VARIABLE IS THAT VARIABLE THAT IS IN RESPECTED FUNCTION

 int a=76;
 int b=5;
 void sum(){
     cout << "\n"<<a;
 }

int main(){
    int a=90;
    cout<<a;
    sum();

    return 0;

}