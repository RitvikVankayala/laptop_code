#include <iostream>
using namespace std;
// usage of the pointers in the class
// simple class to understand the pointer concept in the class
class shop
{
    int id;
    float price;

public:
    void getdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void showdata()
    {
        cout << "THE ID OF THE ITEM USED IN THE SHOP IS " << id << endl;
        cout << "THE PRICE OF THE ITEM USED IN THE SHOP IS " << price << endl;
    }
};
int main()
{
    int no_of_items;
    cout << "ENTER THE NUMBER OF THE ITEMS IN THE SHOP " << endl;
    cin >> no_of_items;
    shop *ptr = new shop[no_of_items];
    shop *ptr_dupe = ptr;
    //-->allocates the memory required for the 3 variables
    int p;
    float q;
    for (int i = 0; i < no_of_items; i++)
    {

        cout << "ENTER THE VALUE OF THE ID NUMBER AND THE PRICE OF THE ITEM OF NUMBER" << (i + 1) << endl;
        cin >> p >> q;
        ptr->getdata(p, q);
        ptr++;
    }
    for (int i = 0; i < no_of_items; i++)
    {
        cout << "item number : " << (i + 1) << endl;
        // ptr->showdata();
        // ptr++;
        // we should not use the ptr again as the final ptr in the above loop is one more than the final outcome so we use another pointer that follow the ptr
        ptr_dupe->showdata();
        ptr_dupe++;
    }

    return 0;
}