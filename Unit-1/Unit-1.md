**Syllabus : C++ character set, C++ Tokens (Identifiers, Keywords, Constants, Operators,), Structure of a C++ Program (include files, main function), use of I/O operators (<>), Cascading of I/O operators, compilation, linking and execution. Concept of Data types: Built-in Data types: char, int, float and double; Constants: Integer Constants, Character constants - \n, \t, \b), Floating Point Constants, String Constants; Access modifier, const; Variables of built-in-data types, Declaration/Initialization of variables, Assignment statement, Type modifier: signed, unsigned, long Operator and Expressions: Operators: Arithmetic operators (-,+,*,/,%), Unary operator (-), Increment (++) and Decrement (--) Operators, Relation operator (>,>=,<=,=,!=), Logical operators (!,&&,||), Conditional operator: ?; Precedence of Operators; Automatic type conversion in expressions, Type casting; C++ shorthands (+=,- =,*=,/=,%=) . Conditional statements: if else, Nested if, switch case default, use of conditional operator, Nested switch case, break statement; Loops: while, do - while, for and Nested loops. Defining a function; function prototype, Invoking/calling a function: call by value, call by reference, returning values from a function, scope rules of functions and variables local and global variables**

Reference Books :
1. OOPs with C++ - Balagarusamy
2. Programming Principles and Practice with C++ - Bjarne 
3. The C++ Programming Language - Bjarne 
4. C++ Premier - Lippman 


---
# C++
C++ is a general-purpose programming language that has undergone significant evolution since its inception. Below is a detailed history:

### **1. Origins and Early Development (1979-1983)**

- **Creator**: Bjarne Stroustrup at Bell Labs, USA.
- **Objective**: Stroustrup aimed to create a language that combined the efficiency of **C** with the abstractions of higher-level languages like **Simula** (the first object-oriented programming language).
- **Initial Version**: Stroustrup initially named it "C with Classes," as it extended C by adding object-oriented features.
- **Features Introduced**:
    - Classes
    - Basic inheritance
    - Default function arguments
    - Stronger type checking
- The first implementation was a preprocessor that translated "C with Classes" into standard C code.

---

### **2. Official Birth of C++ (1983-1985)**

- In **1983**, the name was changed to **C++**, signifying the evolutionary nature of the language (C++ being the increment operator in C).
- **Key Features Introduced**:
    - Inline functions for performance
    - Overloading of operators and functions
    - Access specifiers (`public`, `private`, `protected`)
- The first commercial compiler, **Cfront**, was developed to compile C++ into C.

---

### **3. Standardization Efforts Begin (1985-1990)**

- In **1985**, the first edition of Stroustrup's book, _The C++ Programming Language_, was published.
- This period saw growing adoption in academia and industry due to its ability to handle complex systems with better abstraction and modularity than C.
- Features added in this era:
    - **Virtual functions**: Enabled polymorphism.
    - **Inheritance improvements**.
    - Support for **const** and **references**.

---

### **4. The ANSI/ISO Standardization Era (1990-1998)**

- In **1990**, the Annotated C++ Reference Manual was published by Margaret Ellis and Bjarne Stroustrup, serving as a de facto standard.
- **Template Metaprogramming**:
    - Introduced **templates**, enabling generic programming.
    - Added the Standard Template Library (**STL**) for containers, iterators, and algorithms.
- **Standardization Milestone**:
    - In **1998**, the first **ISO/IEC 14882:1998** standard (C++98) was published.
- Features added:
    - Namespaces
    - Exception handling
    - Run-time type identification (RTTI)

---

### **5. Modernization Phase (2003-2011)**

- **C++03** (2003): A minor revision that fixed bugs and ambiguities in C++98 but did not introduce significant new features.
- During this period, the programming community demanded a more modern and developer-friendly language.

---

### **6. The Rise of Modern C++ (2011 - Present)**

#### **C++11**:

- Published in **2011**, it marked the most significant update since C++98.
- Key features:
    - **Move semantics** (`std::move`) and rvalue references.
    - **Auto keyword** for type inference.
    - **Lambda expressions** for inline anonymous functions.
    - **Range-based for loops**.
    - Smart pointers (`std::shared_ptr`, `std::unique_ptr`).
    - **Multithreading** support (`std::thread`, `<thread>` library).
    - **constexpr** for compile-time constants.

#### **C++14**:

- Published in **2014**, focusing on refining C++11.
- Key features:
    - **Generic lambdas**.
    - `std::make_unique` for better memory management.
    - Relaxed `constexpr` restrictions.

#### **C++17**:

- Published in **2017**, adding several usability features.
- Key features:
    - **Structured bindings** for better destructuring.
    - **std::optional**, **std::variant**, and **std::any** for safer data handling.
    - **Parallel algorithms** (`std::execution`).
    - **Filesystem library**.

#### **C++20**:

- Published in **2020**, introducing major enhancements:
    - **Concepts** for type constraints in templates.
    - **Coroutines** for asynchronous programming.
    - **Ranges library**.
    - **Modules** for better code modularity.
    - Expanded **constexpr** capabilities.

#### **C++23** (Upcoming Updates):

- Focuses on improving developer experience and minor feature updates.
- Enhancements to library utilities and the introduction of **std::expected** for error handling.

---

### **7. Influence and Legacy**

- **Adoption**: C++ became a staple in systems programming, game development, financial systems, and embedded software due to its performance and flexibility.
- **Community and Tools**: The language's ecosystem expanded with robust IDEs, debugging tools, and libraries.
- **Challenges**:
    - The complexity of syntax and learning curve.
    - Competition from languages like Java, Python, and Rust.

---

C++ remains one of the most versatile and high-performance programming languages, continually evolving to meet the needs of modern software development.

---
## What is a Program ?
A program is a set of instructions that are provided to a computer which are then understood by the computer and then further the actions are taken by the computer on it depending on the instruction provided.

Every program is needed to be written in some form of language like C++, Python, HTML, CSS, Java Script, PHP, Ruby, Go etc.

## Levels of Programming Language 

The level of a programming language—whether it is **high-level** or **low-level**—can be distinguished based on several key factors:
### **1. Abstraction Level**

- **High-Level Language (HLL):** Provides high abstraction from hardware. It focuses on **what** needs to be done rather than **how** it is done at the hardware level.
    
    - Example: Python, C++, Java, JavaScript
    - Code Example (Python):
        
        ```python
        print("Hello, World!")
        ```
        
    - The programmer doesn’t need to manage memory or hardware directly.
- **Low-Level Language (LLL):** Provides minimal abstraction from hardware. It requires managing **how** operations are executed at the machine level.
    
    - Example: Assembly Language, Machine Code
    - Code Example (Assembly - x86):
        
        ```assembly
        section .data
        msg db "Hello, World!", 0
        section .text
        global _start
        _start:
            mov rax, 1
            mov rdi, 1
            mov rsi, msg
            mov rdx, 13
            syscall
            mov rax, 60
            xor rdi, rdi
            syscall
        ```
        
    - Requires explicit control of CPU registers, memory, and system calls.

---

### **2. Machine Dependency**

- **HLL:** Machine-independent (portable).
    
    - Can run on different processors with minimal or no changes.
    - Example: C++ code can be compiled for Windows, Linux, or macOS.
- **LLL:** Machine-dependent.
    
    - Code is written specifically for one processor architecture (e.g., x86, ARM).
    - Example: Assembly instructions differ between Intel and ARM processors.

---

### **3. Human Readability**

- **HLL:** Uses English-like syntax, making it easy to read and write.
    - Example (Python):
        
        ```python
        a = 10
        b = 20
        sum = a + b
        print(sum)
        ```
        
- **LLL:** Uses mnemonics and numbers, making it harder to read.
    - Example (Assembly):
        
        ```assembly
        MOV AX, 10
        ADD AX, 20
        ```
        

---

### **4. Memory Management**

- **HLL:** Automatically handles memory allocation (e.g., garbage collection in Python, Java).
- **LLL:** Requires manual memory management (e.g., using pointers in C, `malloc()` and `free()` in C).

---

### **5. Execution Speed**

- **HLL:** Slightly slower since it requires compilation or interpretation before execution.
- **LLL:** Faster because it interacts directly with hardware without additional translation layers.

---

### **6. Translation Method**

- **HLL:** Requires a **compiler** (C++, Java) or **interpreter** (Python, JavaScript).
- **LLL:** Either runs directly as machine code or requires an **assembler** (Assembly).

---

### **Examples of Programming Languages by Level**

|Level|Examples|
|---|---|
|**High-Level**|Python, Java, C++, JavaScript, Ruby|
|**Mid-Level**|C (closer to hardware but still readable)|
|**Low-Level**|Assembly Language, Machine Code (binary)|

---

### **Key Takeaway**

If a language is **easier for humans to read, portable, and abstracts hardware details**, it is **high-level**. If it requires **direct interaction with hardware, manual memory management, and machine-specific instructions**, it is **low-level**.

Would you like to see examples comparing the same task in different language levels?

