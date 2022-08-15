#include<iostream>
using namespace std;

//we can write functions in classes but it is not possible in the  structures


class employee{
    private :
        int a,b,c;

    public :
       int d,e;
       void setdata(int a1,int b1,int c1);
       void getdata(){
           cout<<"THE VALUE OF a is "<<a<<endl;
           cout<<"THE VALUE OF b is "<<b<<endl;
           cout<<"THE VALUE OF c is "<<c<<endl;
           cout<<"THE VALUE OF d is "<<d<<endl;
           cout<<"THE VALUE OF e is "<<e<<endl;
       }
};
void employee::setdata(int a1,int b1,int c1){
         a=a1;
         b=b1;
         c=c1;

}
int main(){

    employee johm;
    johm.d=90;
    johm.e=87;
    johm.setdata(23,4,67);
    johm.getdata();
   // johm.a is not accessable quantity as it is private 

    
    return 0;
}