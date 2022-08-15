#include<iostream>
using namespace std;
int main(){
    //writing complete array using for loop

     int arr[]={12,13,14,15};

    for(int i=0;i<4;i++){

        cout<<"THE VALUE OF THE "<<(i+1)<<"th TERM IN THE ARRAY IS "<<arr[i]<<endl;
    }
    return 0;
}