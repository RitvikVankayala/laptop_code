#include<iostream>
using namespace std;

//usage of structure in the programming 

struct employee{
     int idnum;
     float salary;
     char initial;
};
int main(){
    struct employee e1;
    e1.idnum=34;
    e1.salary=90;//-->lakhs per month
    e1.initial='v';

    cout<<e1.idnum<<endl;
    cout<<e1.salary<<endl;
    cout<<e1.initial<<endl;
    return 0;
}