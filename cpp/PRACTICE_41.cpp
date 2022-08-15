#include <iostream>
#include <string> //for using the shortcuts of the string
using namespace std;

// NESTING OF THE MEMBER FUNCTION IS NOTHING BUT CALLING ONE FUNCTION FROM THE OTHER FUNCTION

class binary
{

private:
    string s;
    void verify();
    //-->since it is private it can only be accessed by the class function but not by the main functions

public:
    void read();
    void complement();
    void display();
};

void binary ::read()
{
    
    cout<<"ENTER THE VALUE OF THE STRING OR THE BINARY CODE "<<endl;
    cin>>s;
}

void binary ::verify(){

    for(int i=0;i<s.length();i++){

        if(s.at(i)!='0'  && s.at(i)!='1'){

            cout<<"THE GIVEN STRING OR THE BINARY CODE IS NOT BINARY"<<endl;
            exit(0);
        }
    }
}

void binary ::complement(){
    verify();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary ::display(){
    for(int i=0;i<s.length();i++){

        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
  binary b;
  b.read();
  //b.verify(); we cannot access from here as it is private
  b.complement();
  b.display();

    return 0;
}