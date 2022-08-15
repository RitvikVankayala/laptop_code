#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    // binary_search(a.begin(),a.end(),element_to_be_searched);
    // vector<int> a;
    // reverse(it1,it2)
    // rotate(v.begin(), v.begin + upto,v.end())
    // cout<<upper_bound(a.begin(),a.end(),elements_uppersbound)
    // cout<<lower_bound(a.begin(),a.end(),elements_lowerbound)
    // lower bound will return the iterator greater than or equals to the value given
    // upper bound will return iterator grater than the value
    // rotate v.begin(),v.begin()+2,v.end() will rotate at index v.begin()+2 and the vector will now start from v.begin()+2
    // quick heap and inertion sort-->will take place at intro sort i.e sort function
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(44);
    cout << "FINDING 9-->" << binary_search(v.begin(), v.end(), 9) << endl;
    cout << "LOWER BOUND --> " << lower_bound(v.begin(), v.end(), 9) - v.begin() << endl;
    cout << "UPPER BOUND --> " << upper_bound(v.begin(), v.end(), 3) - v.begin();

    int a = 9;
    int b = 99;
    cout << "max--> " << max(a, b) << endl;
    cout << "min--> " << min(a, b) << endl;

    swap(a, b);
    cout << "a-->" << a << endl;

    string r = "RITVIK";
    reverse(r.begin(), r.end());
    for (char i : r)
    {
        cout << i;
    }
    cout << endl;
    cout << "string-->" << r << endl;

    rotate(v.begin(), v.begin() + 2, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << *min_element(v.begin(), v.end()) << endl; // helps to find min element in the vector or the array
    cout << *max_element(v.begin(), v.end()) << endl; // helps to find max element in the vector or the array

    cout << accumulate(v.begin(), v.end(), 0) << endl; // use numeric header for the total sum
    cout << count(v.begin(), v.end(), 44);             // helps to find the number of times a particular number that is 44 is there in an array
    return 0;
}