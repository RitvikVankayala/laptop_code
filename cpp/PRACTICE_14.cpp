#include<iostream>
using namespace std;

int a=10;

int main()
{
    int a=90;
    cout<<"THE VALUE OF A WITHOUT SCOPE RESOLUTION OPERATOR IS "<<a;
      cout<<"\nTHE VALUE OF A WITH SCOPE RESOLUTION OPERATOR IS "<<::a;

      //:: THIS IS CALLED AS SCOPE RESOLUTION OPERETOR
      //IT CONVERTS A VARIABLE FROM LOCAL TO GLOBAL VARIABLE

    return 0;
}