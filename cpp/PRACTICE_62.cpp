#include <iostream>
using namespace std;
// usage of the multilevel inheritance in the classess
class student
{
protected:
    int idnumber;

public:
    void setdata(int a);
    void getdata();
};
void student::setdata(int a)
{
    idnumber = a;
}
void student::getdata()
{
    cout << "THE ID NUMBER OF THE STUDENT IS " << idnumber << endl;
}

class marks : public student
{
protected:
    float maths;
    float physics;
    float chemistry;

public:
    void setmarks(float f1, float f2, float f3);
    void getmarks();
};
void marks::setmarks(float f1, float f2, float f3)
{
    maths = f1;
    physics = f2;
    chemistry = f3;
}

void marks::getmarks()
{
    cout << "THE MARKS THAT ARE OBTAINED IN THE SUBJECT MATHS IS GIVEN BY " << maths << endl;
    cout << "THE MARKS THAT ARE OBTAINED IN THE SUBJECT PHYSICS IS GIVEN BY " << physics << endl;
    cout << "THE MARKS THAT ARE OBTAINED IN THE SUBJECT CHEMISTRY IS GIVEN BY " << chemistry << endl;
}
class percentage : public marks
{
    float percentage;

public:
    void processdata();
};
void percentage::processdata()
{
    percentage = float(maths + physics + chemistry) / 3;
    cout << "THE PERCENTAGE OF THE MARKS OBTAINED IN THE GROUP MPC IS " <<percentage<<"%"<<endl;
}
int main()
{
    percentage p;
    p.setdata(100);
    p.getdata();
    p.setmarks(99, 98, 97.5);
    p.getmarks();
    p.processdata();
    return 0;
}