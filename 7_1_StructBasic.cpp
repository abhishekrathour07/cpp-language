#include <iostream>
#include <string.h>

using namespace std;

struct student{
    char name[20];
    char auid[25];
    int attendence;
};

int main(){
    struct student s1, s2, s3, s4;

    s1.attendence = 78;
    strcpy(s1.name, "abhishek");
    strcpy(s1.auid, "ABCA026");

    s2.attendence = 85;
    strcpy(s2.name, "shashi");
    strcpy(s2.auid, "ABCA025");

    s3.attendence = 89;
    strcpy(s3.name, "shishu");
    strcpy(s3.auid, "ABCA056");

    s3.attendence = 78;
    strcpy(s3.name, "paritosh");
    strcpy(s3.auid, "ABCA036");

    s4.attendence = 78;
    strcpy(s4.name, "paritosh2");
    strcpy(s4.auid, "ABCA0363");

    cout << s1.name << endl;
    cout << s1.auid << endl;
    cout << s1.attendence << endl;

    cout << s2.name << endl;
    cout << s2.auid << endl;
    cout << s2.attendence << endl;

    cout << s3.name << endl;
    cout << s3.auid << endl;
    cout << s3.attendence << endl;

    cout << s4.name << endl;
    cout << s4.auid << endl;
    cout << s4.attendence << endl;
    return 0;
}