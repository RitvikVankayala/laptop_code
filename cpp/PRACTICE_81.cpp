#include <iostream>
#include <fstream>
using namespace std;

// programme to read a file
// opening a file using the consructor and reading it

int main()
{
    string st;
    string st2;
    ifstream scan("sample_2.txt");
    // scan >> st;-->if we use like this we get only first word spaces and the line are not printed
    // for that we use getline function
    getline(scan, st); // it prints a single line
    getline(scan, st2);
    cout << st << endl;
    cout << st2;
    return 0;
}