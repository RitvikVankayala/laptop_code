#include <iostream>
#include <string.h>
using namespace std;
// usage of the abstract base class and the pure virtual function
// abstract base class is a base class with atleast one purevirtual function;
// pure virtual function is a virtual function thats aims to be redefined in its inherited class
// its is written to rewrite in its inherited classes
// if the rewritting not taken place its displays an error
// if any of the display in the inherited functions is commented then it throws an error
class video_tut
{
protected:
    float rating;
    string title;

public:
    video_tut(string s, float f)
    {
        rating = f;
        title = s;
    }
    virtual void display() = 0; //-->this is called as the do nothing function and common syntax for the purevirtual function
};
class video_con : public video_tut
{
    float video_length;

public:
    video_con(string s, float f1, float f2) : video_tut(s, f1)
    {
        video_length = f2;
    }
    void display()
    {
        cout << "THE RATING OF THE VIDEO CONCEPT IS " << rating << endl;
        cout << "THE VIDEO LENGTH OF THE LECTURE IS " << video_length << endl;
        cout << "THE TITLE OF THE VIDEO CONCEPT IS " << title << endl;
    }
};
class web_con : public video_tut
{
    int words;

public:
    web_con(string s, float f1, int f2) : video_tut(s, f1)
    {
        words = f2;
    }
    void display()
    {
        cout << "THE RATING OF THE VIDEO CONCEPT IS " << rating << endl;
        cout << "THE NUMBER OF THE WORDS IN THE WEB TUTUORIAL " << words << endl;
        cout << "THE TITLE OF THE VIDEO CONCEPT IS " << title << endl;
    }
};
int main()
{

    string title;
    float rating, video_length;
    int words;

    title = "CPP TUTORIALS";
    video_length = 345.5;
    rating = 5;
    video_con v1(title, rating, video_length);
    ;

    title = "CODECHEIF";
    words = 4567;
    rating = 5;
    web_con v2(title, rating, words);
    ;

    video_tut *ptr[2];
    ptr[0] = &v1;
    ptr[1] = &v2;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}