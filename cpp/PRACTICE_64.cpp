#include <iostream>
#include <math.h>
#include<cmath>
//helps to use trigonometric and exponential and power functions for more usage use c++reference website
//both math.h and cmath are almost same
using namespace std;
// task is to prepare 2 classes for simple calculator and other is a scientific calculator
// inherite them to make a new class named hybrid calculator by taking inputs from user
// with atleast 4 scientific calculator function

class simple_calculator
{
protected:
    int a;
    int b;

public:
    void setdata()
    {
        cout << "ENTER THE VALUE OF THE VARIABLE a " << endl;
        cin >> a;
        cout << "ENTER THE VALUE OF THE VARIABLE b " << endl;
        cin >> b;
    }
    void sum_numbers();
    void difference_numbers();
    void multiply_numbers();
    void divide_numbers();
    void final()
    {

        sum_numbers();
        difference_numbers();
        multiply_numbers();
        divide_numbers();
    }
};
void simple_calculator::sum_numbers()
{
    cout << "THE SUM OF THE TWO VARIABLES IS " << a + b << endl;
}
void simple_calculator::difference_numbers()
{
    cout << "THE DIFFERENCE OF THE TWO VARIABLES IS " << a - b << endl;
}
void simple_calculator::multiply_numbers()
{
    cout << "THE MULTIPLICATION OF THE TWO VARIABLES IS " << a * b << endl;
}
void simple_calculator::divide_numbers()
{
    cout << "THE DIVIDE OF THE TWO VARIABLES IS " << float(a / b) << endl;
}
class scentific_calculator
{
protected:
    int d;
    int e;

public:
    void fixdata()
    {
        cout << "ENTER THE VALUE OF THE VARIABLE d " << endl;
        cin >> d;

        cout << "ENTER THE VALUE OF THE VARIABLE e " << endl;
        cin >> e;
    }
    void square_number();
    void squareroot_number();
    void remainder_number();

    void finalnum()
    {
        square_number();
        squareroot_number();
        remainder_number();
    }
};
void scentific_calculator::square_number()
{
    cout << "THE SQUARE OF THE VARIABLE d IS " << pow(d, 2) << endl;
    cout << "THE SQUARE OF THE VARIABLE e IS " << pow(e, 2) << endl;
}
void scentific_calculator::squareroot_number()
{
    cout << "THE SQUARE ROOT OF THE VARIABLE d IS " << sqrt(d) << endl;
    cout << "THE SQUARE ROOT OF THE VARIABLE e IS " << sqrt(e) << endl;
}
void scentific_calculator::remainder_number()
{
    cout << "THE REMAINDER WHEN d IS DIVIDED BY e " << d % e << endl;
}
class hybrid_calculator : public simple_calculator, public scentific_calculator
{
public:
    void process()
    {
        final();
        finalnum();
    }
};
int main()
{
    hybrid_calculator cal;
    cal.setdata();
    cal.fixdata();
    cal.process();

    return 0;
}