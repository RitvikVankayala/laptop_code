#include <iostream>
#include <map>
#include <string>
using namespace std;
// usage of the maps in the stl(standard template library )
// branch is an associated array
// usage of the begin(),end(),insert(),size()
int main()
{
    map<string, int> marks_map;
    marks_map["RITVIK"] = 100;
    marks_map["PHANI"] = 98;

    map<string, int>::iterator iter;
    marks_map.insert({{"NAGA", 99}, {"BRAHMA", 97}});
    // the map will also be sorted

    for (iter = marks_map.begin(); iter != marks_map.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
        // this is the formal syntax for writing the map printing
        //(*iter).first for pointing towards the string
        //(*iter).second for pointing towards the number(int)
    }

    cout << marks_map.size() << endl;     // size of the map
    cout << marks_map.max_size() << endl; // maximum entry number of the elements
    cout << marks_map.empty() << endl;    // empty or not not means 0,empty means 1

    return 0;
}