#include <iostream>
using namespace std;
int c = 90; // it is global can be used in any scope
int main()
{
    {
        int d = 0; // it is only used in this scope
    }

    return 0;
}