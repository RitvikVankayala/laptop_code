#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 100000;
    int b = 100000;
    int c = a * b;
    cout << c << endl;
    // wrong number will be printed because of the overflow
    int mock = INT_MAX;
    cout << mock << endl;
    // prints the max value of the int
    // if the input is not in the range or the value is greater than the max then the overflow takes places the value will again start from min
    cout << mock + 1 << endl;
    // gives negetive value so overflow
    int f = 100000;
    int d = 100000;
    // long long int e = f * d;//it also acts as int
    long long int e = f * 1LL * d;
    // 1LL is multiplying 1 in form of long long so it will store in long long int
    cout << e << endl;
    double x = 100000;
    double y = 100000;
    double z = x * y;
    cout << z << endl;
    cout << fixed << z << endl;                    // for removing scientific notation
    cout << fixed << setprecision(0) << z << endl; // for removing decimal part
    // double and float can store very high value but on increasing the number the accracy decreases-->it is called precision overflow
    return 0;
}