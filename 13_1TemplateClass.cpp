#include <iostream>
using namespace std;
template <class T>

class vector
{

public:
    T *array;
    int size;
    vector(int m)
    {
        size = m;
        array = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->array[i] * v.array[i];
        }
        return d;
    }
};
int main()
{
    vector<double> v1(3);
    v1.array[0] = 1.4;
    v1.array[1] = 2.5;
    v1.array[2] = 3.8;
    vector<double> v2(3);
    v1.array[0] = 1.9;
    v1.array[1] = 0.5;
    v1.array[2] = 1.4;
    double abhi = v1.dotproduct(v2);
    cout << abhi << endl;
}
