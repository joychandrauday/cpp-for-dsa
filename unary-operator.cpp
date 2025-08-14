#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = x++;
    cout << x << endl; // 4
    y = x--;
    cout << x << endl; // 3
    y = x++;
    cout << x << endl; // 4
    cout << y << endl; // 3
    y = ++x;
    cout << y << endl; // 5
}
