#include<iostream>
using namespace std;
int main(){
    //new address = usage address + i*(sizeof(data type))
    //pointer arthematic

    int arr[]={12,13,14,15};
    int* p=arr;

    

        cout<<"THE VALUE OF *p IS  "<<*p<<endl;
        cout<<"THE VALUE OF *(p+1) IS  "<<*(p+1)<<endl;
        cout<<"THE VALUE OF *(p+2) IS  "<<*(p+2)<<endl;
        cout<<"THE VALUE OF *(p+3) IS  "<<*(p+3)<<endl;

    
    return 0;
}