---
# Building Blocks of Programming
Every programming language, including C++, Python, and JavaScript, is built upon fundamental building blocks that define how code is structured and executed. These building blocks include:

### **1. Syntax**

The set of rules that define how programs should be written in a particular language (e.g.: how statements are terminated, indentation rules, etc.).

### **2. Variables and Data Types**

- **Variables:** Named storage locations for data.
- **Data Types:** Define the type of data a variable can store (e.g. `int`, `float`, `char` in C++).

### **3. Operators**

Symbols that perform operations on variables and values. Types include:

- **Arithmetic Operators** (`+`, `-`, `*`, `/`, `%`)
- **Relational Operators** (`==`, `!=`, `<`, `>`, `<=`, `>=`)
- **Logical Operators** (`&&`, `||`, `!`)
- **Bitwise Operators** (`&`, `|`, `^`, `<<`, `>>`)

### **4. Control Flow Statements**

These determine the flow of execution:

- **Conditional Statements** (`if`, `else if`, `switch-case`)
- **Loops** (`for`, `while`, `do-while`)
- **Jump Statements** (`break`, `continue`, `goto`, `return`)

### **5. Functions and Procedures**

- Reusable blocks of code that perform a specific task.
- Can accept parameters and return values.

### **6. Data Structures**

Organized ways to store and manipulate data efficiently, including:

- **Arrays** (fixed-size collections of elements)
- **Lists, Stacks, Queues** (dynamic collections)
- **Dictionaries (Maps, Hash Tables)** (key-value pairs)

### **7. Memory Management**

- **Static vs. Dynamic Memory Allocation**
- **Garbage Collection (Automatic in some languages like Python, manual in C++ with `new` and `delete`)**

### **8. Object-Oriented Programming (OOP) Concepts (if applicable)**

- **Classes and Objects** (blueprints for creating instances)
- **Encapsulation, Abstraction, Inheritance, and Polymorphism**

### **9. File Handling**

- Reading from and writing to files using streams.

### **10. Libraries and Frameworks**

- Built-in and external code modules that provide additional functionality (e.g., `math.h` in C++, `numpy` in Python).


---
# C++ Character Set
The C++ Character set consists of all the valid characters that can be used in the language while programming and they are classified in to the following types :

### 1. **Letters (Alphabets)**

- Uppercase: `A-Z`
- Lowercase: `a-z`
- C++ is case-sensitive, meaning `A` and `a` are treated as different characters.

### 2. **Digits**

- `0-9`

### 3. **Special Characters (Symbols)**

These are used for various operations in C++:

```
~ ` ! @ # $ % ^ & * ( ) _ - + = { } [ ] | \ : ; " ' < > , . ? /
```

### 4. **Whitespace Characters**

- Space ( )
- Tab (`\t`)
- Newline (`\n`)
- Carriage return (`\r`)

### 5. **Escape Sequences**

These represent special characters using a backslash (`\`):

```
\n  (Newline)
\t  (Tab)
\r  (Carriage return)
\b  (Backspace)
\f  (Form feed)
\v  (Vertical tab)
\\  (Backslash)
\'  (Single quote)
\"  (Double quote)
\?  (Question mark)
\0  (Null character)
```

### 6. **Operators**

- Arithmetic: `+ - * / %`
- Relational: `== != < > <= >=`
- Logical: `&& || !`
- Bitwise: `& | ^ ~ << >>`
- Assignment: `= += -= *= /= %= &= |= ^= <<= >>=`
- Increment/Decrement: `++ --`
- Other: `sizeof`, `.*`, `->*`, `new`, `delete`

### 7. **Identifiers and Keywords**

- Identifiers: User-defined names (e.g., variables, functions).
- Keywords: Reserved words in C++ (e.g., `int`, `float`, `return`, `if`, `else`).

---
# Token 
Tokens are the smallest individual units of a program.
C++ has the following tokens :
* Keywords
* Identifiers
* Constants 
* String
* Operators 
A C++ program is written with the use of these tokens along with white spaces and the syntax of the language.

---
## Keywords 
* Implement special language features 
* Are explicitly reserved identifiers
* Can't be used as names 
C++ has a set of **reserved keywords** that cannot be used as identifiers (variable names, function names, etc.). These keywords are categorized as follows:

### **1. Control Flow Keywords**

- `if`
- `else`
- `switch`
- `case`
- `default`
- `while`
- `do`
- `for`
- `break`
- `continue`
- `return`
- `goto`

### **2. Data Types and Type Modifiers**

- `int`
- `char`
- `float`
- `double`
- `void`
- `bool`
- `wchar_t`
- `short`
- `long`
- `signed`
- `unsigned`
- `auto`
- `decltype`

### **3. Storage Class Specifiers**

- `static`
- `extern`
- `register`
- `mutable`
- `thread_local`

### **4. Access Specifiers (OOP)**

- `public`
- `private`
- `protected`

### **5. Class & Object-Oriented Keywords**

- `class`
- `struct`
- `union`
- `this`
- `friend`
- `virtual`
- `override`
- `final`
- `explicit`

### **6. Exception Handling**

- `try`
- `catch`
- `throw`
- `noexcept`

### **7. Memory Management**

- `new`
- `delete`

### **8. Namespace and Scope**

- `namespace`
- `using`
- `::` (scope resolution operator)

### **9. Function Specifiers**

- `inline`
- `constexpr`

### **10. Operators**

- `sizeof`
- `typeid`
- `dynamic_cast`
- `static_cast`
- `const_cast`
- `reinterpret_cast`
- `operator`

### **11. Template and Generic Programming**

- `template`
- `typename`
- `concept` _(C++20)_
- `requires` _(C++20)_

### **12. Miscellaneous Keywords**

- `enum`
- `typedef`
- `constexpr`
- `const`
- `volatile`
- `alignas`
- `alignof`
- `static_assert`
- `export`
- `asm`

### **13. Coroutines (C++20)**

- `co_await`
- `co_yield`
- `co_return`

### **14. New Keywords in C++11, C++14, C++17, and C++20**

- `char16_t` _(C++11)_
- `char32_t` _(C++11)_
- `nullptr` _(C++11)_
- `concept` _(C++20)_
- `requires` _(C++20)_

These keywords are essential for C++ programming, and trying to use them as identifiers will result in compilation errors.

---
## Identifier and Constant 

#### **Identifiers in C++**

In C++, an **identifier** is the name used to identify variables, functions, arrays, classes, objects, and other user-defined elements in a program.

#### **Rules for Naming Identifiers**

1. **Must begin with a letter (A-Z or a-z) or an underscore `_`**    
    - ✅ Valid: `name`, `_variable`, `MyClass`
    - ❌ Invalid: `1variable`, `-temp`
2. **Can not begin with a number**  
    - ✅ Valid: `var1`, `count_123`, `_x`
    - ❌ Invalid: `@data`, `user-name` (contains special characters)
3. **Cannot be a C++ keyword**    
    - ❌ Invalid: `int`, `while`, `return` (reserved keywords)
    - ✅ Valid: `IntValue`, `returnValue`
4. **Case-sensitive**    
    - `Student` and `student` are different identifiers.
5. **No spaces allowed**
    
    - ❌ Invalid: `my variable`
    - ✅ Valid: `my_variable`, `myVariable`
6. **Should be meaningful and descriptive**    
    - ✅ Preferred: `totalMarks`, `userName`
    - ❌ Avoid: `a`, `temp1` (unless context is clear)

#### **Examples of Valid Identifiers**

```cpp
int age;
float salary;
char _grade;
double totalMarks;
```

Identifiers are essential in C++ programming as they provide meaningful names for data and functions, making the code readable and maintainable.

#### **Constants in C++**

In C++, **constants** are fixed values that do not change during the execution of a program. They can be of different types, such as integer, floating-point, character, or string.

---

## **Types of Constants in C++**

### **1. Literal Constants**

These are direct values assigned in the code.

#### **Examples:**

```cpp
int x = 10;         // Integer constant
float pi = 3.14;    // Floating-point constant
char grade = 'A';   // Character constant
string name = "John"; // String constant
```

---

### **2. `const` Keyword**

The `const` keyword is used to define a constant variable whose value cannot be changed.

#### **Example:**

```cpp
const float PI = 3.14159;
PI = 3.2; // ❌ Error: Assignment to a constant variable is not allowed
```

---

### **3. `#define` Preprocessor Directive**

The `#define` macro defines a constant before compilation.

#### **Example:**

```cpp
#define PI 3.14159
int radius = 5;
float area = PI * radius * radius;  // Works like a constant
```

- No semicolon (`;`) after `#define`
- No type specification

---

### **4. `constexpr` (C++11 and later)**

The `constexpr` keyword allows defining compile-time constants.

#### **Example:**

```cpp
constexpr int MAX = 100;
```

- Faster than `const` because it ensures compile-time evaluation.

---

## **Key Differences**

|Type|Mutable?|Evaluated at Compile-Time?|Scope|
|---|---|---|---|
|`const`|❌ No|✅ Yes (mostly)|Block/Function|
|`#define`|❌ No|✅ Yes|Global|
|`constexpr`|❌ No|✅ Always|Block/Function|

