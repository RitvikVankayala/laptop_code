#include <iostream>
#include <string>
using namespace std;
// we will learn about try and catch and throw in cpp
class printer
{
    string _name;
    int _availablepaper;

public:
    printer(string name, int paper)
    {
        _name = name;
        _availablepaper = paper;
    }
    void print(string txt)
    {
        int required_paper = txt.length() / 10; // taking as an example

        // if (required_paper > _availablepaper)
        //     throw "NO PAPER";--> out of two methods we can use any method
        if (required_paper > _availablepaper)
        {
            // throw "NO PAPER"; // we can throw any exception of any datatype
            throw 404;
            return;
        }
        cout << "printing --->" << txt << endl;
        _availablepaper -= required_paper;
    }
};
int main()
{
    printer p("DELL MODEL", 20);
    p.print("HELLO GUYS");
    try
    {
        p.print("I AM THE MEMBER OF CYBERLABS AND ROBOISM");
        p.print("I AM THE MEMBER OF CYBERLABS AND ROBOISM");
        p.print("I AM THE MEMBER OF CYBERLABS AND ROBOISM");
        p.print("I AM THE MEMBER OF CYBERLABS AND ROBOISM");
        p.print("I AM THE MEMBER OF CYBERLABS AND ROBOISM");
        // upto four lines we have enough paper after that there is no paper so in this way we will through the exception
    }
    // if char exception
    catch (const char *exception)
    {
        cout << "EXCEPTION: " << exception << endl;
    }
    // if int exception
    catch (const int h)
    {
        cout << "EXCEPTION -->" << h << endl;
    }
    // handles any time of datatype
    catch (...)
    {
        cout << "EXCEPTION HAPPENED!" << endl;
    }
    // first all catches will be excecuted and then the default catch will be excecuted
    // it should be always last
    return 0;
}
