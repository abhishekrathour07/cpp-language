// Program of pointer in the class to get the data not by value by address 
#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "the id of a shop item is " << id << endl;
        cout << "The price of a shop item is " << price << endl;
    }
};
int main()
{
    int size = 4;
    ShopItem *ptr = new ShopItem[size];
      ShopItem *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id and Price " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for(i=0;i<size;i++){
        cout<<"Item number is : "<<i+1<<endl;
        ptr->getdata();
        ptrtemp++;
    }
    return 0;
}