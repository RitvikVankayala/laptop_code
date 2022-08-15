#include <iostream>
using namespace std;

// shot use of the array in the classes

class company
{
    int id;
    long double salary;

public:
    void getdata()
    {
        salary = 1000000000;
        cout << "ENTER THE id NUMBER " << endl;
        cin >> id;
    }
    void printdata()
    {
        cout << "THE ID NUMBER IS " << id << endl;
    }
};
int main()
{
    company c[4];
    for (int i = 0; i < 4; i++)
    {
        c[i].getdata();
        c[i].printdata();
    }

    return 0;
}