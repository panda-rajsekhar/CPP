# C++
Cpp programs made are listed here [[Cpp Programs]]


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

The set of rules that define how programs should be written in a particular language (e.g., how statements are terminated, indentation rules, etc.).

### **2. Variables and Data Types**

- **Variables:** Named storage locations for data.
- **Data Types:** Define the type of data a variable can store (e.g., `int`, `float`, `char` in C++).

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

## Declaration : The Assembly Language Code and the new features section  has been taken from ChatGPT
---
## Identifier and Constant 


