#include<iostream>
using namespace std;

int main(){
 

 int a=5;
 int b=90;

 //THE FOLLOWING ARE COMPARISION OPERATOR 

  cout<<"\nTHE EQUALS TO OPERATOR IS "<<(a==b);
  cout<<"\nTHE NOT EQUALS TO OPERATOR IS "<<(a!=b);
  cout<<"\nTHE GREATER THAN OR EQUALS TO OPERATOR IS "<<(a>=b);
  cout<<"\nTHE LESS THAN  OPERATOR IS "<<(a<b);

  //THE FOLLOWING ARE LOGICAL OPERATORS

  cout<<"\nTHE AND OPERATOR IS && "<<(a==b) && (a<b);
  cout<<"\nTHE OR OPERATOR IS || "<<(a==b) || (a<b);
  cout<<"\nTHE NAND OPERATOR IS ! "<<!((a==b) && (a<b));

  //0 represents false and 1 represents true

    return 0;

}