Using constants improves **code readability**, **prevents accidental changes**, and **optimizes performance**.

---
## **Operators in C++**

Operators in C++ are special symbols used to perform operations on variables and values. C++ supports a wide variety of operators, which are categorized as follows:

---

## **1. Arithmetic Operators**

These operators perform mathematical operations.

|Operator|Description|Example|
|---|---|---|
|`+`|Addition|`a + b`|
|`-`|Subtraction|`a - b`|
|`*`|Multiplication|`a * b`|
|`/`|Division|`a / b` (integer division if both operands are integers)|
|`%`|Modulus (Remainder)|`a % b` (only for integers)|

**Example:**

```cpp
int a = 10, b = 3;
cout << a + b;  // Output: 13
cout << a % b;  // Output: 1
```

---

## **2. Relational (Comparison) Operators**

These operators compare two values and return `true` (1) or `false` (0).

|Operator|Description|Example|
|---|---|---|
|`==`|Equal to|`a == b`|
|`!=`|Not equal to|`a != b`|
|`>`|Greater than|`a > b`|
|`<`|Less than|`a < b`|
|`>=`|Greater than or equal to|`a >= b`|
|`<=`|Less than or equal to|`a <= b`|

**Example:**

```cpp
int a = 5, b = 10;
cout << (a > b);  // Output: 0 (false)
```

---

## **3. Logical Operators**

These are used for logical operations, mostly in conditions.

|Operator|Description|Example|
|---|---|---|
|`&&`|Logical AND|`(a > 5 && b < 10)`|
|`||`|
|`!`|Logical NOT|`!(a == b)`|

**Example:**

```cpp
int a = 5, b = 10;
cout << (a < b && b > 5);  // Output: 1 (true)
```

---

## **4. Bitwise Operators**

These operate at the binary level.

|Operator|Description|Example|
|---|---|---|
|`&`|Bitwise AND|`a & b`|
|`|`|Bitwise OR|
|`^`|Bitwise XOR|`a ^ b`|
|`~`|Bitwise NOT|`~a`|
|`<<`|Left shift|`a << 2`|
|`>>`|Right shift|`a >> 2`|

**Example:**

```cpp
int a = 5, b = 3;
cout << (a & b);  // Output: 1 (Bitwise AND)
```

---

## **5. Assignment Operators**

Used to assign values.

|Operator|Description|Example|
|---|---|---|
|`=`|Assign|`a = b`|
|`+=`|Add and assign|`a += b` (same as `a = a + b`)|
|`-=`|Subtract and assign|`a -= b`|
|`*=`|Multiply and assign|`a *= b`|
|`/=`|Divide and assign|`a /= b`|
|`%=`|Modulus and assign|`a %= b`|

**Example:**

```cpp
int a = 10;
a += 5;   // a = a + 5 → a = 15
```

---

## **6. Increment and Decrement Operators**

Used to increase or decrease a value by 1.

|Operator|Description|Example|
|---|---|---|
|`++`|Increment|`a++` or `++a`|
|`--`|Decrement|`a--` or `--a`|

**Example:**

```cpp
int a = 5;
cout << a++;  // Output: 5 (post-increment: use first, then increase)
cout << ++a;  // Output: 7 (pre-increment: increase first, then use)
```

---

## **7. Ternary Operator**

A shorthand for `if-else`.

|Operator|Description|Example|
|---|---|---|
|`?:`|Conditional operator|`x = (a > b) ? a : b;`|

**Example:**

```cpp
int a = 10, b = 20;
int max = (a > b) ? a : b;
cout << max;  // Output: 20
```

---

## **8. Type Casting Operator**

Used to convert one data type into another.

|Operator|Description|Example|
|---|---|---|
|`(type)`|Type casting|`float x = (float) a / b;`|

**Example:**

```cpp
int a = 10, b = 3;
float result = (float)a / b;  // Output: 3.3333
```

---

## **9. Scope Resolution Operator (`::`)**

Used to define a function outside a class or access a global variable inside a function.

**Example:**

```cpp
#include <iostream>
using namespace std;
int x = 10; // Global variable

int main() {
    int x = 20; // Local variable
    cout << ::x; // Output: 10 (Accessing global variable)
}
```

---

## **10. `sizeof` Operator**

Returns the size of a data type or variable in bytes.

**Example:**

```cpp
cout << sizeof(int);  // Output: 4 (depends on system architecture)
```

---

## **11. Pointer Operators**

Used to work with pointers.

|Operator|Description|Example|
|---|---|---|
|`&`|Address-of|`int *p = &a;`|
|`*`|Dereference|`int x = *p;`|

**Example:**

```cpp
int a = 10;
int *ptr = &a;
cout << *ptr;  // Output: 10
```

---

## **12. New and Delete Operators**

Used for dynamic memory allocation.

**Example:**

```cpp
int *p = new int(5);  // Allocating memory
delete p;             // Freeing memory
```

---

## **Summary Table**

|Operator Type|Examples|
|---|---|
|Arithmetic|`+ - * / %`|
|Relational|`== != > < >= <=`|
|Logical|`&&|
|Bitwise|`&|
|Assignment|`= += -= *= /= %=`|
|Increment/Decrement|`++ --`|
|Ternary|`?:`|
|Type Casting|`(type)`|
|Scope Resolution|`::`|
|`sizeof`|`sizeof(type)`|
|Pointer|`& *`|
|Memory Allocation|`new delete`|
## **Unary Operators in C++**

Unary operators in C++ are operators that operate on a **single operand**. These operators perform operations such as incrementing, decrementing, negating, or getting the address of a variable.

---

## **Types of Unary Operators in C++**

### **1. Increment (`++`) and Decrement (`--`) Operators**

These operators are used to increase or decrease the value of a variable by **1**.

#### **Pre-Increment (`++x`)**

- Increases the value **before** using it in an expression.

#### **Post-Increment (`x++`)**

- Increases the value **after** using it in an expression.

#### **Pre-Decrement (`--x`)**

- Decreases the value **before** using it.

#### **Post-Decrement (`x--`)**

- Decreases the value **after** using it.

#### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;

    cout << ++x << endl; // Output: 6 (pre-increment)
    cout << x++ << endl; // Output: 6 (post-increment, x becomes 7 after this line)
    cout << x << endl;   // Output: 7

    return 0;
}
```

---

### **2. Unary Minus (`-`)**

This operator **negates** the value of an operand.

#### **Example:**

```cpp
int a = 10;
int b = -a; // b becomes -10
```

---

### **3. Logical NOT (`!`)**

This operator **inverts** a boolean value (`true` becomes `false`, and vice versa).

#### **Example:**

```cpp
bool isAvailable = false;
cout << !isAvailable; // Output: 1 (true)
```

---

### **4. Address-of (`&`)**

This operator returns the **memory address** of a variable.

#### **Example:**

```cpp
int x = 10;
cout << &x; // Outputs the memory address of x
```

---

### **5. Dereference (`*`)**

Used with pointers to get the **value stored at the address**.

#### **Example:**

```cpp
int x = 10;
int *ptr = &x;
cout << *ptr; // Output: 10 (value at address stored in ptr)
```

---

### **6. `sizeof` Operator**

Returns the **size (in bytes)** of a data type or variable.

#### **Example:**

```cpp
cout << sizeof(int); // Output: 4 (on most systems)
```

---

### **Summary Table**

|Operator|Description|Example|
|---|---|---|
|`++`|Pre/Post-Increment|`++x, x++`|
|`--`|Pre/Post-Decrement|`--x, x--`|
|`-`|Unary Minus (negation)|`-x`|
|`!`|Logical NOT|`!x`|
|`&`|Address-of|`&x`|
|`*`|Dereference|`*ptr`|
|`sizeof`|Size of a variable/type|`sizeof(x)`|

---
### **Cascading of I/O Operators in C++**

Cascading of Input (`>>`) and Output (`<<`) operators in C++ allows multiple operations to be performed in a single statement. This makes code more concise and readable.

---

## **1. Cascading of Output (`<<`) Operator**

The `<<` operator is used with `cout` to print multiple values in a **single statement**.

### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float marks = 95.5;

    cout << "Age: " << age << ", Marks: " << marks << endl;
    
    return 0;
}
```

### **Explanation:**

- The `<<` operator is **cascaded**, meaning multiple `<<` operators are used in a single statement.
- The output will be:
    
    ```
    Age: 20, Marks: 95.5
    ```
    

---

## **2. Cascading of Input (`>>`) Operator**

The `>>` operator is used with `cin` to take multiple inputs in a **single statement**.

### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "You entered: " << a << ", " << b << ", " << c << endl;
    
    return 0;
}
```

### **Explanation:**

- The `>>` operator is **cascaded** to take multiple inputs in one statement.
- If the user inputs `5 10 15`, the output will be:
    
    ```
    You entered: 5, 10, 15
    ```
    

---

> [!TIP] BTW
> 
> (>>) operator in c++ is called the extraction operator
> (<<) operator in c++ is called the insertion operator 

---
## **3. Why Cascading Works?**

- The `<<` and `>>` operators return the `ostream` and `istream` objects (`cout` and `cin`).
- Since `cout` and `cin` return **themselves** after each operation, additional `<<` or `>>` can be used in a **chain**.

---

## **4. Cascading with Member Functions**

C++ allows operator overloading for custom classes to support cascading.

### **Example: Overloading `<<` for a Custom Class**

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Overloading << operator
    friend ostream& operator<<(ostream& os, const Student& s) {
        os << "Name: " << s.name << ", Age: " << s.age;
        return os;
    }
};

int main() {
    Student s1 = {"John", 21};
    cout << s1 << endl; // Works due to operator overloading
    return 0;
}
```

### **Output:**

```
Name: John, Age: 21
```

---

## **Conclusion**

- Cascading makes input/output operations more **concise** and **efficient**.
- It works because `cin` and `cout` return **references** to their respective stream objects.
- It is widely used in **chaining multiple inputs/outputs** in a single statement.

🚀 **Cascading improves code readability and reduces redundancy in I/O operations!**


---
# Compilation Linking and Execution


When you write and run a C++ program, it goes through **three major stages**: **Compilation, Linking, and Execution**. Each stage plays a crucial role in converting human-readable code into a machine-executable program.

---

## **1. Compilation**

Compilation is the process of converting **C++ source code** into **machine code (object code)**. It is done by the **compiler** (`g++`, `clang`, `MSVC`, etc.).

### **Steps in Compilation:**

1. **Preprocessing:**
    
    - The **preprocessor (`#include, #define`)** expands macros, includes header files, and removes comments.
```c++
#include <iostream>
```
1. **Compilation:**
    
    - The compiler converts the expanded **C++ code into assembly language**.
2. **Assembly:**
    
    - The assembler converts the assembly code into **machine code (object file - `.o` or `.obj`)**.

### **Example:**

```cpp
g++ -c program.cpp   // Generates program.o (object file)
```

---

## **2. Linking**

Linking is the process of combining **multiple object files** and **library files** into a single executable file.

### **Tasks in Linking:**

- Resolves **function calls** and links them to their definitions (e.g., `cout` comes from `iostream`).
- Merges standard library files (like `libstdc++` for C++).
- Generates the final executable file (e.g., `a.exe` or `a.out`).

### **Example:**

```cpp
g++ program.o -o program   // Creates an executable file 'program'
```

---

## **3. Execution**

Execution is the process where the **operating system** loads the program into memory and runs it.

### **Steps in Execution:**

1. **Loading:** The OS loads the program into **RAM**.
2. **Runtime Execution:** The CPU executes instructions sequentially.
3. **Termination:** The program stops when `return 0;` or `exit()` is reached.

### **Example:**

```cpp
./program   // Runs the executable in Linux
program.exe // Runs the executable in Windows
```

---

## **Summary Table**

|Stage|Description|Output File|
|---|---|---|
|**Compilation**|Converts C++ code to object file|`.o` or `.obj`|
|**Linking**|Merges object files & libraries|`.exe` or `.out`|
|**Execution**|Runs the final executable|Program runs|

---

## **Diagram Representation**

```
C++ Source Code (program.cpp)
       ↓
Preprocessing (Expands macros, includes headers)
       ↓
Compilation (Converts code to assembly)
       ↓
Assembly (Creates object file: program.o)
       ↓
Linking (Combines object files, resolves function calls)
       ↓
Executable File (program.exe or a.out)
       ↓
Execution (OS loads and runs the program)
```

---

## **Example Workflow (Using g++)**

```sh
g++ -c main.cpp          # Step 1: Compilation (creates main.o)
g++ main.o -o main       # Step 2: Linking (creates executable main)
./main                   # Step 3: Execution (runs the program)
```

---

## **Key Takeaways**

- **Compilation:** Converts C++ source code into an object file.
- **Linking:** Combines object files into an executable.
- **Execution:** Runs the executable on the OS.

🚀 **Understanding these stages helps in debugging errors related to compilation (`syntax errors`), linking (`undefined references`), and runtime (`segmentation faults`).**



---
# **Data Types in C++**

Data types in C++ define the **type of data** a variable can store. C++ provides a variety of **built-in, derived, and user-defined** data types.

---

## **1. Built-in Data Types (Primitive Data Types)**

These are fundamental data types provided by C++.

|Data Type|Size (Typical)|Description|
|---|---|---|
|`int`|4 bytes|Stores integers (whole numbers)|
|`float`|4 bytes|Stores floating-point numbers (decimals)|
|`double`|8 bytes|Stores large floating-point numbers|
|`char`|1 byte|Stores a single character (`'A'`, `'B'`, etc.)|
|`bool`|1 byte|Stores `true` or `false`|
|`void`|0 bytes|Represents "no type" (used for functions)|
|`wchar_t`|2 or 4 bytes|Stores wide characters (Unicode)|

### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.75;
    double c = 10.98765;
    char d = 'A';
    bool e = true;

    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Double: " << c << endl;
    cout << "Character: " << d << endl;
    cout << "Boolean: " << e << endl;

    return 0;
}
```

---

## **2. Derived Data Types**

These are built from fundamental types.

|Data Type|Description|
|---|---|
|`array`|Collection of elements of the same type|
|`pointer`|Stores memory address of another variable|
|`reference`|Alias for another variable|
|`function`|Used to define functions|

### **Example of an Array:**

```cpp
int numbers[3] = {10, 20, 30};
cout << numbers[1]; // Output: 20
```

### **Example of a Pointer:**

```cpp
int x = 10;
int* ptr = &x;
cout << *ptr; // Output: 10
```

---

## **3. User-Defined Data Types**

These are created using C++ features.

|Data Type|Description|
|---|---|
|`struct`|Groups multiple variables together|
|`class`|Blueprint for creating objects (OOP)|
|`union`|Similar to struct, but shares memory for all members|
|`enum`|Defines a set of named integer constants|
|`typedef` & `using`|Creates an alias for an existing type|

### **Example of a `struct`:**

```cpp
struct Student {
    string name;
    int age;
};

Student s1 = {"John", 20};
cout << s1.name; // Output: John
```

### **Example of an `enum`:**

```cpp
enum Color {Red, Green, Blue};
Color c = Green;
cout << c; // Output: 1 (index of Green)
```

---

## **4. Modifiers in Data Types**

C++ allows modifying the size of primitive data types.

|Modifier|Description|
|---|---|
|`signed`|Default for integers (can store positive & negative)|
|`unsigned`|Only stores positive values|
|`short`|Reduces storage size (e.g., `short int`)|
|`long`|Increases storage size (e.g., `long int`)|

### **Example of Modifiers:**

```cpp
unsigned int x = 100;
short int y = -10;
long long int z = 1000000000;

cout << x << " " << y << " " << z;
```

---

## **5. `sizeof` Operator**

To check the size of any data type.

### **Example:**

```cpp
cout << "Size of int: " << sizeof(int) << " bytes";
cout << "Size of double: " << sizeof(double) << " bytes";
```

---

## **Summary**

1. **Primitive types**: `int`, `float`, `double`, `char`, `bool`, `void`.
2. **Derived types**: Arrays, pointers, references, functions.
3. **User-defined types**: `struct`, `class`, `union`, `enum`.
4. **Modifiers**: `signed`, `unsigned`, `short`, `long`.
5. **Use `sizeof()` to check memory size**.

💡 **Understanding data types is crucial for memory-efficient programming in C++!** 🚀

---
# **Constants in C++**

Constants are **fixed values** that **do not change** during the execution of a program. C++ supports different types of constants:

---

## **1. Integer Constants**

Integer constants are **whole numbers** without decimal points. They can be:

- **Decimal (Base 10)** → Example: `10, 250, -45`
- **Octal (Base 8, starts with `0`)** → Example: `075` (Decimal 61)
- **Hexadecimal (Base 16, starts with `0x`)** → Example: `0x1A` (Decimal 26)

### **Example:**

```cpp
int a = 100;  // Decimal constant
int b = 075;  // Octal constant (61 in decimal)
int c = 0x1A; // Hexadecimal constant (26 in decimal)

cout << a << " " << b << " " << c;
```

---

## **2. Character Constants**

Character constants are **single characters** enclosed in **single quotes (`'` )**.

### **Example:**

```cpp
char ch = 'A';
cout << ch; // Output: A
```

### **Special Character Constants (Escape Sequences)**

