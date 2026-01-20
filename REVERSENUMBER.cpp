#include <iostream>
using namespace std;

int main()
{
    int number;
    int reversedNumber = 0;
    int digit;

    cout << "Enter a number to reverse: ";
    cin >> number;

    while (number > 0)
    {
        digit = number % 10;
        reversedNumber = (reversedNumber * 10) + digit;
        number = number / 10;
    }
    cout << "The reversed number is: " << reversedNumber;

    return 0;
}