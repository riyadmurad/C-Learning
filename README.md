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
- `%f`: Floating-point number or double number
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

# Condition Structures
C provides various control structures to manage the flow of execution in a program:
- `if`, `else if`, `else`: Conditional statements to execute code based on certain conditions.
- `switch`: A multi-way branch statement that allows a variable to be tested for equality against a list of values.
 `switch`statements look like this:
    ```c
    switch (expression) {
        case constant1:
            // code to be executed if expression equals constant1
            break;
        case constant2:
            // code to be executed if expression equals constant2
            break;
        default:
            // code to be executed if expression doesn't match any case
    }
    ``` 
 >[!NOTE]
   > Without the `break` keyword at the end of each case, the program would execute the code for the **first matching** case and all subsequent cases, including the default code.
- `Ternary Operator`: A shorthand for `if-else` statements. It takes three operands: a condition, a value if true, and a value if false. It looks like this:
    ```c
    condition ? value_if_true : value_if_false;
    ```


# Example Coin Flip Program
Here's a simple program that simulates a coin flip:
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Create random number that returns 0 or 1
    srand(time(0)); // Seed the random number generator
    int coin = rand() % 2; // Generate a random number (0 or
    if (coin == 0) {
        printf("Head\n");
  } else {
        printf("Tail\n");
  }
}
```
# Loops
C provides several types of loops to execute a block of code multiple times:
- `for` loop: Used when the number of iterations is known beforehand.
    - Example:
    ```c
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    ```
- `while` loop: Used when the number of iterations is not known and depends on a condition.
    - Example:
    ```c
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }
    ```
- `do-while` loop: Similar to the `while` loop, but guarantees at least one execution of the loop body.
 - Example:
    ```c
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 10);
    ```
## Break and Continue Statements
- `break`: Exits the nearest enclosing loop or switch statement.
- `continue`: Skips the current iteration of the nearest enclosing loop and proceeds to the next iteration.

Example:
```c
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // Exit the loop when i is 5
    }
    if (i % 2 == 0) {
        continue; // Skip even numbers
    }
    printf("%d\n", i); // Print odd numbers less than 5
}
```

# Arrays
An array is a collection of data that can be of any type. For example, you can construct an array of `int`s, `bool`s, `char`s, etc.

There are two types of arrays that can be created: an `initialized` array or an `uninitialized` array. As its name implies, an uninitialized array is created without specifying the initial values it contains. 
You can declare an uninitialized array like this:
```c
int numbers[5]; // Declares an array of 5 integers
```
You can initialize an array at the time of declaration:
```c
int numbers[5] = {1, 2, 3, 4, 5};
```
You can access array elements using their index (starting from 0):
```c
printf("%d\n", numbers[0]); // Prints the first element (1)

```

## Accessing and Modifying Array Elements
You can access and modify array elements using their index. For example:
```c
int numbers[5] = {1, 2, 3, 4, 5};
numbers[2] = 10; // Modify the third element
printf("%d\n", numbers[2]); // Prints 10
```

## Size of an Array
the `sizeof` operator can be used to determine the size of an array in bytes. To calculate the number of elements in an array, divide the total size of the array by the size of the array's data type:
```c
int numbers[5] = {1, 2, 3, 4, 5};
int size = sizeof(numbers) / sizeof(int); // Calculates the number of elements
printf("Array size: %d\n", size); // Prints 5
```

## Multi-Dimensional Arrays
It's an array storing multiple arrays. You can declare a two-dimensional array like this:
```c
int matrix[3][4]; // Declares a 2D array with 3 rows and 4 columns
```
You can initialize a two-dimensional array at the time of declaration:
```c
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```
You can access elements in a two-dimensional array using two indices:
```c
printf("%d\n", matrix[1][2]); // Prints 7 (second row, third column)
```  

To access the elements of a multi-dimensional array, you can use nested loops. For example, to print all elements of a 2D array:
```c
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
}; 
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
```

To get the size of a multi-dimensional array:
 * rowDimension = sizeof(matrix)/sizeof(matrix[0]);
 * columnDimension = sizeof(matrix[0])/sizeof(dataType);
 
 For example:
```c
int mat[3][3] = {{12, 8, 2}, {17, 19, 5}, {6, 11, 2}};

int rowDimension = sizeof(mat)/sizeof(mat[0]);
int columnDimension = sizeof(mat[0])/sizeof(int);

for(int i = 0; i < rowDimension; i++){
  for(int j = 0; j < columnDimension; j++){
    int num = mat[i][j];
    printf("%i\n", num);
  }
}
```

## Creating and initializing Character Arrays
Character arrays, also known as strings in C, can be created and initialized in two ways:
1. Using single quotes for each character and ending with a null terminator (`\0`):
```c
char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};
```
2. Using double quotes, which automatically adds the null terminator:
```c
char greeting[] = "Hello";
```
>[!NOTE]
 > In C, strings are represented as arrays of characters terminated by a null character (`\0`). This null terminator indicates the end of the string. When using double quotes to initialize a character array, the compiler automatically appends the null terminator for you.