|Escape Sequence|Meaning|
|---|---|
|`\n`|Newline (moves to next line)|
|`\t`|Horizontal tab (adds space)|
|`\b`|Backspace (deletes previous character)|
|`\\`|Backslash (`\`)|
|`\'`|Single quote (`'`)|
|`\"`|Double quote (`"`)|
|`\r`|Carriage return (moves cursor to the beginning of the line)|

### **Example:**

```cpp
cout << "Hello\nWorld";  // Prints in two lines
cout << "Hello\tWorld";  // Adds space
cout << "Hello\b!";      // Removes 'o'
```

**Output:**

```
Hello
World
Hello    World
Hell!
```

---

## **3. Floating-Point Constants**

Floating-point constants represent **decimal numbers**. They can be in:

- **Fixed-point notation**: `3.14`, `-0.001`
- **Exponential (scientific) notation**: `1.23e4` (which means `1.23 × 10⁴` = `12300`)

### **Example:**

```cpp
float pi = 3.1415;
double large = 2.56e3;  // 2560.0
cout << pi << " " << large;
```

---

## **4. String Constants**

String constants are a sequence of characters enclosed in **double quotes (`"`)**.

### **Example:**

```cpp
string name = "Alice";
cout << "Hello, " << name;
```

**Output:**

```
Hello, Alice
```

---

## **Summary Table**

|Type|Example|
|---|---|
|Integer Constant|`10, 0x1A, 075`|
|Character Constant|`'A'`, `'\n'`, `'\t'`|
|Floating-Point Constant|`3.14`, `2.5e3`|
|String Constant|`"Hello"`, `"C++ Programming"`|

💡 **Constants improve readability and prevent accidental changes in values!** 🚀

---
# **Access Modifiers in C++**

Access modifiers in C++ **control the visibility and accessibility** of class members (variables and functions). They define how **other parts of the program** can access the members of a class.

---

## **Types of Access Modifiers**

C++ provides **three** access modifiers:

|Access Modifier|Scope|Accessible in Derived Classes?|Accessible Outside the Class?|
|---|---|---|---|
|`private`|Only inside the same class|❌ No|❌ No|
|`protected`|Inside the same class & derived classes|✅ Yes|❌ No|
|`public`|Everywhere|✅ Yes|✅ Yes|

---

## **1. `private` Access Modifier**

- Members declared as `private` **can only be accessed inside the same class**.
- They **cannot be accessed from outside** the class or in derived classes.

### **Example:**

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int age;  // Private member

public:
    void setAge(int a) {  // Public function to modify private member
        age = a;
    }
    void showAge() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;
    // s.age = 20;  // ❌ Error: 'age' is private
    s.setAge(20);  // ✅ Allowed through public function
    s.showAge();   // ✅ Output: Age: 20
    return 0;
}
```

🔹 **Why use `private`?**

- Protects data from **accidental modification**.
- Enforces **data hiding** (important in encapsulation).

---

## **2. `protected` Access Modifier**

- **Similar to `private`, but allows access in derived classes**.
- **Not accessible outside the class**.

### **Example:**

```cpp
class Person {
protected:
    string name;  // Protected member

public:
    void setName(string n) {
        name = n;
    }
};

class Employee : public Person {
public:
    void showName() {
        cout << "Name: " << name << endl;  // ✅ Allowed (protected in base class)
    }
};

int main() {
    Employee e;
    e.setName("Alice");
    e.showName();  // ✅ Output: Name: Alice
    // e.name = "Bob";  // ❌ Error: 'name' is protected
    return 0;
}
```

🔹 **Why use `protected`?**

- Useful in **inheritance** when a derived class needs access to a base class’s members **but not outside access**.

---

## **3. `public` Access Modifier**

- **Members are accessible from anywhere** (inside and outside the class).

### **Example:**

```cpp
class Car {
public:
    string brand;
    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car c;
    c.brand = "Toyota";  // ✅ Allowed
    c.showBrand();       // ✅ Output: Brand: Toyota
    return 0;
}
```

🔹 **Why use `public`?**

- When you want **full accessibility** (e.g., utility functions, public APIs).

---

## **4. Access Modifiers in Inheritance**

When a class is **inherited**, access modifiers affect how base class members behave in the derived class.

|Base Class Access|`public` Inheritance|`protected` Inheritance|`private` Inheritance|
|---|---|---|---|
|`public`|✅ Remains `public`|🔒 Becomes `protected`|🔒 Becomes `private`|
|`protected`|🔒 Remains `protected`|🔒 Remains `protected`|🔒 Becomes `private`|
|`private`|❌ Not inherited|❌ Not inherited|❌ Not inherited|

### **Example:**

```cpp
class A {
protected:
    int x;
};

class B : public A {  // Public Inheritance
public:
    void setX(int val) { x = val; }  // ✅ Allowed
};

class C : protected A {  // Protected Inheritance
public:
    void setX(int val) { x = val; }  // ✅ Allowed
};

int main() {
    B obj1;
    obj1.setX(10);  // ✅ Allowed (public inheritance)

    // C obj2;
    // obj2.setX(20);  // ❌ Error: 'setX' is protected

    return 0;
}
```

🔹 **Why does this matter?**

- Defines **how a derived class** can use base class members.
- Helps **restrict access** as needed.

---

## **Summary Table**

|Modifier|Accessible in Same Class?|Accessible in Derived Class?|Accessible Outside the Class?|
|---|---|---|---|
|`private`|✅ Yes|❌ No|❌ No|
|`protected`|✅ Yes|✅ Yes|❌ No|
|`public`|✅ Yes|✅ Yes|✅ Yes|

🔹 **Key Takeaways**  
✔️ `private`: Used for **data hiding**, ensuring members are only modified through methods.  
✔️ `protected`: Used when inheritance requires access but **not external access**.  
✔️ `public`: Used when **members need to be fully accessible**.

🚀 **Understanding access modifiers is key to writing secure and maintainable C++ code!**


---
# **`const` in C++**

In C++, `const` is a **type qualifier** that **makes a variable, function, or object immutable (unchangeable)**. It ensures **safety** by preventing accidental modifications of data.

---

## **1. `const` with Variables**

A `const` variable **must be initialized** at the time of declaration and **cannot be modified** later.

### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    const int x = 10;
    // x = 20;  // ❌ Error: Cannot modify a const variable
    cout << x;  // ✅ Output: 10
    return 0;
}
```

🔹 **Why use `const`?**

- Prevents accidental modification of values.
- Increases **code safety and readability**.

---

## **2. `const` with Pointers**

There are **three types** of `const` with pointers.

### **(a) Pointer to Constant (`const int* ptr`)**

- The **value** pointed to **cannot** be changed.
- The **pointer itself can** be changed.

```cpp
const int a = 10;
const int b = 20;
const int* ptr = &a;  // ✅ Allowed
// *ptr = 15;  // ❌ Error: Cannot modify a const value
ptr = &b;      // ✅ Allowed (Pointer can change)
```

---

### **(b) Constant Pointer (`int* const ptr`)**

- The **pointer** itself **cannot** change.
- The **value** it points to **can** be changed.

```cpp
int a = 10;
int* const ptr = &a; // ✅ Allowed
*ptr = 15;           // ✅ Allowed (Value can change)
// ptr = &b;         // ❌ Error: Cannot change pointer address
```

---

### **(c) Constant Pointer to Constant (`const int* const ptr`)**

- **Neither** the **value** nor the **pointer** can be changed.

```cpp
const int a = 10;
const int* const ptr = &a; // ✅ Allowed
// *ptr = 15;  // ❌ Error: Cannot modify a const value
// ptr = &b;   // ❌ Error: Cannot change pointer address
```

---

## **3. `const` with Function Parameters**

Using `const` with function parameters ensures that arguments **cannot be modified** inside the function.

### **Example:**

```cpp
void display(const string& name) {
    // name = "New Name";  // ❌ Error: Cannot modify a const parameter
    cout << "Hello, " << name;
}

int main() {
    string myName = "Alice";
    display(myName); // ✅ Allowed
    return 0;
}
```

🔹 **Benefit:**

- Prevents accidental changes to function arguments.
- Improves performance when passing large objects by **reference**.

---

## **4. `const` with Class Members**

- `const` data members must be **initialized in the constructor**.
- `const` member functions **cannot modify object attributes**.

### **Example:**

```cpp
class Demo {
    const int id;
public:
    Demo(int x) : id(x) {} // ✅ `id` initialized in constructor
    void show() const {  // ✅ const function
        cout << "ID: " << id;
        // id = 20;  // ❌ Error: Cannot modify const data member
    }
};

int main() {
    Demo obj(100);
    obj.show(); // ✅ Output: ID: 100
    return 0;
}
```

🔹 **Why use `const` in classes?**

- Ensures **data consistency**.
- Protects **critical attributes** from modification.

---

## **5. `const` with Return Type**

A function returning a `const` value prevents modification of the returned result.

### **Example:**

```cpp
const int getValue() {
    return 42;
}

int main() {
    int x = getValue();
    // getValue() = 50;  // ❌ Error: Cannot modify a const return value
    return 0;
}
```

🔹 **Why use `const` in return values?**

- Prevents accidental modifications of function return values.

---

## **Summary Table**

|Usage|Syntax|Can Change Value?|Can Change Address?|
|---|---|---|---|
|`const` Variable|`const int a = 10;`|❌ No|✅ Yes|
|Pointer to Const|`const int* ptr;`|❌ No|✅ Yes|
|Const Pointer|`int* const ptr;`|✅ Yes|❌ No|
|Const Pointer to Const|`const int* const ptr;`|❌ No|❌ No|
|Const Function Param|`void fun(const int x);`|❌ No|✅ Yes|
|Const Member Function|`void show() const;`|❌ No|✅ Yes|

