#include <iostream>
#include <fstream>
using namespace std;

// how to write string with the space and the extra line??
// first write getline(cin,variable);
//  another way of the file i/o
// getline(cin,variable);
// for taking a input with space

int main()
{

    ifstream on;
    string st;
    // string st1, st3;
    on.open("sample_4.txt");
    // on >> st >> st1; -->only the first word and the second word is printed
    // cout << st << st1 << endl;

    // another way to print a line
    /*
    getline(on, st3);
    cout << st3;
    on.close();
    */
    while (on.eof() == 0) //-->eof is end of the file
    {
        getline(on, st);
        cout << st << endl;
    }
    // total things in the txt file will be printed

    string s;
    on.close();
    // cout << "ENTER THE STRING " << endl;
    // cin >> s;
    s = "this is me\n";
    ofstream off;
    off.open("sample_5.txt");
    off << s;
    off.close();

    return 0;
}
