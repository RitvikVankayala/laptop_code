#include<iostream>
using namespace std;

//continue is used to skip that variable

int main(){
    for(int i=0;i<20;i++){
        if(i==10){
            continue;
        }
        cout<<"THE VALUE OF i IS "<<i<<endl;
    }
    return 0;
}