---

## **Key Takeaways**

✔️ `const` **prevents modification** of variables, parameters, or members.  
✔️ Helps in **protecting data** from accidental changes.  
✔️ **Optimizes performance** by allowing **safe passing of large objects** (e.g., `const string&`).  
✔️ Used with **pointers, function parameters, return types, and class members**.

🚀 **Using `const` makes C++ code safer, more efficient, and easier to debug!**

---
## **Variables in C++**

A **variable** in C++ is a **named storage location** in memory that holds a value.  
Variables **must be declared** before use and can store **different types of data** based on their data type.

---

## **1. Variables of Built-in Data Types**

C++ provides the following **built-in data types**:

|Data Type|Size (Typical)|Description|Example|
|---|---|---|---|
|`int`|4 bytes|Stores whole numbers|`int a = 10;`|
|`float`|4 bytes|Stores decimal numbers (single precision)|`float b = 3.14;`|
|`double`|8 bytes|Stores decimal numbers (double precision)|`double c = 3.14159;`|
|`char`|1 byte|Stores a single character|`char d = 'A';`|
|`bool`|1 byte|Stores `true` or `false`|`bool e = true;`|
|`void`|-|Represents absence of data (used in functions)|`void func();`|

---

## **2. Declaration and Initialization of Variables**

In C++, variables **must be declared before use**.  
**Declaration** specifies the type and name of the variable.  
**Initialization** assigns a value at the time of declaration.

### **Syntax:**

```cpp
datatype variable_name = value;
```

### **Examples:**

```cpp
int age = 20;          // Integer variable
float pi = 3.14;       // Floating point variable
double g = 9.8;        // Double precision floating point
char grade = 'A';      // Character variable
bool isPassed = true;  // Boolean variable
```

### **Multiple Variable Declaration:**

```cpp
int x = 10, y = 20, z = 30;
```

🔹 **Best Practice:** Always initialize variables before using them to avoid **garbage values**.

---

## **3. Assignment Statement**

The **assignment statement (`=`)** is used to assign a value to a variable.

### **Example:**

```cpp
int num;    // Declaration
num = 50;   // Assignment
cout << num;  // Output: 50
```

---

## **4. Variable Scope**

- **Local Variable:** Declared inside a function and accessible only within that function.
- **Global Variable:** Declared outside all functions and accessible throughout the program.

### **Example:**

```cpp
#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable

int main() {
    int localVar = 10;  // Local variable
    cout << "Local: " << localVar << endl;
    cout << "Global: " << globalVar << endl;
    return 0;
}
```

🔹 **Key Point:** Local variables **override** global variables if they share the same name.

---

## **5. Constants (`const`)**

If you don't want a variable's value to change, use `const`.

### **Example:**

```cpp
const float PI = 3.14159;
// PI = 3.14;  // ❌ Error: Cannot modify a const variable
```

---

## **6. Type Modifiers**

C++ allows modifying basic data types using:

- **`short`**, **`long`**, **`signed`**, **`unsigned`**.

|Type|Example|Size (Typical)|Range|
|---|---|---|---|
|`short int`|`short a;`|2 bytes|-32,768 to 32,767|
|`long int`|`long b;`|4 or 8 bytes|-2^31 to 2^31-1|
|`unsigned int`|`unsigned int c;`|4 bytes|0 to 4,294,967,295|

### **Example:**

```cpp
unsigned int positiveNumber = 150;  // Only stores positive values
long long bigNumber = 1234567890;
```

---

## **Summary**

✔ **Declare variables before use.**  
✔ **Initialize variables** to avoid garbage values.  
✔ **Use `const`** for constants.  
✔ **Use proper data types** to optimize memory usage.

🚀 **Understanding variables is the foundation of C++ programming!**

---
### **Type Modifiers in C++: `signed`, `unsigned`, `long`**

Type modifiers in C++ are **used to change the storage size and range of a data type**. The main type modifiers are:

1. `signed`
2. `unsigned`
3. `long`
4. `short`

---

## **1. `signed` and `unsigned`**

- **`signed`**: Can store **both positive and negative** values (default for `int`).
- **`unsigned`**: Can store **only positive** values, which **doubles the positive range**.

### **Example: `signed` vs `unsigned`**

```cpp
#include <iostream>
using namespace std;

int main() {
    signed int a = -10;  // Can store negative numbers
    unsigned int b = 10; // Can only store positive numbers

    // unsigned int c = -5; // ❌ Error: Cannot store negative values in unsigned

    cout << "Signed: " << a << endl;   // Output: -10
    cout << "Unsigned: " << b << endl; // Output: 10

    return 0;
}
```

### **Range Comparison (`int` - 4 bytes)**

|Modifier|Minimum Value|Maximum Value|
|---|---|---|
|`signed int` (default)|-2,147,483,648|2,147,483,647|
|`unsigned int`|0|4,294,967,295|

---

## **2. `long` and `short`**

- **`long`**: Increases the size of an integer type to store **larger values**.
- **`short`**: Reduces the size of an integer to **save memory**.

### **Example: `long` vs `short`**

```cpp
#include <iostream>
using namespace std;

int main() {
    short int s = 32767;  // Max value for short
    long int l = 2147483647; // Max value for long

    cout << "Short: " << s << endl; // Output: 32767
    cout << "Long: " << l << endl;  // Output: 2147483647

    return 0;
}
```

### **Range Comparison (`int` - 4 bytes)**

|Modifier|Size|Minimum Value|Maximum Value|
|---|---|---|---|
|`short int`|2 bytes|-32,768|32,767|
|`int`|4 bytes|-2,147,483,648|2,147,483,647|
|`long int`|4 or 8 bytes|-2,147,483,648|2,147,483,647 (or larger on some systems)|
|`long long int`|8 bytes|-9,223,372,036,854,775,808|9,223,372,036,854,775,807|

---

## **3. Using Modifiers with `char`**

- `signed char`: Stores **-128 to 127**.
- `unsigned char`: Stores **0 to 255**.

```cpp
char c = 'A';          // Default is signed
signed char c1 = -50;  // Can store negatives
unsigned char c2 = 250; // Only positive values
```

---

## **4. Using Modifiers with `double` (`long double`)**

- `long double`: Increases precision for floating-point numbers.

```cpp
long double pi = 3.14159265358979323846;
```

---

## **Key Takeaways**

✔ Use `unsigned` when **negative values are unnecessary**.  
✔ Use `long` for **large integer values**.  
✔ Use `short` to **save memory when dealing with small numbers**.

🚀 **Type modifiers help optimize memory and performance in C++!**

---
# **Operators and Expressions in C++**

Operators in C++ are **symbols** that perform operations on **variables and values**. Expressions are **combinations of variables, operators, and values** that evaluate to a result.

---

## **1. Arithmetic Operators**

These operators perform **mathematical operations**.

|Operator|Operation|Example|Result|
|---|---|---|---|
|`+`|Addition|`a + b`|Sum of `a` and `b`|
|`-`|Subtraction|`a - b`|Difference of `a` and `b`|
|`*`|Multiplication|`a * b`|Product of `a` and `b`|
|`/`|Division|`a / b`|Quotient of `a` and `b`|
|`%`|Modulus|`a % b`|Remainder when `a` is divided by `b`|

### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << "Addition: " << (a + b) << endl;  // Output: 13
    cout << "Subtraction: " << (a - b) << endl;  // Output: 7
    cout << "Multiplication: " << (a * b) << endl;  // Output: 30
    cout << "Division: " << (a / b) << endl;  // Output: 3
    cout << "Modulus: " << (a % b) << endl;  // Output: 1
    return 0;
}
```

🔹 **Note:**

- **`/` (Division)** returns an **integer result** if both operands are integers.
- **`%` (Modulus)** works **only for integers**.

---

## **2. Unary Operators**

Unary operators operate on **a single operand**.

|Operator|Description|Example|
|---|---|---|
|`-`|Negation|`int x = -a;`|
|`++`|Increment (adds 1)|`a++` or `++a`|
|`--`|Decrement (subtracts 1)|`a--` or `--a`|

### **Increment and Decrement Operators**

1. **Prefix (`++a`, `--a`)**: Increments or decrements **before** using the value.
2. **Postfix (`a++`, `a--`)**: Uses the value **before** incrementing or decrementing.

### **Example:**

```cpp
int a = 5, b;
b = ++a;  // Prefix: a becomes 6, then assigned to b
cout << b;  // Output: 6

