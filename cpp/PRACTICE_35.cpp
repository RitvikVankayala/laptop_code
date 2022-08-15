#include<iostream>
using namespace std;

//usage of inline functions and constant parameter and static variable
//inline is used for the optimization of the code
//it should be used only for the simple function not for recursion and complex functions
//used when same function is repeated

inline int turn(int a,int b){
            int c;
        return c=a*b;
}

int main(){
     int a;
     int b;
     cout<<"\nENTER THE VALUE OF THE INPUT";
     cin>>a;
     cout<<"\nENTER THE VALUE OF THE INPUT";
     cin>>b;

     cout<<"THE PRODUCT OF A AND B IS "<<turn(a,b)<<endl;
     cout<<"THE PRODUCT OF A AND B IS "<<turn(a,b)<<endl;
     cout<<"THE PRODUCT OF A AND B IS "<<turn(a,b)<<endl;

    return 0;
}