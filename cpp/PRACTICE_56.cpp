#include<iostream>
using namespace std;

//usage of the constructor overloading and the declaration of the constructor

class bank{
    int principle;
    int years;
    float intrest;
    float returnmoney;

    public:
    bank(){};
    //i intrest indicate the percentage not the decimal
    bank(int p,int y,int r){
        principle=p;
        years=y;
        intrest=float(r)/100;
        returnmoney=principle;
        for(int i=0;i<y;i++){
            returnmoney=returnmoney*(1+intrest);
        }
    }  
    //R represents the decimal value of the intrest
     bank(int p,int y,float R){
        principle=p;
        years=y;
        intrest=R;
        returnmoney=principle;
        for(int i=0;i<y;i++){
            returnmoney=returnmoney*(1+intrest);
        }
    }
    void displaydata(){
        cout<<"THE INITIAL  VALUE OF  THE MONEY IS "<<principle<<" .THE NO.OF YEARS OF THE INVESTMENT IS "<<years<<" .THE FINAL RETURN VALUE OF THE MONEY IS "<<returnmoney<<". AT A RATE OF THE INTREST "<<intrest<<endl;
    }  
};
int main(){

    bank b1,b2;

   int p, y;
    int r;
    float R;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    b1 = bank(p, y, r);
    b1.displaydata();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    b2 = bank(p, y, R);
    b2.displaydata();

    return 0;
}