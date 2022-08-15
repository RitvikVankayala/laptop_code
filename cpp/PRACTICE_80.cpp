#include <iostream>
#include <fstream>
using namespace std;

// introduction to reading and writing files
/*the usefil classes for working with files in C++ are
    1->fstreambase
    2->ifstream -->derived from f streambase
    3->ofstream -->-->derived from f streambase

in order work with the files in the c++ you will have to open primarily there are two ways to open a file
    1->using the constructor
    2->using the member function open() of the class
*/
int main()
{
    string st = "RITVIK VANKAYALA";
    // opening file using constructor and writing in it
    ofstream print("sample_1.txt");
    print << st;
    // we can keep any name not only print any desired name
    return 0;
}