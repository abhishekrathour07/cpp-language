// Program of class to determine id number of employee
#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << " Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and employee number is " << count << endl;
    }
};
int employee::count;
int main()
{
    employee abhi, shishu;
    abhi.setdata();
    abhi.getdata();

    shishu.setdata();
    shishu.getdata();

    return 0;
}