a = 5;
b = a++;  // Postfix: b is assigned 5, then a becomes 6
cout << b;  // Output: 5
```

---

## **3. Relational Operators**

These compare two values and return **true (`1`) or false (`0`)**.

|Operator|Meaning|Example|
|---|---|---|
|`>`|Greater than|`a > b`|
|`<`|Less than|`a < b`|
|`>=`|Greater than or equal to|`a >= b`|
|`<=`|Less than or equal to|`a <= b`|
|`==`|Equal to|`a == b`|
|`!=`|Not equal to|`a != b`|

### **Example:**

```cpp
int a = 5, b = 10;
cout << (a > b);  // Output: 0 (false)
cout << (a != b); // Output: 1 (true)
```

---

## **4. Logical Operators**

Used to combine multiple conditions, returning **true (1) or false (0)**.

|Operator|Meaning|Example|
|---|---|---|
|`&&`|Logical AND|`(a > 0 && b > 0)`|
|`||`|
|`!`|Logical NOT|`!(a > b)`|

### **Example:**

```cpp
bool x = (5 > 2) && (10 > 5);  // Both conditions are true
cout << x;  // Output: 1

bool y = (5 > 2) || (10 < 5);  // One condition is true
cout << y;  // Output: 1
```

---

## **5. Conditional Operator (`?:`)**

This is a **ternary operator** (has three operands) used as a **shortcut for `if-else` statements**.

### **Syntax:**

```cpp
condition ? expression_if_true : expression_if_false;
```

### **Example:**

```cpp
int a = 10, b = 20;
int min = (a < b) ? a : b;
cout << "Minimum: " << min;  // Output: 10
```

---

## **6. Operator Precedence**

When multiple operators are used in an expression, **precedence** determines which operation is performed first.

|**Precedence**|**Operator**|**Associativity**|
|---|---|---|
|1 (Highest)|`()`, `[]`, `.`|Left to Right|
|2|`++`, `--`, `!`, `-` (Unary)|Right to Left|
|3|`*`, `/`, `%`|Left to Right|
|4|`+`, `-`|Left to Right|
|5|`>`, `<`, `>=`, `<=`|Left to Right|
|6|`==`, `!=`|Left to Right|
|7|`&&`|Left to Right|
|8|`||
|9|`?:` (Conditional)|Right to Left|
|10|`=`, `+=`, `-=`, `*=`|Right to Left|
|11 (Lowest)|`,` (Comma)|Left to Right|

### **Example:**

```cpp
int result = 10 + 2 * 5;  
cout << result;  // Output: 20 (Multiplication happens first)
```

---

## **Summary**

✔ **Arithmetic Operators**: `+`, `-`, `*`, `/`, `%`  
✔ **Unary Operators**: `-`, `++`, `--`  
✔ **Relational Operators**: `>`, `<`, `>=`, `<=`, `==`, `!=`  
✔ **Logical Operators**: `&&`, `||`, `!`  
✔ **Conditional Operator**: `?:`  
✔ **Operator Precedence**: Determines execution order

🚀 **Mastering operators makes your C++ programs more efficient!**

---
# **Automatic Type Conversion in Expressions (Type Promotion) in C++**

### **What is Automatic Type Conversion?**

Automatic type conversion (also called **implicit type conversion** or **type promotion**) occurs when **operands of different data types** are used in an expression. The **smaller data type** is automatically converted to a **larger data type** to prevent data loss.

---

## **1. Type Conversion Rules**

When evaluating expressions, C++ follows these **type promotion** rules:

1. **Integer Promotion**:
    
    - `char` and `short` are **converted to `int`** before performing arithmetic operations.
2. **Float Promotion**:
    
    - `float` is **promoted to `double`** when used in expressions with `double`.
3. **Type Promotion Hierarchy** _(from smallest to largest)_:
    
    ```
    char → short → int → long → long long → float → double → long double
    ```
    
4. **Mixed Data Type Conversion**:
    
    - When **operands of different types** are used, the **smaller type is converted to the larger type** before performing the operation.

---

## **2. Examples of Automatic Type Conversion**

### **Example 1: Integer Promotion**

```cpp
#include <iostream>
using namespace std;

int main() {
    char c = 'A';  // ASCII value of 'A' is 65
    short s = 10;
    int result = c + s;  // char and short are promoted to int

    cout << "Result: " << result;  // Output: 75
    return 0;
}
```

🔹 **Explanation:**

- `char` → `int`, `short` → `int`, then addition is performed.

---

### **Example 2: Mixing `int` and `float`**

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    float y = 2.5;
    float result = x + y;  // int is converted to float

    cout << "Result: " << result;  // Output: 7.5
    return 0;
}
```

🔹 **Explanation:**

- `int` (`x = 5`) is **promoted to `float` (5.0)** before addition with `2.5`.

---

### **Example 3: Mixed Arithmetic with `double`**

```cpp
#include <iostream>
using namespace std;

int main() {
    float a = 3.2;
    double b = 2.5;
    double result = a + b;  // float is promoted to double

    cout << "Result: " << result;  // Output: 5.7
    return 0;
}
```

🔹 **Explanation:**

- `float` (`a = 3.2`) is **promoted to `double` (3.2 in double format)** before addition.

---

## **3. Type Conversion in Assignment**

When assigning a **larger data type to a smaller one**, **data loss may occur**.

### **Example 4: Data Loss in Implicit Conversion**

```cpp
#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    int value = pi;  // Implicit conversion: double → int (fraction is lost)

    cout << "Value: " << value;  // Output: 3
    return 0;
}
```

🔹 **Explanation:**

- `double` (`3.14159`) is **converted to `int` (3)**, losing the decimal part.

---

## **4. Implicit Conversion in Expressions**

If multiple data types exist in an expression, C++ **converts all operands to the largest type**.

### **Example 5: Mixed Data Types**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    char b = 'A';  // ASCII 65
    float c = 5.5;
    double d = 2.2;
    
    double result = a + b + c + d;  // All are promoted to double

    cout << "Result: " << result;  // Output: 82.7
    return 0;
}
```

🔹 **Conversions:**

- `char` → `int` (`65`)
- `int` → `float`
- `float` → `double`
- Final calculation happens in `double`.

---

## **5. Summary of Automatic Type Conversion**

✔ **Smaller types (char, short) convert to `int` before operations.**  
✔ **Operands are converted to the largest type in an expression.**  
✔ **Integer → Float → Double → Long Double** (promotion hierarchy).  
✔ **Assigning a larger type to a smaller one can cause data loss.**

🚀 **Understanding type conversion helps prevent unintended errors in calculations!**

---
# **Type Casting & C++ Shorthand Operators**

## **1. Type Casting in C++**

Type casting is the process of **converting a variable from one data type to another**. There are two types of type casting:

1. **Implicit Type Conversion (Automatic Type Promotion)**
    - Performed automatically by C++ (covered earlier).
2. **Explicit Type Conversion (Type Casting)**
    - Done manually by the programmer.

---

### **A. Explicit Type Casting (Manual Conversion)**

To explicitly convert a value from one type to another, you can use **two methods**:

### **Method 1: C-Style Type Casting**

```cpp
(data_type) value;
```

Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    int intPi = (int) pi;  // Convert double to int

    cout << "Value: " << intPi;  // Output: 3 (decimal part removed)
    return 0;
}
```

---

### **Method 2: C++ `static_cast<>` Operator**

Recommended for **better readability and type safety**.

```cpp
static_cast<new_type>(value);
```

Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    double num = 7.8;
    int x = static_cast<int>(num);  // Convert double to int

    cout << "Converted value: " << x;  // Output: 7
    return 0;
}
```

---

## **2. C++ Shorthand Operators (Compound Assignment Operators)**

Shorthand operators are used to perform an operation and **update a variable in a single step**.

|**Operator**|**Example**|**Equivalent To**|
|---|---|---|
|`+=`|`a += b;`|`a = a + b;`|
|`-=`|`a -= b;`|`a = a - b;`|
|`*=`|`a *= b;`|`a = a * b;`|
|`/=`|`a /= b;`|`a = a / b;`|
|`%=`|`a %= b;`|`a = a % b;`|

---

### **Example 1: Using Shorthand Operators**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;

    a += 5;  // Same as a = a + 5;
    cout << "After += : " << a << endl;  // Output: 15

    a -= 3;  // Same as a = a - 3;
    cout << "After -= : " << a << endl;  // Output: 12

    a *= 2;  // Same as a = a * 2;
    cout << "After *= : " << a << endl;  // Output: 24

    a /= 4;  // Same as a = a / 4;
    cout << "After /= : " << a << endl;  // Output: 6

    a %= 4;  // Same as a = a % 4;
    cout << "After %= : " << a << endl;  // Output: 2

    return 0;
}
```

## **3. Summary**

✔ **Type Casting:**

- **Implicit:** Automatically done by C++ (smaller → larger type).
- **Explicit:** Manually done using `(type)` or `static_cast<type>()`.

✔ **Shorthand Operators:**

- `+=, -=, *=, /=, %=`
- **Saves time and improves code readability.**

🚀 **Using type casting and shorthand operators efficiently makes C++ code cleaner and faster!**

---
# **Conditional Statements & Loops in C++**

C++ provides **conditional statements** to control the flow of execution based on conditions and **loops** to repeat blocks of code.

---

## **1. Conditional Statements**

Conditional statements allow decision-making based on certain conditions.

### **A. `if-else` Statement**

Used when you need to execute a block of code **if a condition is true**, otherwise, execute another block.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) { 
        cout << "Even number" << endl;
    } else { 
        cout << "Odd number" << endl;
    }
    return 0;
}
```

