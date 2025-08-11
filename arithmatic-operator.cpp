#include <iostream>
#include <iomanip> // for setw, fixed, setprecision
using namespace std;

int main()
{
    int dif, sum, num1, num2, modulus;
    double multi, division;

    cout << setw(15) << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << setw(15) << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    dif = num1 - num2;
    cout << setw(15) << "The difference of " << num1 << " and " << num2 << " is " << dif << endl;

    multi = num1 * num2;
    cout << setw(15) << "The multiplication of " << num1 << " and " << num2 << " is " << multi << endl;

    if (num2 != 0)
    {
        division = static_cast<double>(num1) / num2;

        cout << setw(15) << fixed << setprecision(2); // set decimal precision to 2
        cout << setw(15) << "The division of " << num1 << " by " << num2 << " is " << division << endl;

        modulus = num1 % num2;
        cout << setw(15) << "The modulus of " << num1 << " and " << num2 << " is " << modulus << endl;
    }
    else
    {
        cout << setw(15) << "Division and modulus by zero are not allowed." << endl;
    }

    return 0;
}
