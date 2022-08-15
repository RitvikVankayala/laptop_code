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
    do{
        int table=num*(i+1);
        cout<<"\n"<<num<<"*"<<(i+1)<<"="<<table<<endl;
        i++;

    }while(i<10);

    return 0;
}