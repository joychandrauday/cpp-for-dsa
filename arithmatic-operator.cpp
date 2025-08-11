#include <iostream>
using namespace std;

int main()
{
    int dif, sum, num1, num2, modulus;
    double multi, division;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    dif = num1 - num2;
    cout << "The difference of " << num1 << " and " << num2 << " is " << dif << endl;

    multi = num1 * num2;
    cout << "The multiplication of " << num1 << " and " << num2 << " is " << multi << endl;

    if (num2 != 0)
    {
        division = static_cast<double>(num1) / num2; // convert to double for accurate division
        cout << "The division of " << num1 << " by " << num2 << " is " << division << endl;

        modulus = num1 % num2;
        cout << "The modulus of " << num1 << " and " << num2 << " is " << modulus << endl;
    }
    else
    {
        cout << "Division and modulus by zero are not allowed." << endl;
    }

    return 0;
}
