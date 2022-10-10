#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;

    cout << "Enter the marks in english " << endl;
    cin >> s1;
    cout << "Enter the marks in hindi " << endl;
    cin >> s2;
    cout << "Enter the marks in math " << endl;
    cin >> s3;
    int total = s2 + s1 + s3;
    float per = (s1 + s2 + s3) / 3;
    cout << "TOtal =  " << total << endl;
    cout << "percentage =  " << per << endl;

    if (per >= 80)
        cout << "*** Grade A ***" << endl;
    else if (per >= 70)
        cout << "*** Grade B ***" << endl;
    else if (per >= 60)
        cout << "*** Grade C ***" << endl;
    else if (per >= 50)
        cout << " *** Grade D ***" << endl;
    else if (per < 40)
        cout << "***Fail***" << endl;
        return 0;
}