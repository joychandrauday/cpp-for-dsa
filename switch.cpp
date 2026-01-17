#include <iostream>
using namespace std;
int main()
{
    int dayNumber;
    cout << "Enter Daynumber to get day name ";
    cin >> dayNumber;
    switch (dayNumber)
    {
    case 1:
        cout << "This Is Saturday";
        break;
    case 2:
        cout << "This is Sundday";
        break;
    case 3:
        cout << "This is Monday";
        break;
    case 4:
        cout << "This is Tuesday";
        break;
    case 5:
        cout << "This is Wednesday";
        break;
    case 6:
        cout << "This is Thursday";
        break;
    case 7:
        cout << "This is Friday";
        break;
    default:
        cout << "Invalid Day Number";
    }
    return 0;
}