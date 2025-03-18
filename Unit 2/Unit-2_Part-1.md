**Syllabus : Array, Structure and Class: One Dimensional Array: Declaration/initialization of One-dimensional array, inputting array elements, accessing array elements, Two dimensional Array: Declaration/initialization of a two-dimensional array, inputting array elements accessing array elements.**

# **Arrays, Structures, and Classes in C++**

## **1. Arrays in C++**

An **array** is a collection of elements of the same data type stored in **contiguous memory locations**.

### **1.1 One-Dimensional Arrays**

A **one-dimensional array** is a list of elements stored in a linear fashion.

---

### **Declaration and Initialization of One-Dimensional Arrays**

#### **Syntax**

```cpp
data_type array_name[size];  // Declaration
```

#### **Example**

```cpp
int numbers[5];  // Declares an array of 5 integers
```

#### **Initialization at the Time of Declaration**

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

🔹 If we **omit the size**, C++ **automatically** determines it:

```cpp
int numbers[] = {10, 20, 30, 40, 50};  // Size = 5
```

---

### **1.2 Inputting and Accessing One-Dimensional Array Elements**

We use a **loop** to read and print array elements.

#### **Example: Taking User Input and Printing Elements**

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Input array elements
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Display array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

🔹 **Array index starts from `0`**, so `arr[0]` is the first element, and `arr[4]` is the last.

---

### **1.3 Two-Dimensional Arrays**

A **two-dimensional array** stores elements in a **row-column (matrix-like) format**.

---

### **Declaration and Initialization of Two-Dimensional Arrays**

#### **Syntax**

```cpp
data_type array_name[rows][columns];
```

#### **Example**

```cpp
int matrix[3][3];  // Declares a 3x3 array
```

#### **Initializing While Declaring**

```cpp
int matrix[2][3] = {
    {1, 2, 3}, 
    {4, 5, 6}
};
```

This **represents**:

```
1  2  3
4  5  6
```

---

### **1.4 Inputting and Accessing Two-Dimensional Array Elements**

#### **Example: Taking User Input and Printing Elements**

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][2];

    // Input elements
    cout << "Enter 4 elements for 2x2 matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display elements
    cout << "Matrix elements:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

🔹 **Nested loops** are used to **traverse rows and columns**.  
🔹 The `endl` ensures proper row formatting.

---

## **2. Structures in C++**

A **structure (`struct`)** is a user-defined data type that groups different variables.

### **2.1 Declaring and Using a Structure**

#### **Syntax**

```cpp
struct StructureName {
    data_type var1;
    data_type var2;
};
```

#### **Example**

```cpp
#include <iostream>
using namespace std;

// Define a structure
struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    // Declare a structure variable
    Student s1 = {"John", 20, 85.5};

    // Access structure members
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
```

🔹 **Different data types** (`string`, `int`, `float`) are grouped under **one unit**.  
🔹 **Access members** using the `.` (dot) operator.

---

## **3. Classes in C++**

A **class** is an advanced version of a `struct`, with **data** (variables) and **methods** (functions) inside.

### **3.1 Defining and Using a Class**

#### **Syntax**

```cpp
class ClassName {
public:      // Access modifier
    data_type variable;
    
    void method() {
        // Function inside class
    }
};
```

---

#### **Example**

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    // Method to display details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Creating object
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2023;

    // Calling method
    myCar.display();

    return 0;
}
```

🔹 The **class has variables (`brand`, `year`) and a method (`display()`)**.  
🔹 The **object `myCar`** is used to **access members**.

---

## **4. Summary**

|**Concept**|**Key Points**|
|---|---|
|**One-Dimensional Arrays**|Stores data linearly, accessed using `index`.|
|**Two-Dimensional Arrays**|Stores data in row-column format (like matrices).|
|**Structures (`struct`)**|Groups different data types into a single unit.|
|**Classes**|Advanced `struct` with methods and access control (`public`, `private`).|

🚀 **Arrays store multiple values efficiently, structures group different data, and classes add object-oriented programming features!**


*This file is yet to be modified*