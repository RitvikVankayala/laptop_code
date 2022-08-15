#include <iostream>
using namespace std;
// usage of the function template in the c++
// we will write the two templates in the programme

template <class t>

void swapp(t &x, t &y) //-->swap is a function that is already present in the namespace std
{

    t temp;
    temp = x;
    x = y;
    y = temp;
}

template <class t1, class t2>
float function_average(t1 a, t2 b)
{
    float average;
    average = (a + b) / 2.0;
    // we return float so we use the 2 as 2.0
    return average;
}

int main()
{
    float a;
    a = function_average(5, 5.5);
    cout << a;

    int x = 7;
    int y = 9;
    swapp(x, y);
    cout << x << endl
         << y << endl;

    return 0;
}