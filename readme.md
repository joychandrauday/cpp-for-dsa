# C++ Operators: A Comprehensive Guide

This README provides a detailed explanation of various C++ operators, including arithmetic, unary, bitwise, relational, and special operators. Examples are provided to illustrate their usage and behavior.

## Table of Contents
1.  [Arithmetic Operators](#arithmetic-operators)
2.  [Unary Operators](#unary-operators)
3.  [Relational Operators](#relational-operators)
4.  [Bitwise Operators](#bitwise-operators)
5.  [Special Operators](#special-operators)




## 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations such as addition, subtraction, multiplication, division, and modulus. These operators work on numerical operands and return a numerical result.

| Operator | Description           | Example        | Result (if x=10, y=3) |
| :------- | :-------------------- | :------------- | :-------------------- |
| `+`      | Addition              | `x + y`        | 13                    |
| `-`      | Subtraction           | `x - y`        | 7                     |
| `*`      | Multiplication        | `x * y`        | 30                    |
| `/`      | Division              | `x / y`        | 3 (integer division)  |
| `%`      | Modulus (Remainder)   | `x % y`        | 1                     |

### Compound Assignment Operators

C++ also provides compound assignment operators, which combine an arithmetic operation with an assignment. These operators offer a shorthand way to perform an operation and assign the result back to the same variable.

| Operator | Example   | Equivalent to |
| :------- | :-------- | :------------ |
| `+=`     | `x += y`  | `x = x + y`   |
| `-=`     | `x -= y`  | `x = x - y`   |
| `*=`     | `x *= y`  | `x = x * y`   |
| `/=`     | `x /= y`  | `x = x / y`   |
| `%=`     | `x %= y`  | `x = x % y`   |

**Example from provided code:**

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 3, y = 5;

    cout << "Initial values: x = " << x << ", y = " << y << endl;

    x += y; // x = x + y
    cout << "After x += y: x = " << x << ", y = " << y << endl; // x becomes 8

    x -= y; // x = x - y (x is 8, y is 5, so x becomes 3)
    cout << "After x -= y: x = " << x << ", y = " << y << endl;

    x *= y; // x = x * y (x is 3, y is 5, so x becomes 15)
    cout << "After x *= y: x = " << x << ", y = " << y << endl;

    x /= y; // x = x / y (x is 15, y is 5, so x becomes 3)
    cout << "After x /= y: x = " << x << ", y = " << y << endl;

    return 0;
}
```

**Output of the example:**

```
Initial values: x = 3, y = 5
After x += y: x = 8, y = 5
After x -= y: x = 3, y = 5
After x *= y: x = 15, y = 5
After x /= y: x = 3, y = 5
```




## 2. Unary Operators

Unary operators operate on a single operand. The most common unary operators are increment (`++`) and decrement (`--`). These operators can be used in either prefix or postfix form, which affects when the increment or decrement operation is applied.

| Operator | Description                                   | Example |
| :------- | :-------------------------------------------- | :------ |
| `++`     | Increment (adds 1 to the operand)             | `x++`, `++x` |
| `--`     | Decrement (subtracts 1 from the operand)      | `x--`, `--x` |
| `+`      | Unary Plus (no effect on value)               | `+x`    |
| `-`      | Unary Minus (negates the value)               | `-x`    |
| `!`      | Logical NOT (inverts boolean value)           | `!true` |

### Increment (`++`) and Decrement (`--`) Operators

- **Prefix Form (`++x`, `--x`):** The operation is performed *before* the value is used in the expression. The variable is updated first, and then its new value is used.
- **Postfix Form (`x++`, `x--`):** The operation is performed *after* the value is used in the expression. The variable's original value is used first, and then the variable is updated.

**Example from provided code:**

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = x++; // Postfix: y gets 3, then x becomes 4
    cout << x << endl; // Output: 4 (x is now 4)
    y = x--; // Postfix: y gets 4, then x becomes 3
    cout << x << endl; // Output: 3 (x is now 3)
    y = x++; // Postfix: y gets 3, then x becomes 4
    cout << x << endl; // Output: 4 (x is now 4)
    cout << y << endl; // Output: 3 (y holds the value of x before increment)
    y = ++x; // Prefix: x becomes 5, then y gets 5
    cout << y << endl; // Output: 5 (y holds the new value of x)
}
```

**Output of the example:**

```
4
3
4
3
5
```




## 3. Relational Operators

Relational operators are used to compare two operands and return a boolean result (`true` or `false`). These operators are commonly used in conditional statements and loops.

| Operator | Description                       | Example        | Result (if x=10, y=3) |
| :------- | :-------------------------------- | :------------- | :-------------------- |
| `==`     | Equal to                          | `x == y`       | `false`               |
| `!=`     | Not equal to                      | `x != y`       | `true`                |
| `>`      | Greater than                      | `x > y`        | `true`                |
| `<`      | Less than                         | `x < y`        | `false`               |
| `>=`     | Greater than or equal to          | `x >= y`       | `true`                |
| `<=`     | Less than or equal to             | `x <= y`       | `false`               |

**Example:**

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "a == b: " << (a == b) << endl; // 0 (false)
    cout << "a != b: " << (a != b) << endl; // 1 (true)
    cout << "a > b: " << (a > b) << endl;   // 0 (false)
    cout << "a < b: " << (a < b) << endl;   // 1 (true)
    cout << "a >= b: " << (a >= b) << endl; // 0 (false)
    cout << "a <= b: " << (a <= b) << endl; // 1 (true)

    return 0;
}
```

**Output of the example:**

```
0
1
0
1
0
1
```




## 4. Bitwise Operators

Bitwise operators perform operations on individual bits of integer operands. They are often used in low-level programming, such as embedded systems or graphics programming, for efficient manipulation of data at the bit level.

| Operator | Description                  | Example (if x=5 (0101), y=3 (0011)) | Result (Binary) | Result (Decimal) |
| :------- | :--------------------------- | :---------------------------------- | :-------------- | :--------------- |
| `&`      | Bitwise AND                  | `x & y`                             | `0001`          | 1                |
| `|`      | Bitwise OR                   | `x | y`                             | `0111`          | 7                |
| `^`      | Bitwise XOR                  | `x ^ y`                             | `0110`          | 6                |
| `~`      | Bitwise NOT (One's Complement)| `~x`                                | `1010` (for 0101) | -6 (for 5)       |
| `<<`     | Left Shift                   | `x << 1`                            | `1010`          | 10               |
| `>>`     | Right Shift                  | `x >> 1`                            | `0010`          | 2                |

**Example:**

```cpp
#include <iostream>

int main() {
    int a = 5;  // Binary: 0000 0101
    int b = 3;  // Binary: 0000 0011

    std::cout << "a & b = " << (a & b) << std::endl; // 0000 0001 (1)
    std::cout << "a | b = " << (a | b) << std::endl; // 0000 0111 (7)
    std::cout << "a ^ b = " << (a ^ b) << std::endl; // 0000 0110 (6)
    std::cout << "~a = " << (~a) << std::endl;     // 1111 1010 (-6, assuming 2's complement for 8-bit int)
    std::cout << "a << 1 = " << (a << 1) << std::endl; // 0000 1010 (10)
    std::cout << "a >> 1 = " << (a >> 1) << std::endl; // 0000 0010 (2)

    return 0;
}
```

**Output of the example:**

```
a & b = 1
a | b = 7
a ^ b = 6
~a = -6
a << 1 = 10
a >> 1 = 2
```




## 5. Special Operators

Special operators in C++ perform unique functions that don't fit into the other categories. They are crucial for memory management, conditional expressions, and accessing members of objects.

| Operator | Description                                   | Example                               |
| :------- | :-------------------------------------------- | :------------------------------------ |
| `sizeof` | Returns the size of a variable or data type   | `sizeof(int)`, `sizeof(myVariable)`  |
| `?:`     | Ternary (Conditional) operator                | `(condition ? expr1 : expr2)`         |
| `&`      | Address-of operator (returns memory address)  | `&myVariable`                         |
| `*`      | Dereference operator (accesses value at address) | `*myPointer`                          |
| `.`      | Member access operator (for objects)          | `myObject.member`                     |
| `->`     | Member access operator (for pointers to objects) | `myPointer->member`                   |
| `new`    | Dynamically allocates memory                  | `int* ptr = new int;`                 |
| `delete` | Deallocates dynamically allocated memory      | `delete ptr;`                         |

### Ternary (Conditional) Operator (`?:`)

The ternary operator is a shorthand for an `if-else` statement. It evaluates a condition and returns one of two values based on whether the condition is true or false.

**Syntax:** `condition ? expression_if_true : expression_if_false;`

**Example:**

```cpp
#include <iostream>

int main() {
    int score = 75;
    std::string result = (score >= 60) ? "Pass" : "Fail";
    std::cout << "Result: " << result << std::endl; // Output: Pass
    return 0;
}
```

### `sizeof` Operator

The `sizeof` operator returns the size, in bytes, of a variable or a data type. It's useful for memory management and understanding data structures.

**Example:**

```cpp
#include <iostream>

int main() {
    int a;
    double b;
    std::cout << "Size of int: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(b) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    return 0;
}
```

**Output of the example (may vary based on system):**

```
Size of int: 4 bytes
Size of double: 8 bytes
Size of char: 1 bytes
```

### Address-of (`&`) and Dereference (`*`) Operators

These operators are fundamental to working with pointers in C++. The `&` operator gives the memory address of a variable, while the `*` operator (when used with a pointer) accesses the value stored at that memory address.

**Example:**

```cpp
#include <iostream>

int main() {
    int value = 10;
    int* ptr = &value; // ptr stores the memory address of value

    std::cout << "Value: " << value << std::endl;        // Output: 10
    std::cout << "Address of value: " << &value << std::endl; // Output: (memory address)
    std::cout << "Value through pointer: " << *ptr << std::endl; // Output: 10
    std::cout << "Address stored in ptr: " << ptr << std::endl;   // Output: (memory address)

    return 0;
}
```



