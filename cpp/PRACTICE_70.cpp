#include <iostream>
using namespace std;

// usage of the initialization in the constructor
/*common syntax for the initialisation list
construtor(arguments):a(arguments),b(arguments){
    code
}
*/
// case:1
// general(int i,int j):b(a+j),a(i)
// case 2:-->executed
//  general(int i,int j):a(i),b(j){
//      cout<<"THE VALUE OF THE VARIABLE a IS "<<a<<endl;
//      cout<<"THE VALUE OF THE VARIABLE b IS "<<b<<endl;
//  }
// case 3:
//-->there will be an error because in the declaration first a is execited so on execution it donot have any value of the b so a garbage value is produced
//  general(int i,int j):a(i+b),b(i){
//      cout<<"THE VALUE OF THE VARIABLE a IS "<<a<<endl;
//     cout<<"THE VALUE OF THE VARIABLE b IS "<<b<<endl;
//  }
class general
{
    int a;
    int b;
    // here order matters for the execution in the initialilation list
public:
    general(int i, int j) : a(i), b(a + 6)
    {
        cout << "THE CONSTRUCTOR HAS BEEN SUCCESSFULLY COMPLETED" << endl;
        cout << "THE VALUE OF THE VARIABLE a IS " << a << endl;
        cout << "THE VALUE OF THE VARIABLE b IS " << b << endl;
    }
};
int main()
{
    general g(8, 9);

    return 0;
}