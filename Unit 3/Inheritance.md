### **Inheritance in C++**

Inheritance is a fundamental feature of Object-Oriented Programming (OOP) that allows a class (derived class) to acquire the properties and behavior of another class (base class). It promotes code reusability and hierarchical relationships.

---

## **1. Derived Class Declaration**

A **derived class** is created using the following syntax:

```cpp
class Base {
    // Base class members
};

class Derived : public Base {
    // Derived class members
};
```

Here, `Derived` inherits from `Base`, meaning it has access to all of `Base`'s public and protected members.

---

## **2. Types of Inheritance in C++**

Inheritance can be of the following types:

### **a) Public Inheritance**

- The public members of the base class remain public in the derived class.
    
- The protected members of the base class remain protected in the derived class.
    
- The private members of the base class remain inaccessible.
    

#### **Example:**

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    int a = 10;
    void display() {
        cout << "Base class display()" << endl;
    }
};

class Derived : public Base {  // Public inheritance
public:
    void show() {
        cout << "Derived class show()" << endl;
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Derived d;
    d.display();  // Accessing Base class function
    d.show();     // Accessing Derived class function
    return 0;
}
```

✔ Output:

```
Base class display()
Derived class show()
Value of a: 10
```

---

### **b) Private Inheritance**

- Public and protected members of the base class become **private** in the derived class.
    
- Private members of the base class remain inaccessible.
    

#### **Example:**

```cpp
class Derived : private Base {  // Private inheritance
public:
    void show() {
        cout << "Value of a: " << a << endl;  // Allowed
    }
};

int main() {
    Derived d;
    // d.display();  // ❌ Error: display() is now private
    d.show();
    return 0;
}
```

✔ Here, `a` is accessible inside `Derived` but not outside.

---

### **c) Protected Inheritance**

- Public and protected members of the base class become **protected** in the derived class.
    
- Private members remain inaccessible.
    

#### **Example:**

```cpp
class Derived : protected Base {  // Protected inheritance
public:
    void show() {
        cout << "Value of a: " << a << endl;  // Allowed
    }
};

int main() {
    Derived d;
    // d.display();  // ❌ Error: display() is now protected
    d.show();
    return 0;
}
```

---

## **3. Friend Function and Inheritance**

A **friend function** is not a member of the class but has access to its private and protected members.

### **Example:**

```cpp
class Base {
private:
    int data = 100;
public:
    friend void showData(Base b); // Friend function
};

void showData(Base b) {
    cout << "Private Data: " << b.data << endl;  // Allowed
}

int main() {
    Base obj;
    showData(obj);
    return 0;
}
```

✔ Here, `showData()` is a **friend function** that can access `data` even though it is private.

---

## **4. Forms of Inheritance**

Inheritance can be categorized into:

1. **Single Inheritance** → One base class, one derived class.
    
2. **Multiple Inheritance** → One derived class inherits from multiple base classes.
    
3. **Multilevel Inheritance** → A derived class acts as a base class for another derived class.
    
4. **Hierarchical Inheritance** → One base class has multiple derived classes.
    
5. **Hybrid Inheritance** → A combination of two or more types of inheritance.
    

#### **Example of Multiple Inheritance**

```cpp
class A {
public:
    void funcA() { cout << "Function of A" << endl; }
};

class B {
public:
    void funcB() { cout << "Function of B" << endl; }
};

class C : public A, public B {  // Multiple inheritance
};

int main() {
    C obj;
    obj.funcA();
    obj.funcB();
    return 0;
}
```

---

## **5. Virtual Base Class**

- Avoids duplication when multiple derived classes inherit from the same base class.
    
- Used in **diamond problem** scenarios.
    

#### **Example of Virtual Base Class**

```cpp
class A {
public:
    int x = 10;
};

class B : virtual public A {};  // Virtual inheritance
class C : virtual public A {};  // Virtual inheritance

class D : public B, public C {};

int main() {
    D obj;
    cout << obj.x;  // No ambiguity due to virtual base class
    return 0;
}
```

✔ Without `virtual`, `x` would be inherited twice, causing ambiguity.

---

## **6. Abstract Class and Pure Virtual Functions**

An **abstract class** is a class with at least one **pure virtual function**, meaning it must be overridden by derived classes.

### **Example of Abstract Class**

```cpp
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    // Shape s;  // ❌ Error: Cannot instantiate abstract class
    Circle c;
    c.draw();
    return 0;
}
```

✔ **Abstract classes enforce implementation** of certain functions in derived classes.

---

## **7. Advantages and Disadvantages of Inheritance**

### ✅ **Advantages**

- **Code Reusability** → Reduces duplication and enhances maintainability.
    
- **Extensibility** → Can easily extend functionalities.
    
- **Better Organization** → Implements hierarchical relationships.
    

### ❌ **Disadvantages**

- **Increased Complexity** → Large inheritance trees can become difficult to manage.
    
- **Tightly Coupled Code** → Changes in the base class can affect all derived classes.
    
- **Performance Overhead** → Virtual inheritance and function overriding introduce some overhead.
    

---

## **Conclusion**

Inheritance is a powerful OOP feature in C++ that allows building hierarchical structures with reusability and efficiency. However, it should be used carefully to avoid unnecessary complexity.


