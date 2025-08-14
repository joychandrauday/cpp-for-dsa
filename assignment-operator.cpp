#include <iostream>
using namespace std;

int main()
{
    int x = 3, y = 5;

    cout << "Initial values: x = " << x << ", y = " << y << endl;

    x += y; // x = x + y
    cout << "After x += y: x = " << x << ", y = " << y << endl;

    x -= y; // x = x - y
    cout << "After x -= y: x = " << x << ", y = " << y << endl;

    x *= y; // x = x * y
    cout << "After x *= y: x = " << x << ", y = " << y << endl;

    x /= y; // x = x / y
    cout << "After x /= y: x = " << x << ", y = " << y << endl;

    return 0;
}
