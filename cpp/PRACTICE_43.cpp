#include <iostream>
using namespace std;

// USAGE OF THE STATIC VARIABLES AND FUNCTIONS
// ONLY STATIC FUNCTIONS AND VARIABLES CAN ONLY BE CALLED IN THE SATATIC FUNCTIONS

class employee
{
    // by default if nothing is mentioned in the class whether a variable is
    // public or private then the system will consider as a private variable

    int id;
    static int count;
    // it will be shared by all cls objects
    // if static is not mentioned then a repeated value of the count will be printed

public:
    static void printfunction()
    {
        cout << "THE VALUE OF THE COUNT IS " << count << endl;
    }

    void setdata()
    {
        cout << "ENTER THE ID NUMBER " << endl;
        cin >> id;
        count++;
    }

    void getdata()
    {
        cout << "THE ID OF THE EMPLOYEE IS " << id << " AND THIS IS EMPLOYEE NUMBER " << (count) << endl;
    }
};

int employee::count;
// if i want to start the cout from 20 then at variable we should not write as
// static int count=20;
// instead we should do at int employee::count=20;
// default value is zero

int main()
{
    employee e1, e2, e3;
    // e1.id=1; canot do this because it is private cannot be accessed
    e1.setdata();
    e1.getdata();
    employee::printfunction();

    e2.setdata();
    e2.getdata();
    employee::printfunction();

    e3.setdata();
    e3.getdata();
    employee::printfunction();

    return 0;
}