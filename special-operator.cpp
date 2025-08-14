#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i;
    double d;
    float f;
    char ch;
    char name[20];
    int is = sizeof(i);
    int ds = sizeof(d);
    int fs = sizeof(f);
    int chs = sizeof(ch);
    int ns = sizeof(name);
    cout << is << endl;
    cout << ds << endl;
    cout << fs << endl;
    cout << chs << endl;
    cout << ns << endl;
    return 0;
}