# Polymorphism

Polymorphism means **one interface with multiple behaviors**.

In Object-Oriented Programming, the same function name can behave differently depending on the object calling it.

Simple idea:

Same function name → different behavior.

Example from real life:

A **Shape** can calculate area, but the formula is different.

Circle → πr²  
Rectangle → length × width

The operation is the same (`area()`), but implementation changes.

---

## Core Concepts

### 1. Compile-Time Polymorphism

This type of polymorphism is decided **during compilation**.

The compiler determines which function to execute based on the function parameters.

Common ways to achieve compile-time polymorphism:

- Function Overloading  
- Operator Overloading  

Example: Function Overloading

```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator c;

    cout << c.add(5,3) << endl;
    cout << c.add(5,3,2) << endl;
}
```

Here the compiler selects the correct `add()` function based on the number of parameters.

---

### 2. Runtime Polymorphism

Runtime polymorphism is decided **while the program is running**.

It is achieved using **function overriding with virtual functions**.

A base class pointer can call different implementations depending on which object it refers to.

Example:

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;

    a = &d;
    a->sound();
}
```

Output:

```
Dog barks
```

Even though the pointer type is `Animal`, the function from the `Dog` class executes.

This behavior is called **runtime polymorphism**.

---

## Why Polymorphism is Important

Polymorphism improves software design.

Benefits:

- Code becomes flexible  
- Same interface can represent different behaviors  
- Reduces code duplication  
- Makes programs easier to extend and maintain  

Large software systems rely heavily on polymorphism.

---

## Real-world Application

Example: **Payment System**

Different payment types can use the same function.

Function:

```
pay()
```

Implementations:

- CreditCard → processes credit card payment  
- UPI → processes UPI payment  
- NetBanking → processes bank transaction  

The interface is the same, but the behavior changes.

This is polymorphism in real-world software systems.
