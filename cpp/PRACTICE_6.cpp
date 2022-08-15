#include<iostream>
//iostream is a header file
//one is system header file other is programmer header file
using namespace std;

//#include"this.h" -->THIS IS AN PROGRAMMER HEADER FILE IT WILL SHOW ERROR IF THE FILE IS NOT PRESENT IN THE FILE OF THE DIRECTORY

int main(){
    int a=5;
    int b=10;

  cout<<"operators in c++\n";
  cout<<"operators in c++"<<endl;
  //both \n and <<endl is ised as same for creating a new line
  //THE FOLLOWING ARE ARITHEMATIC OPERATORS
  cout<<"THE SUM OF A AND B IS :"<<a+b; 
    cout<<"\n THE DIFFERENCE OF A AND B IS :"<<a-b; 
      cout<<"\n THE PRODUCT OF A AND B IS :"<<a*b; 
        cout<<"\n THE DIVISION OF A AND B IS :"<<a/b; 
          cout<<"\n THE REMAINDER WHEN A IS DIVIDED BY B IS :"<<a%b;
           cout<<"\n THE VALUE OF A++ IS "<<a++;
             cout<<"\n THE VALUE OF A++ IS "<<++a;
            
    return 0;
}
