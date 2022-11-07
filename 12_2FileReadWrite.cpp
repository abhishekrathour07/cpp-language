#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("sample12c.txt");
    string name;
    cout << "Enter tour name ";
    cin >> name;
    out << name + " is my name ";
    out.close();
    ifstream in("sample12c.txt");
    string content;
    in >> content;
    cout << " the content in the file is " << content;
    in.close();
    return 0;
}