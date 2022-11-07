#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream read;
    string st;
    read.open("sample12d.txt");
    while (read.eof() == 0)
    {
        getline(read, st);
        cout << st << endl;
    }
    read.close();
    return 0;
}
