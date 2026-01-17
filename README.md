# C++ Control Statements 🚀

Control statements in C++ are used to **control the flow of execution** of a program.  
They are mainly divided into three types:

1. **Conditional Statements**  
2. **Looping Statements**  
3. **Jump Statements**  

---

## ✅ Conditional Statements

### `if` Statement
```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;

    if (age >= 18) {
        cout << "You are an adult." << endl;
    }

    return 0;
}
```

---

### `if-else` Statement
```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 16;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
```

---

### `else-if` Ladder
```cpp
#include <iostream>
using namespace std;

int main() {
    int marks = 75;

    if (marks >= 80) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 60) {
        cout << "Grade: A" << endl;
    } else if (marks >= 40) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
```

---

### Nested `if-else`
```cpp
#include <iostream>
using namespace std;

int main() {
    int number = -5;

    if (number >= 0) {
        if (number == 0) {
            cout << "The number is Zero." << endl;
        } else {
            cout << "The number is Positive." << endl;
        }
    } else {
        cout << "The number is Negative." << endl;
    }

    return 0;
}
```

---

### `switch-case`
```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 3;

    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid day"; 
    }

    return 0;
}
```

---

## ✅ Looping Statements

### `for` Loop
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Number: " << i << endl;
    }
    return 0;
}
```

---

### `while` Loop
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "Count: " << i << endl;
        i++;
    }
    return 0;
}
```

---

### `do-while` Loop
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Value: " << i << endl;
        i++;
    } while (i <= 5);

    return 0;
}
```

---

## ✅ Jump Statements

### `break`
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // loop will stop
        }
        cout << i << " ";
    }
    return 0;
}
```

---

### `continue`
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // skip iteration when i == 3
        }
        cout << i << " ";
    }
    return 0;
}
```

---

### `goto`
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    if (n % 2 == 0) {
        goto evenLabel;
    } else {
        goto oddLabel;
    }

evenLabel:
    cout << "Even number" << endl;
    return 0;

oddLabel:
    cout << "Odd number" << endl;
    return 0;
}
```

---

## 📌 Summary
- **Conditional:** if, if-else, else-if, nested if, switch-case  
- **Looping:** for, while, do-while  
- **Jump:** break, continue, goto  

---

✍️ **Author:** Joy Chandra Uday  
