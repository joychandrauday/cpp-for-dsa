#include <iostream>
using namespace std;

int main()
{
    int tableNumber;
    cout << "Enter Number of Multiplication table: ";
    cin >> tableNumber;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " X " << tableNumber << " = " << i * tableNumber << endl;
    }
    return 0;
}