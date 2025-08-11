
# Simple Arithmetic Operations in C++

This program takes two integer inputs from the user and calculates:

- Sum
- Difference
- Multiplication
- Division (floating point)
- Modulus (remainder)

It also checks for division by zero to avoid runtime errors.

## Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
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

    if (num2 != 0) {
        division = static_cast<double>(num1) / num2;
        cout << "The division of " << num1 << " by " << num2 << " is " << division << endl;

        modulus = num1 % num2;
        cout << "The modulus of " << num1 << " and " << num2 << " is " << modulus << endl;
    } else {
        cout << "Division and modulus by zero are not allowed." << endl;
    }

    return 0;
}
```

## How to Compile and Run

1. Save the code in a file, e.g., `arithmetic.cpp`.

2. Open your terminal or command prompt.

3. Compile the code using a C++ compiler, for example:

   ```bash
   g++ arithmetic.cpp -o arithmetic
   ```

4. Run the executable:

   - On Linux/macOS:

     ```bash
     ./arithmetic
     ```

   - On Windows:

     ```bash
     arithmetic.exe
     ```

5. Enter two integers when prompted.

## Notes

- The program uses `static_cast<double>` to perform floating-point division.
- It prevents division or modulus by zero by checking the second input.
- This is a simple example to demonstrate basic arithmetic and input validation in C++.

---

Feel free to modify and expand the program!

---

## License

This code is open source and free to use.
