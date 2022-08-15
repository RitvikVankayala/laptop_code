#include <iostream>
using namespace std;

// usage of the memory allocation common thing in a class have been allocated with common space
// while different classes objects are allocateed at different space

class shop
{

    int item_id[100];
    int item_cost[100];
    int buffer;

public:
    void initiator()
    {
        buffer = 0;
    }
    void fix_price();
    void display_price();
};

    void shop :: fix_price(){
         
    cout<<"ENTER THE VALUE OF itemid of item number "<<(buffer+1)<<endl;
    cin>>item_id[buffer];

    cout<<"THE COST OF THE ITEM OF THE ITEM ID  "<<item_id[buffer]<<" IS"<<endl;
    cin>>item_cost[buffer];
    buffer++;
    }

    void shop :: display_price(){

        for(int i=0;i<buffer;i++){
        cout<<"THE PRICE OF THE ITEM ID "<<item_id[i]<<" IS "<<item_cost[i]<<endl;
        }
    }

int main()
{
    shop s;
    s.initiator();
    s.fix_price();
    s.fix_price();
    s.fix_price();
    s.fix_price();
    s.fix_price();
    s.display_price();


    return 0;
}