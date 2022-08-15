#include <iostream>
using namespace std;
// MY FIRST TEMPLATE IN THE C++
// TEMPLATES ARE USED TO SUSTAIN REAPETED USES OF THE CLASS IN THE DATA TYPES
// HERE VECTOR IS NOT TEMPLATE VECTOR IT IS DECLARED AS A CLASS
template <class t>
class vector
{
public:
    t *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new int[size]; // helps to dynamically create a space for an array of the size required
    }
    t dotproduct(vector v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->arr[i] * (v.arr[i]);
        }
        return d;
    }
};
int main()
{
    vector<int> v1(3);
    v1.arr[0] = 2;
    v1.arr[1] = 1;
    v1.arr[2] = 3;
    vector<int> v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 1;
    v2.arr[2] = 3;

    int a = v1.dotproduct(v2);
    cout << a;

    // THE DATATYPE CAN BE CHANGED WHEN THE VECTOR IS BEING DECLARED <DATATYPE>
    return 0;
}