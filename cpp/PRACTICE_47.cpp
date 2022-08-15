#include <iostream>
using namespace std;

// usage of the private values in the other class not from the same class
// using friend function

class complex; //-->forward declaration that the class of the name complex is already present

class calculate
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }
    
    int sum_of_realpartcomplex(complex c1,complex c2);
    int sum_of_complexpartcomplex(complex c1,complex c2);
    //the function should only written in this way or
    // else an error is showed because the complex class is still not declared yet
    // so we should declare in this way
};
class complex
{
    int a;
    int b;
   // friend int calculate::sum_of_realpartcomplex(complex c1,complex c2);
  //friend int calculate::sum_of_complexpartcomplex(complex c1,complex c2);
  //THIS IS INDIVIDUAL DECLARATION

  //ALTENATIVE FOR MAKING A CLASS FULL OF THE FRIENDS
  friend class calculate;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << "THE COMPLEX NUMBER IS " << a << "+" << b << "i" << endl;
    }
};

int calculate :: sum_of_realpartcomplex(complex c1,complex c2){

    return (c1.a+c2.a);
}

int calculate :: sum_of_complexpartcomplex(complex c1,complex c2){

    return (c1.b+c2.b);
}



int main(){

    complex d,e;

    d.setdata(5,6);
    e.setdata(6,7);

    calculate sumreal;
    int sol=sumreal.sum_of_realpartcomplex(d,e);

    cout<<"THE SUM OF THE REAL VALUE OF THE COMPLEX NUMBERS IS "<<sol<<endl;

    calculate sumcomplex;
    int ans=sumcomplex.sum_of_complexpartcomplex(d,e);

    cout<<"THE SUM OF THE COMPLEX VALUE OF THE COMPLEX NUMBERS IS "<<ans<<endl;


    return 0;
}