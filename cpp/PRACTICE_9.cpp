#include <iostream>
using namespace std;

int main()
{

    // DIFFERENCE BETWEEN FLOAT AND LONG DOUBLE
    float a = 45.98F;
    long double b = 45.98L;

    // IF NOTHING IS MENTIONED THEN TAKE THE FLOAT VALUE AS DOUBLE
    // IF F OR f IS MENTIONED THEN ITS FLOAT
    // IF L OR l IS MENTIONED THEN ITS LONG DOUBLE

    cout << "THE VALUE OF a :" << a;
    cout << "\nTHE VALUE OF b :" << b;

    cout << "\n*****************";

    cout << "\nTHE SIZE OF 45.98 IS " << sizeof(45.98);
    cout << "\nTHE SIZE OF 45.98F IS " << sizeof(45.98F);
    cout << "\nTHE SIZE OF 45.98f IS " << sizeof(45.98f);
    cout << "\nTHE SIZE OF 45.98L IS " << sizeof(45.98L);
    cout << "\nTHE SIZE OF 45.98l IS " << sizeof(45.98l);

    // DOUBLE-8,FLOAT-4,LONG DOUBLE-12

    return 0;
}