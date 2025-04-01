**Syllabus:  Defining a Structure, declaring structure variables, accessing members of structure, Defining a class, declaring object and accessing class members**

### **Structures and Classes in C++**

In C++, both **structures** (`struct`) and **classes** (`class`) are user-defined data types that group variables and functions under a single entity. The main difference is that `struct` members are **public** by default, whereas `class` members are **private** by default.

---

## **1. Defining a Structure in C++**

A **structure** (`struct`) is a collection of variables (also called **members**) that are grouped together under a single name. This is useful for representing related data logically.

### **Syntax for Defining a Structure**

```cpp
struct StructureName {
    data_type member1;
    data_type member2;
    // More members...
};
```

### **Example**

```cpp
#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;
};
```

Here, `Student` is a structure with three members:

- `name` → stores the student's name.
    
- `age` → stores the student's age.
    
- `marks` → stores the student's marks.
    

---

## **2. Declaring Structure Variables**

Once a structure is defined, we can create **structure variables** using two methods:

### **Method 1: Declaring Along with Definition**

```cpp
struct Student {
    string name;
    int age;
    float marks;
} s1, s2;  // Declaring structure variables
```

### **Method 2: Declaring Separately**

```cpp
struct Student {
    string name;
    int age;
    float marks;
};

Student s1, s2;  // Declaring structure variables separately
```

---

## **3. Accessing Members of a Structure**

The **dot (`.`) operator** is used to access structure members.

### **Example**

```cpp
#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    Student s1; // Declare a structure variable

    // Assign values to structure members
    s1.name = "Alice";
    s1.age = 20;
    s1.marks = 85.5;

    // Access and display structure members
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
```

### **Output**

```
Name: Alice
Age: 20
Marks: 85.5
```

---

## **4. Defining a Class in C++**

A **class** is an advanced version of a structure that supports **data hiding** and **encapsulation** by using access specifiers (`private`, `public`, `protected`).

### **Syntax for Defining a Class**

```cpp
class ClassName {
public:       // Access specifier
    data_type member1;
    data_type member2;
    void memberFunction();  // Member function declaration
};
```

### **Example**

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float marks;

    void display() { // Member function
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};
```

---

## **5. Declaring Objects (Instances of a Class)**

Once a class is defined, we can create objects using the same syntax as structure variables.

### **Method 1: Declaring Objects Inside main()**

```cpp
int main() {
    Student s1;  // Declaring an object

    s1.name = "Alice";
    s1.age = 20;
    s1.marks = 85.5;

    s1.display();  // Calling a member function

    return 0;
}
```

### **Method 2: Declaring Objects Along with Class Definition**

```cpp
class Student {
public:
    string name;
    int age;
    float marks;
} s1, s2;  // Declaring objects globally
```

---

## **6. Accessing Class Members**

Unlike structures, class members are **private by default**. So, to access them, we need to use `public` members and functions.

### **Example: Using a Member Function to Access Private Data**

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float marks;

public:
    // Function to set values
    void setValues(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    // Function to display values
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setValues("Alice", 20, 85.5); // Set values
    s1.display(); // Display values

    return 0;
}
```

### **Output**

```
Name: Alice
Age: 20
Marks: 85.5
```

---

## **7. Key Differences Between Structure and Class in C++**

|Feature|Structure (`struct`)|Class (`class`)|
|---|---|---|
|**Access Control**|Members are **public** by default|Members are **private** by default|
|**Encapsulation**|Less secure, used for simple data storage|More secure, supports data hiding|
|**Function Members**|Can have member functions but usually not used|Typically used with member functions|
|**Inheritance**|Default **public** inheritance|Default **private** inheritance|
|**Use Cases**|Used for simple data structures (e.g., `Point`, `Rectangle`)|Used for Object-Oriented Programming (OOP)|

---

## **Conclusion**

- **Structures** are mainly used for grouping simple data types.
    
- **Classes** provide **data hiding** and **encapsulation**, making them better for **object-oriented programming** (OOP).
    
- **Member functions** are used in classes to manage and protect data.
    
