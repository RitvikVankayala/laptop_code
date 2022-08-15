#include <iostream>
#include <string.h>
using namespace std;
// usage of the virtual function with an example and so rules for usage of the virtual function
// if any of the derived class display function is absent then the display function in the base class will be runned
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
    virtual void display() {}
};
class video_con : public video_tut
{
public:
    float video_length;
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
public:
    int words;
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
/*RULES FOR THE VIRTUAL FUNCTION
1->they cannot be staic
2->they are accessed by the object pointers
3->virtual function can also be a friend fuction
4->virtual function in the base class is not used generally kept blank
*/