
# C++ Input and Output Example

This repository contains a simple C++ program demonstrating basic input and output operations using `cin` and `cout`.

## Program Description

The program prompts the user to enter an integer, reads the input using `cin`, and then prints the entered number using `cout`.

### Code snippet:
```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The number is " << number << endl;
    return 0;
}
```

## How to run this program

### Prerequisites:
- A C++ compiler (e.g., GCC)
- Visual Studio Code (optional but recommended)
- Code Runner extension for easy execution (optional)

### Running from command line:
1. Save your code in a file, e.g., `main.cpp`
2. Open a terminal and compile:
   ```bash
   g++ main.cpp -o main
   ```
3. Run the executable:
   ```bash
   ./main     # On Windows: main.exe
   ```
4. Input your number when prompted.

### Running in Visual Studio Code with Code Runner:
1. Open your `.cpp` file in VS Code.
2. Go to Settings and enable **"Run In Terminal"** for Code Runner:
   - Open Settings (`Ctrl+,`)
   - Search for `code-runner.runInTerminal`
   - Check the box to enable it
3. Run the code using Code Runner (`Ctrl+Alt+N` or click the run button).
4. Enter your input in the terminal window that appears.

## Notes
- Make sure to use a terminal or method that supports input for `cin`.
- Code Runner's default output window does NOT support interactive input, so always enable "Run In Terminal" for input programs.

---

Feel free to modify and expand the program for more complex input/output operations!

---

## License
This is free and open source example code.