---

### **B. Nested `if-else` Statement**

`if-else` inside another `if-else`.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0)
            cout << "Positive Even Number" << endl;
        else
            cout << "Positive Odd Number" << endl;
    } else {
        cout << "Number is Non-Positive" << endl;
    }
    return 0;
}
```

---

### **C. `switch-case` Statement**

Used when you have multiple conditions and want to execute **only one block**.

```cpp
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
        case 7: cout << "Saturday"; break;
        default: cout << "Invalid day"; // Runs if none of the cases match
    }
    return 0;
}
```

🔹 `break;` ensures only one case executes.  
🔹 `default:` executes if no case matches.

---

### **D. Conditional (Ternary) Operator `?:`**

Short-hand for `if-else`.

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    string result = (x > 0) ? "Positive" : "Negative or Zero";
    cout << "Number is " << result << endl;

    return 0;
}
```

🔹 `(condition) ? expression_if_true : expression_if_false;`

---

### **E. Nested `switch-case`**

A `switch` inside another `switch`.

```cpp
#include <iostream>
using namespace std;

int main() {
    int branch = 1, year = 2; // Example values

    switch (branch) {
        case 1:  // Engineering
            switch (year) {
                case 1: cout << "Basic Engineering Subjects"; break;
                case 2: cout << "Core Engineering Subjects"; break;
                default: cout << "Invalid Year";
            }
            break;
        case 2:  // Medical
            cout << "Medical Course";
            break;
        default:
            cout << "Invalid Branch";
    }

    return 0;
}
```

---

### **F. `break` Statement**

- Used inside `switch` and loops.
- Stops further execution in loops or cases.

Example:

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) break;
    cout << i << " "; // Output: 1 2
}
```

---

## **2. Loops in C++**

Loops **repeat** code execution **until a condition is false**.

### **A. `while` Loop**

Executes **while the condition is true**.

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << i << " "; // Output: 1 2 3 4 5
        i++;
    }
    return 0;
}
```

---

### **B. `do-while` Loop**

- **Executes at least once**, even if the condition is false.
- Useful when user input is required.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    
    do {
        cout << "Enter a number (0 to stop): ";
        cin >> num;
    } while (num != 0);

    cout << "Loop terminated!";
    return 0;
}
```

---

### **C. `for` Loop**

Used when the number of iterations is known.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " "; // Output: 1 2 3 4 5
    }
    return 0;
}
```

🔹 **Structure:**

```cpp
for(initialization; condition; update) {
    // Code to execute
}
```

---

### **D. Nested Loops**

A loop inside another loop.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 2; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    return 0;
}
```

🔹 **Output:**

```
(1,1) (1,2)
(2,1) (2,2)
(3,1) (3,2)
```

---
## ** 🪜 Laddered `if-else` Statement in C++**

A **laddered `if-else` statement** (also called **else-if ladder**) is used when multiple conditions need to be checked sequentially. It helps decide between multiple alternatives where **only one condition executes**.

---

### **Syntax of Laddered `if-else`**

```cpp
if (condition1) {
    // Executes if condition1 is true
} else if (condition2) {
    // Executes if condition2 is true
} else if (condition3) {
    // Executes if condition3 is true
} else {
    // Executes if none of the above conditions are true
}
```

🔹 **Only one block executes**, even if multiple conditions are true.  
🔹 The `else` block is **optional** and executes if no conditions are met.

---

### **Example 1: Checking Grade Based on Marks**

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
```

🔹 **Only one grade is printed**, even if a student qualifies for multiple ranges.

---

### **Example 2: Checking Number Type**

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive Number";
    } else if (num < 0) {
        cout << "Negative Number";
    } else {
        cout << "Zero";
    }

    return 0;
}
```

---

### **When to Use Else-If Ladder?**

✔ When **multiple conditions** need to be checked sequentially.  
✔ When **only one condition** should execute.  
✔ When `switch-case` is not suitable (e.g., range-based checks).

🚀 **Else-if ladders help make decisions efficiently in C++!**

---

## **3. Summary**

✔ **Conditional Statements**

- `if-else`: Executes different blocks based on conditions.
- `switch-case`: Executes one case based on a matching value.
- `?:` (Ternary operator): Short-hand for `if-else`.
- `break`: Exits loops or `switch-case`.

✔ **Loops**

- `while`: Executes **while** condition is `true`.
- `do-while`: Executes **at least once** before checking the condition.
- `for`: Iterates **a fixed number of times**.
- **Nested loops**: Loops inside another loop.

🚀 **Mastering these concepts will help you control program flow efficiently!**


---
# **Functions in C++**

Functions in C++ allow you to break down a large program into smaller, reusable blocks.

---

## **1. Defining a Function in C++**

A function consists of:

- **Return type** (data type of the returned value)
- **Function name**
- **Parameter list** (optional)
- **Function body** (code inside the function)

### **Syntax**

```cpp
returnType functionName(parameters) {
    // Function body
    return value;  // Optional (if returnType is not void)
}
```

---

### **Example: Function Definition and Call**

```cpp
#include <iostream>
using namespace std;

// Function definition
void greet() {
    cout << "Hello, Welcome to C++ Functions!" << endl;
}

int main() {
    greet();  // Function call
    return 0;
}
```

🔹 The function **`greet()`** is called inside `main()`.  
🔹 Since it has **`void`** return type, it does not return any value.

---

## **2. Function Prototype (Declaration)**

A **function prototype** tells the compiler about the function **before its definition**.

### **Syntax**

```cpp
returnType functionName(parameters);  // Prototype
```

💡 **Why use prototypes?**  
✔ Allows defining functions **after `main()`**.  
✔ Helps **separate declaration and definition** in large programs.

### **Example: Function Prototype**

```cpp
#include <iostream>
using namespace std;

// Function prototype
int add(int, int);

int main() {
    int sum = add(5, 10);  // Function call
    cout << "Sum: " << sum << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

🔹 The **prototype `int add(int, int);`** tells the compiler about `add()` before calling it.  
🔹 The **definition** comes after `main()`.

---

## **3. Calling a Function**

A function can be **called** in two ways:

1. **Call by Value** (Default in C++)
2. **Call by Reference**

---

### **A. Call by Value**

- A **copy** of arguments is passed to the function.
- Changes inside the function **do not affect** the original variables.

```cpp
#include <iostream>
using namespace std;

void modify(int x) {
    x = x + 5;  // Changes only local copy
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 10;
    modify(a);
    cout << "Outside function: " << a << endl;  // Remains 10
    return 0;
}
```

🔹 `a` remains `10` because `x` is a **copy** inside the function.

---

### **B. Call by Reference**

- The **actual variable** is passed using references (`&`).
- **Changes affect the original variable**.

```cpp
#include <iostream>
using namespace std;

void modify(int &x) {
    x = x + 5;  // Changes original variable
}

int main() {
    int a = 10;
    modify(a);
    cout << "After function call: " << a << endl;  // Now a = 15
    return 0;
}
```

🔹 Using `&x` passes **reference** (memory location), so `a` is **modified permanently**.

---

## **4. Returning Values from a Function**

A function can return a value using the **`return` statement**.

### **Example: Function Returning a Value**

```cpp
#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int result = square(4);
    cout << "Square: " << result << endl;
    return 0;
}
```

🔹 `square(4)` returns `16`, which is stored in `result`.

---

## **5. Scope Rules of Functions**

Scope defines **where a variable is accessible**.

### **A. Local Variables**

- Declared **inside** a function.
- Accessible **only within** the function.

```cpp
void test() {
    int x = 5;  // Local variable
}
int main() {
    // cout << x;  // ❌ Error: x is not accessible
}
```

---

### **B. Global Variables**

- Declared **outside** functions.
- Accessible **everywhere** in the program.

```cpp
#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable

void display() {
    cout << "Global variable: " << globalVar << endl;
}

int main() {
    display();
    cout << "Accessing in main(): " << globalVar << endl;
    return 0;
}
```

🔹 **Global variables** should be used carefully to **avoid conflicts**.

---

### **C. Static Variables**

- **Retains value** between function calls.
- Declared using `static`.

```cpp
#include <iostream>
using namespace std;

void counter() {
    static int count = 0;  // Static variable
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
```

🔹 Unlike local variables, `count` **does not reset** after each call.

---

## **6. Summary**

✔ **Function Prototype**: Declares function before use.  
✔ **Function Call**: By **value** (copy) or by **reference** (original variable).  
✔ **Return Values**: `return` statement sends data back.  
✔ **Scope Rules**:

- **Local**: Inside function, not accessible outside.
- **Global**: Available everywhere.
- **Static**: Retains value between function calls.

🚀 **Functions help make code modular, reusable, and readable!**



This is the end of Unit 1  Notes 