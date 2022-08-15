#include<iostream>
using namespace std;

//BREAK IS USED TO EXIT OUT OF THE LOOP

int main(){
    
    for(int i=0;i<20;i++){
        if(i==10){
            break;
        }
        cout<<"THE VALUE OF i IS "<<i<<endl;
    }
    return 0;
}