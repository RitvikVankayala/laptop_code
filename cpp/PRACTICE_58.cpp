#include<iostream>
using namespace std;

//usage of the destructor in the programming 
//destructors are used to destroy the memory after its usage 
 
class path{
    public:
    path(){
        cout<<"ENTERING  INTO THE CONSTRUCTORS "<<endl;
    }

    ~path(){ //usage of the destructor 
         cout<<"ENTERING INTO THE DESTRUCTORS "<<endl;
    }
};
 int main(){
     cout<<"ENTER INTO THE MAIN FUNCTION "<<endl;
     cout<<"WRITING A VARIABLE OF THE TYPE PATH"<<endl;
    path p1;
    {//after this the code is executed
        cout<<"ENTERED INTO THE BLOCK"<<endl;
        cout<<"TWO VARIABLES ARE MADE OF THE TYPE PATH"<<endl;
        path p2,p3;
        cout<<"EXITING THE BLOCK"<<endl;
    }//the space is destroyed if there is no further use of the variables used in the blocks
    cout<<"COMPLETITION OF THE MAIN FUNCTION"<<endl;
    //after if there is no usage of the usage of the variables created they will be destroyed

    return 0;
}