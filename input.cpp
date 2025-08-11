#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    // taking multiple valueseperately
    //  cout << "Please enter number 1: ";
    //  cin >> number1;
    //  cout << "Please enter number 2: ";
    //  cin >> number2;

    // taking multiple value at a time
    cout << "Please enter 2 number: ";
    cin >> number1 >> number2;

    cout << "The sum of the number is: " << number1 + number2 << endl;

    return 0;
}
