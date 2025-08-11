#include <iostream>
using namespace std;

int main()
{
    const int DAYS_IN_WEEK = 7;
    constexpr double PI = 3.14159;

    cout << "Days in a week: " << DAYS_IN_WEEK << endl;
    cout << "Value of PI: " << PI << endl;

    // DAYS_IN_WEEK = 8; // ❌ Error: cannot modify a constant
    return 0;
}
