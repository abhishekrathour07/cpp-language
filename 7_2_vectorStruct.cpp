// vector program of x and y axis
#include <iostream>
using namespace std;
struct vector
{
    int x, y;
};
vector sum(vector v1, vector v2)
{
    vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    struct vector v1, v2,su ;
    v1.x = 10;
    v1.y = 20;
    v2.x = 20;
    v2.y = 10;
    printf("Value of x axis = %d and value of y axis is %d\n",v1.x,v1.y);
    printf("Value of x axis = %d and value of y axis is %d\n",v2.x,v2.y);
    sum (v1,v2);
    printf("Value of x axis = %d and value of y axis is %d\n",su.x,su.y);



    return 0;
}