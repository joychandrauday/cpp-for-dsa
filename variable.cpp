#include <iostream>
using namespace std;

int main()
{
    int a = 10;    // integer variable
    float b = 3.5; // floating-point variable
    bool x = true; // boolean variable (true/false)
    int result;    // integer result

    int c = 2;           // integer initialized to 2
    char ch = 'A';       // character variable
    double d = 9.876;    // double-precision floating point
    string name = "Joy"; // string variable (requires <string> header)

    // Perform some operations
    a += 5;         // now a = 15
    result = a + b; // 15 + 3.5 = 18.5 → stored as 18 (int truncation)

    // Output all variables
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "x: " << x << endl; // prints 1 for true, 0 for false
    cout << "result: " << result << endl;
    cout << "c: " << c << endl;
    cout << "ch: " << ch << endl;
    cout << "d: " << d << endl;
    cout << "name: " << name << endl;

    return 0;
}
