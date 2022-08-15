#include<iostream>
using namespace std;

//usage of the union in the programming

union moneymeasurement{

        int rupee;
        int dollor;
        int cash;
    };

int main(){
    
    //IN THE STRUCTURES THE COMPONENTS ARE SUMED UP
    //ONLY AT A TIME A SINGLE VARIABLE CAN BE USED ALL CANNOT BE DONE AT SAME TIME IT ALLOCATES 
    //MAX OF ALL THE COMPONENTS EXAMPLE INT 4 CHAR 1 FLOAT 4 HELPS TO USE LESS MEMORY AT A TIME

    union moneymeasurement m1;
    m1.rupee=90000;
    cout<<m1.rupee;

    //AT A TIME A SINGLE VARIABLE CAN BE USED IF MULTIPLE ARE USED ERROR VALUES WILL BE PRINTED

    return 0;
}