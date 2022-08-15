#include <iostream>
using namespace std;
// another example for the derived base class
// student-->study
// student-->sports
// study-->result
// study-->result
class student
{
protected:
    int rollnumber;

public:
    void setnumber(int a)
    {
        rollnumber = a;
    }
    void displaynumber()
    {
        cout << "THE ROLLNUMBER OF THE STUDENT IS " << rollnumber << endl;
    }
};
class study : virtual public student
{
protected:
    float maths;
    float physics;
    float chemistry;

public:
    void setmarks(float b, float c, float d)
    {
        maths = b;
        physics = c;
        chemistry = d;
    }
    void printmarks()
    {
        cout << "THE MARKS THAT ARE OBTAINED BY STUDENT IS " << endl
             << "MATHS " << maths
             << " PHYSICS " << physics
             << " CHEMISTRY " << chemistry;
    }
};
class sport : virtual public student
{
protected:
    int score;

public:
    void setscore(int sc)
    {
        score = sc;
    }
    void printscore()
    {
        cout << "THE SCORE OF THE STUDENT IS " << score << endl;
    }
};
class result : public study, public sport
{
private:
    float total;

public:
    void display()
    {
        cout << "THE TOTAL MARKS IS " << (maths + physics + chemistry + score) << endl;
        displaynumber();
        printmarks();
        printscore();
    }
};
int main()
{
    result r;
    r.setnumber(8);
    r.setmarks(99.9, 99.9, 99.9);
    r.setscore(98.2);
    r.display();
    return 0;
}