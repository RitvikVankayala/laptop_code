#include<iostream>
using namespace std;

//usage of the protected class in the derived class
//proeccted class is a special type of the class used to inherite the private members of the base class

class base{
    protected:
    int a;
    public:
    int b;
};
class derived :protected base{
    public:
    
    void fixdata(){          
        a=12;
        b=45;
    }
    void display();
};

void derived::display(){
    cout<<"THE VALUE OF THE a IS "<<a<<endl;
    cout<<"THE VALUE OF THE b IS "<<b<<endl;
}

//protected derived class the private will not be accessible and the public remains public and protected class will be remain protected
//protected derived public function is protected   

int main(){
    base b;
    derived d;
     
     d.fixdata();
     d.display();
    
    return 0;

}