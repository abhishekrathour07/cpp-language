#include <iostream>
using namespace std;
class shop
{
    int itemId[40];
    int itemPrice[40];
    int counter;

public:
    void initcounter(void) { counter = 100; }
    void setPrice(void);
    void DisplayPrice(void);
};
void shop ::setPrice(void)
{
    cout << "Enter id of your item number " << counter + 1 << " ";
    cin >> itemId[counter];
    cout << "Enter price of your item";
    cin >> itemPrice[counter];
    counter++;
}
void shop ::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dhaba;
    dhaba.initcounter();

    dhaba.setPrice();
    dhaba.setPrice();
    dhaba.setPrice();
    dhaba.setPrice();

    dhaba.DisplayPrice();

    return 0;
}