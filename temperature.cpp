#include <iostream>
#include <cstdlib> // For rand()
#include <string>
#include <ctime>
using namespace std;

int main()
{
    double celsius, fahrenheit, kelvin;
    bool wantKelvin;
    string choice; // Using string to detect empty input
    srand(time(0));
    int randomNumber = (rand() % 101)+1;

    cout << "Enter Celsius Temperature: ";
    cin >> celsius;

    // Formula: F = C * 9/5 + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << "The Fahrenheit value of " << celsius << "°C is " << fahrenheit << "°F" << endl;

    // Kelvin
    cout << "Do you want to convert it to Kelvin? (1 for Yes, 0 for No): ";
    cin >> wantKelvin;
    cin.ignore(); // Clear newline left in buffer

    if (wantKelvin)
    {
        kelvin = celsius + 273.15;
        cout << "The Kelvin value of " << celsius << "°C is " << kelvin << " K" << endl;

        cout << "Want to see my favorite number? (Y/n): ";
        getline(cin, choice);

        // If user just hits enter → default to 'Y'
        if (choice.empty() || choice == "Y" || choice == "y")
        {
            cout << "My Favorite number is " << randomNumber << endl;
        }
    }

    cout << "Thanks!" << endl;
    return 0;
}
