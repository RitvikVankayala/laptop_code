#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"ENTER THE VALUE OF NUMBER "<<endl;
   cin>>num;
   cout<<"\n*******MULTIPLICATION TABLE********";
   for(int i=0;i<10;i++)
   {
       int table=num*(i+1);
       cout<<"\n"<<num<<"*"<<(i+1)<<"="<<table;
   }
    return 0;
}