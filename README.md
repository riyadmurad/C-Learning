# C-Learning
This repository contains resources and materials for learning the C programming language. It includes tutorials, examples, and exercises to help beginners and intermediate programmers enhance their C programming skills.

# Contents
- `Labs/`: Sample C programs demonstrating different concepts.

# Getting Started
To start with C programming, you need to have a C compiler installed on your system. You can use GCC (GNU Compiler Collection) which is available for most operating systems or install Visual Studio Code with C/C++ extensions. Refer to the VCode documentation for setup instructions https://code.visualstudio.com/docs/languages/cpp.

# Hello World Example
A simple "Hello, World!" program in C looks like this:
```c
#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}
```
Let's break down the code:
- `#include <stdio.h>`: This line includes the standard input-output library which is necessary for using the `printf` function.
- `int main() { ... }`: This is the main function where the execution of the program begins.
- `printf("Hello, World!\n");`: This line prints "Hello, World!" to the console.
- `return 0;`: This indicates that the program ended successfully.


# Variables and Data Types
C supports various data types including:
- `int`: Integer type for whole numbers. It has a typical value range of -32,768 to 32,767 (for 16-bit) or -2,147,483,648 to 2,147,483,647 (for 32-bit).
- `float`: Floating-point type for decimal numbers. It has a typical precision of 6 decimal places.
- `char`: Character type for single characters. It typically uses 1 byte of memory.
- `double`: Double-precision floating-point type for more precise decimal numbers. It has a typical precision of 15 decimal places. It's faster and more accurate than `float` for complex calculations. 
- `void`: Represents the absence of type, often used for functions that do not return a value. 
## Naming Conventions
When naming variables and functions in C, follow these conventions:
- Use meaningful names that reflect the purpose of the variable or function.
- Start names with a letter (a-z, A-Z) or an underscore (_), followed by letters, digits (0-9), or underscores.
- Avoid using C reserved keywords (e.g., int, return, if, else).
- Use camelCase or snake_case for multi-word names (e.g., myVariable, my_function).
- Be consistent with your naming style throughout your codebase.

# Printf Function
The `printf` function is used to print formatted output to the console. Here are some common format specifiers:
- `%d`: Integer
- `%f`: Floating-point number
- `%c`: Character
- `%s`: String
- `%%`: Percent sign
Example:
```c
int age = 25;
printf("I am %d years old.\n", age);
```

# Constants
Constants are fixed values that do not change during the execution of a program. In C, you can define constants using the `#define` preprocessor directive or the `const` keyword.
Example using `#define`:
```c
#define PI 3.14
```
Example using `const`:
```c
const int MAX_SIZE = 100;
```

# Mathematical Operators
C provides various mathematical operators for performing arithmetic operations:
- Addition (`+`): Adds two operands.
- Subtraction (`-`): Subtracts the second operand from the first.
- Multiplication (`*`): Multiplies two operands.
- Division (`/`): Divides the first operand by the second.
- Modulus (`%`): Returns the remainder of the division of two integers. 

## Increment, Decrement and Assignment Operators
- Increment (`++`): Increases an integer's value by one.
- Decrement (`--`): Decreases an integer's value by one.
- Assignment you can use operators like `+=`, `-=`, `*=`, `/=` to modify the value of a variable by performing an operation and assigning the result back to the variable.
Example:
```c
int a = 5;
int b=10;
a++; // Now a is 6
a--; // Now a is 5 again
a+=b; // Now a is 15
``` 

## Comparison and Logical Operators
- Equal to (`==`): Checks if two values are equal.
- Not equal to (`!=`): Checks if two values are not equal.
- Greater than (`>`): Checks if the left value is greater than the right.
- Less than (`<`): Checks if the left value is less than the right.
- Greater than or equal to (`>=`): Checks if the left value is greater than or equal to the right.
- Less than or equal to (`<=`): Checks if the left value is less than or equal to the right.
- Logical AND (`&&`): Returns true if both operands are true.
- Logical OR (`||`): Returns true if at least one operand is true.

Example:
```c
int x = 10;
int y = 5;
if (x >= 5 && y <= 10) {
    printf("x is greater than or equal to 5 and y is less than or equal to 10\n");   
}
else {
    printf("Condition not met\n");
}   
```
## Order of Operations
| Priority | Symbol |
|----------|--------|
| 1 | ++ |
| 1 | -- |
| 1 | () |
| 2 | ! |
| 2 | (typecast) |
| 3 | * |
| 3 | / |
| 3 | % |
| 4 | + |
| 4 | - |
| 5 | <, <= |
| 5 | >, >= |
| 6 | ==, != |
| 7 | && |
| 8 | \|\| |
| 9 | all assignment operators |



