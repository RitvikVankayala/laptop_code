#include<iostream>
using namespace std;

int main()
{

  cout<<"\n***********REFERENCE VARIABLES***********";
  //USING DIFFERENT VARIABLES WE CAN HAVE SAME CONSTANT

  float a=423;
  float &b=a;

  //THE COPY OF A IS TAKEN IN THE B

  cout<<"\nTHE VALUE OF a :"<<a;
  cout<<"\nTHE VALUE OF b :"<<b;


    return 0;
}