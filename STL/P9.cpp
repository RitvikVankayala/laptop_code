#include <iostream>
#include <map>
using namespace std;
int main()
{
    // insert-count-erase(element)-find(element)
    //  only unique elements and one key points to only one element
    //  one key will not point to more keys
    //  only sorted output will be printed
    //  in case of unordered map the elements will be tracked in random way
    //  all operations erase and find will occur at O(logn)
    //  unordered map O(1)
    map<int, string> s;
    s[1] = "PHANI";
    s[13] = "RITVIK";
    s[2] = "VANKAYALA";
    s[90] = "*****";
    for (auto i : s)
    {
        cout << i.first << endl;
    }
    cout << "******" << endl;
    s.insert({6, "BRAHMA"});
    for (auto i : s)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "******" << endl;

    cout << "finding 13 -->" << s.count(13) << endl;
    s.erase(6);
    for (auto i : s)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "******" << endl;
    auto it = s.find(2);
    for (auto i = it; i != s.end(); i++)
    {
        cout << (*i).second << endl;
    }
    cout << s.empty();
    return 0;
}