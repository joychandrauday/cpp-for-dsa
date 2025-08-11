#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dif, sum, num1, num2, modulus;
    double multi, division;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    dif = num1 - num2;
    multi = num1 * num2;

    cout << fixed << setprecision(2); // set decimal precision globally

    // Print header (optional)
    cout << left << setw(20) << "Operation"
         << right << setw(15) << "Num1"
         << setw(15) << "Num2"
         << setw(20) << "Result" << endl;

    cout << string(70, '-') << endl; // separator line

    cout << left << setw(20) << "Sum"
         << right << setw(15) << num1
         << setw(15) << num2
         << setw(20) << sum << endl;

    cout << left << setw(20) << "Difference"
         << right << setw(15) << num1
         << setw(15) << num2
         << setw(20) << dif << endl;

    cout << left << setw(20) << "Multiplication"
         << right << setw(15) << num1
         << setw(15) << num2
         << setw(20) << multi << endl;

    if (num2 != 0)
    {
        division = static_cast<double>(num1) / num2;
        modulus = num1 % num2;

        cout << left << setw(20) << "Division"
             << right << setw(15) << num1
             << setw(15) << num2
             << setw(20) << division << endl;

        cout << left << setw(20) << "Modulus"
             << right << setw(15) << num1
             << setw(15) << num2
             << setw(20) << modulus << endl;
    }
    else
    {
        cout << "Division and modulus by zero are not allowed." << endl;
    }

    return 0;
}
