#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
// programme to read and write in the same code

int main()
{
    ofstream in("sample_3.txt");
    string s;

    cin >> s;
    cout << s;
    in << s;    // for writing the stream
    in.close(); //-->helps to stop the connection between the programme and the txt file

    ifstream out("sample_3.txt");
    string st;
    out >> st;
    cout << st;
    out.close(); //-->helps to stop the connection between the programme and the txt file

    return 0;
}