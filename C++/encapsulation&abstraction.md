# Encapsulation and Abstraction

Object-Oriented Programming (OOP) uses concepts that help organize and protect data.

Two important concepts are **Encapsulation** and **Abstraction**.

---

## Encapsulation

Encapsulation means **binding data and methods together inside a single unit**, and controlling access to that data.

In simple terms:

Data is kept safe inside a class, and it can only be accessed through defined methods.

---

### Why Encapsulation is Important

Encapsulation helps in:

- Protecting data from unwanted access  
- Controlling how data is modified  
- Improving code maintainability  

---

### Example of Encapsulation (C++)

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    account.setBalance(5000);
    cout << account.getBalance();

    return 0;
}
```

The variable `balance` is private and cannot be accessed directly.  
It can only be accessed using methods like `setBalance()` and `getBalance()`.

---

## Abstraction

Abstraction means **hiding internal details and showing only essential functionality**.

In simple terms:

The user only sees what the object does, not how it does it.

---

### Why Abstraction is Important

Abstraction helps in:

- Reducing complexity  
- Hiding unnecessary details  
- Focusing on important features  

---

### Example of Abstraction (C++)

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        cout << "Car started" << endl;
    }
};

int main() {
    Car c;
    c.start();

    return 0;
}
```

The user only calls `start()` without knowing how the car engine works internally.

---

## Difference Between Encapsulation and Abstraction

Encapsulation focuses on **data hiding and protection**.

Abstraction focuses on **hiding implementation details and showing only functionality**.

---

## Real-Life Example

Encapsulation example:

A bank account keeps balance private and allows access only through methods.

Abstraction example:

Driving a car requires using the steering and pedals without knowing how the engine works internally.
