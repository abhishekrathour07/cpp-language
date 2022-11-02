// Write  a class of binary number .
#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void check_binary(void);
    void ones(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter the binary number " << endl;
    cin >> s;
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "INcorrect binary number " << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void binary ::display(void)
{
    cout << "Displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
        cout << s.at(i);
}

int main()
{
    binary a;
    a.read();
    a.check_binary();
    a.ones();
    a.display();

    return 0;
}