#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The numbet till you want to print: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i != n)
        {
            cout << ", ";
        }
    }
    return 0;
}