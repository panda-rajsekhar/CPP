### **Constructors and Destructors in C++**

Constructors and destructors are special member functions in C++ that manage object creation and destruction.

---

## **1. Constructor**

A **constructor** is a special function automatically called when an object is created. Its main purpose is to initialize an object.

### **Key Characteristics of a Constructor**:

- Same name as the class.
    
- No return type (not even `void`).
    
- Can be **parameterized** to allow different ways of initializing an object.
    
- Can have **default arguments** to make some parameters optional.
    

### **Types of Constructors**

### **(i) Default Constructor**

A **default constructor** is a constructor that takes no parameters or has all default parameters. If no constructor is explicitly defined, the compiler provides a default constructor.

#### **Example**:

```cpp
#include <iostream>
using namespace std;

class Example {
public:
    int x;

    // Default constructor
    Example() {
        x = 0;  // Initialize x to 0
        cout << "Default Constructor called!" << endl;
    }
};

int main() {
    Example obj;  // Default constructor is automatically called
    cout << "Value of x: " << obj.x << endl;
    return 0;
}
```

**Output**:

```
Default Constructor called!
Value of x: 0
```

---

### **(ii) Parameterized Constructor**

A **parameterized constructor** allows initializing an object with specific values by passing arguments.

#### **Example**:

```cpp
#include <iostream>
using namespace std;

class Example {
public:
    int x;

    // Parameterized constructor
    Example(int value) {
        x = value;
        cout << "Parameterized Constructor called!" << endl;
    }
};

int main() {
    Example obj(10);  // Constructor with argument
    cout << "Value of x: " << obj.x << endl;
    return 0;
}
```

**Output**:

```
Parameterized Constructor called!
Value of x: 10
```

---

### **(iii) Constructor with Default Arguments**

A constructor can have **default arguments**, which allows it to work as both a default and parameterized constructor.

#### **Example**:

```cpp
#include <iostream>
using namespace std;

class Example {
public:
    int x;

    // Constructor with default arguments
    Example(int value = 5) {
        x = value;
        cout << "Constructor with Default Arguments called!" << endl;
    }
};

int main() {
    Example obj1;     // Uses default argument (5)
    Example obj2(20); // Uses passed value (20)

    cout << "Value of obj1.x: " << obj1.x << endl;
    cout << "Value of obj2.x: " << obj2.x << endl;
    return 0;
}
```

**Output**:

```
Constructor with Default Arguments called!
Constructor with Default Arguments called!
Value of obj1.x: 5
Value of obj2.x: 20
```

---

## **2. Destructor**

A **destructor** is a special function that is automatically called when an object goes out of scope or is explicitly deleted.

### **Key Characteristics of a Destructor**:

- Same name as the class but prefixed with `~` (tilde).
    
- No return type.
    
- No parameters (cannot be overloaded).
    
- Used to free resources (like memory or file handles).
    

#### **Example**:

```cpp
#include <iostream>
using namespace std;

class Example {
public:
    // Constructor
    Example() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Example() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Example obj;  // Constructor is called
    return 0;     // Destructor is called automatically when the program ends
}
```

**Output**:

```
Constructor called!
Destructor called!
```

---

## **3. Friend Function**

A **friend function** is a function that is not a member of a class but can access its private and protected members.

### **Key Points**:

- Defined outside the class but declared inside with the `friend` keyword.
    
- Cannot access members directly (must use an object).
    

#### **Example**:

```cpp
#include <iostream>
using namespace std;

class Example {
private:
    int secret;

public:
    Example(int x) {
        secret = x;
    }

    // Friend function declaration
    friend void showSecret(Example obj);
};

// Friend function definition
void showSecret(Example obj) {
    cout << "Secret value: " << obj.secret << endl;
}

int main() {
    Example obj(42);
    showSecret(obj);  // Friend function can access private data
    return 0;
}
```

**Output**:

```
Secret value: 42
```

---

## **4. Friend Class**

A **friend class** allows another class to access private and protected members of a class.

### **Example**:

```cpp
#include <iostream>
using namespace std;

class Example {
private:
    int secret;

public:
    Example(int x) {
        secret = x;
    }

    // Declare Friend Class
    friend class Helper;
};

class Helper {
public:
    void showSecret(Example obj) {
        cout << "Secret value: " << obj.secret << endl;
    }
};

int main() {
    Example obj(99);
    Helper helper;
    helper.showSecret(obj);  // Friend class accessing private data
    return 0;
}
```

**Output**:

```
Secret value: 99
```

---

## **Summary Table**

| Feature                                | Description                                                |
| -------------------------------------- | ---------------------------------------------------------- |
| **Default Constructor**                | No parameters, initializes object with default values.     |
| **Parameterized Constructor**          | Takes arguments to initialize object with specific values. |
| **Constructor with Default Arguments** | Uses default values if no arguments are provided.          |
| **Destructor**                         | Cleans up resources when an object is destroyed.           |
| **Friend Function**                    | Can access private members of a class but is not a member. |
| **Friend Class**                       | A class that can access private members of another class.  |
