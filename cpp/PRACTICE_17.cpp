#include<iostream>
using namespace std;

//switch case statements

int main(){

    int a;
    cout<<"ENTER THE VALUE OF a"<<endl;
    cin>>a;

    switch(a)
    {
        case 12:
        cout<<"THE VALUE OF A IS 12\n";
        break;

        case 14:
        cout<<"THE VALUE OF A IS 14"<<endl;
        break;

        case 16:
        cout<<"THE VALUE OF A IS 16"<<endl;
        break;

        default:
        cout<<"YOUR VALUE OF A IS OTHER THAN 12,14,18\n";
        break;
 }
      cout<<"THE SWITCH CASE STATEMENT IS COMPLETED";
    return 0;

}