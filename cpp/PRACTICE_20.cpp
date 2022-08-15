#include<iostream>
using namespace std;
int main()
{

    int num;
    cout<<"ENTER THE VALUE OF num\n";
    cin>>num;
    
    //usage of do while loop
    cout<<"\n*******MULTIPLICATION TABLE*******\n";
    int i=0;

    while(i<10){
        int table=num*(i+1);
        cout<<"\n"<<num<<"*"<<(i+1)<<"="<<table<<endl;
        i++;
    }
    return 0;
}