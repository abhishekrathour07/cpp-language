// How to make array in class .
#include <iostream>
using namespace std;
class employee
{
    int id;
    int sallary;

public:
    void setid(void)
    {
        sallary = 12536;
        cout << "Enter the id " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "Employee id = " << id << endl;
    }
};
int main()
{
    employee snap[5];
    for (int i = 0; i < 5; i++)
    {
        snap[i].setid();
        snap[i].getid();
    }
    return 0;
}