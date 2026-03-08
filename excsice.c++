ex.1
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
};

int main() {
    Student s1;
    s1.name = "Rahul";
    s1.age = 20;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}


ex.2
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.year = 2022;

    c1.displayInfo();
}


ex.3
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int price;

    Book(string t, int p) {
        title = t;
        price = p;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1("C++ Programming", 500);
}


ex.4
#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area: " << length * width << endl;
    }
};

int main() {
    Rectangle r1(10, 5);
    r1.area();
}


ex.5
#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    Employee(string n, int s) {
        name = n;
        salary = s;
    }

    void display() {
        cout << name << " - " << salary << endl;
    }
};

int main() {
    Employee e1("Amit", 30000);
    Employee e2("Ravi", 40000);

    e1.display();
    e2.display();
}


ex.6
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Object created" << endl;
    }

    ~Demo() {
        cout << "Object destroyed" << endl;
    }
};

int main() {
    Demo d1;
}


ex.7
#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;

    void add() {
        cout << "Addition: " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }
};

int main() {
    Calculator c;
    c.a = 10;
    c.b = 5;

    c.add();
    c.subtract();
}


ex.8
#include <iostream>
using namespace std;

class Circle {
public:
    float radius;

    void calculateArea() {
        cout << "Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Circle c;
    c.radius = 7;

    c.calculateArea();
}


ex.9
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }

    void introduce() {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person p1("Rahul", 21);
    p1.introduce();
}



ex.10
#include <iostream>
using namespace std;

class BankAccount {
public:
    string accountHolder;
    float balance;

    void deposit(float amount) {
        balance += amount;
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1;
    b1.accountHolder = "Amit";
    b1.balance = 1000;

    b1.deposit(500);
    b1.displayBalance();
}


ex.11
#include <iostream>
using namespace std;

class Laptop {
public:
    string brand;
    int price;

    void showDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Laptop l1;
    l1.brand = "Dell";
    l1.price = 60000;

    l1.showDetails();
}


ex.12
#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    string sound;

    void makeSound() {
        cout << name << " makes sound: " << sound << endl;
    }
};

int main() {
    Animal a1;
    a1.name = "Dog";
    a1.sound = "Bark";

    a1.makeSound();
}



ex.13
#include <iostream>
using namespace std;

class Movie {
public:
    string title;
    float rating;

    Movie(string t, float r) {
        title = t;
        rating = r;

        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    Movie m1("Avengers", 8.5);
}


ex.14
#include <iostream>
using namespace std;

class Box {
public:
    int length, width, height;

    void volume() {
        cout << "Volume: " << length * width * height << endl;
    }
};

int main() {
    Box b1;
    b1.length = 5;
    b1.width = 4;
    b1.height = 3;

    b1.volume();
}


ex.15
#include <iostream>
using namespace std;

class Phone {
public:
    string model;
    int price;

    void showPhone() {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Phone p1;
    p1.model = "iPhone 14";
    p1.price = 80000;

    p1.showPhone();
}


ex.16
#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    string subject;

    // Constructor
    Teacher(string n, string s) {
        name = n;
        subject = s;

        cout << "Teacher Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Teacher t1("keyur", "C++");
    return 0;
}


ex.17
#include <iostream>
using namespace std;

class Product {
public:
    string productName;
    int cost;

    void showProduct() {
        cout << "Product Name: " << productName << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main() {
    Product p1;

    p1.productName = "Laptop";
    p1.cost = 50000;

    p1.showProduct();

    return 0;
}


ex.18
#include <iostream>
using namespace std;

class Game {
public:
    string gameName;
    int players;

    // Parameterized Constructor
    Game(string g, int p) {
        gameName = g;
        players = p;
    }

    void display() {
        cout << "Game Name: " << gameName << endl;
        cout << "Number of Players: " << players << endl;
    }
};

int main() {
    Game g1("Cricket", 11);
    g1.display();

    return 0;
}


ex.19
#include <iostream>
using namespace std;

class City {
public:
    string name;
    int population;

    void showCity() {
        cout << "City Name: " << name << endl;
        cout << "Population: " << population << endl;
    }
};

int main() {
    City c1;

    c1.name = "Ahmedabad";
    c1.population = 8000000;

    c1.showCity();

    return 0;
}


ex.20
#include <iostream>
using namespace std;

class Course {
public:
    string courseName;
    int duration;

    void showCourse() {
        cout << "Course Name: " << courseName << endl;
        cout << "Duration: " << duration << " months" << endl;
    }
};

int main() {
    Course c1;

    c1.courseName = "Computer Science";
    c1.duration = 6;

    c1.showCourse();

    return 0;
}



---

# Ex. 1

Create an integer variable to store your age and print it.

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;

    cout << "Age: " << age << endl;

    return 0;
}
```

---

# Ex. 2

Create a float variable for height and print with two decimal places.

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float height = 5.75;

    cout << fixed << setprecision(2);
    cout << "Height: " << height << endl;

    return 0;
}
```

---

# Ex. 3

Create two integers and print their sum.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    cout << "Sum: " << a + b << endl;

    return 0;
}
```

---

# Ex. 4

Add an integer and a float.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;

    float result = a + b;

    cout << "Result: " << result << endl;

    return 0;
}
```

---

# Ex. 5

Store the first letter of your name.

```cpp
#include <iostream>
using namespace std;

int main() {
    char letter = 'A';

    cout << "First letter: " << letter << endl;

    return 0;
}
```

---

# Ex. 6

Take an integer input and print it.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "You entered: " << num << endl;

    return 0;
}
```

---

# Ex. 7

Take a float input and print with two decimals.

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float num;

    cout << "Enter a float number: ";
    cin >> num;

    cout << fixed << setprecision(2);
    cout << "Value: " << num << endl;

    return 0;
}
```

---

# Ex. 8

Assign a decimal value to an integer.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 5.8;

    cout << "Value of integer: " << num << endl;

    return 0;
}
```

*(Output will be 5 because decimal part is removed.)*

---

# Ex. 9

Assign an integer to a float.

```cpp
#include <iostream>
using namespace std;

int main() {
    float num = 10;

    cout << "Float value: " << num << endl;

    return 0;
}




# Ex. 10

Print int, float, and char together.


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    cout << "Integer: " << a << " Float: " << b << " Char: " << c << endl;

    return 0;
}



# Ex. 1

```cpp
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    if(a>0 && b>0)
        cout<<"Both are positive";
    else
        cout<<"Not both positive";

    return 0;
}
```

---

# Ex. 2

```cpp
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    if(a<0 || b<0)
        cout<<"At least one is negative";
    else
        cout<<"None are negative";

    return 0;
}
```

---

# Ex. 3

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(!(n%5==0))
        cout<<"Not divisible by 5";
    else
        cout<<"Divisible by 5";

    return 0;
}
```

---

# Ex. 4

```cpp
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b && b>c)
        cout<<"True";
    else
        cout<<"False";

    return 0;
}
```

---

# Ex. 5

```cpp
#include <iostream>
using namespace std;

int main() {
    int age,citizen;
    cin>>age>>citizen;

    if(age>=18 && citizen==1)
        cout<<"Eligible to vote";
    else
        cout<<"Not eligible";

    return 0;
}
```

---

# Ex. 6

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n<10 || n>50)
        cout<<"Outside range";
    else
        cout<<"Inside range";

    return 0;
}
```

---

# Ex. 7

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cin>>marks;

    if(marks>=35 && marks<=100)
        cout<<"Pass";
    else
        cout<<"Fail";

    return 0;
}
```

---

# Ex.8

```cpp
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin>>ch;

    if(!(ch>='a' && ch<='z'))
        cout<<"Not lowercase";
    else
        cout<<"Lowercase letter";

    return 0;
}
```

---

# Ex.9

```cpp
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    if((a==0 && b!=0) || (a!=0 && b==0))
        cout<<"True";
    else
        cout<<"False";

    return 0;
}
```

---

# Ex.10

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n%3==0 || n%7==0)
        cout<<"Divisible";
    else
        cout<<"Not divisible";

    return 0;
}
```

---

# Ex.11

```cpp
#include <iostream>
using namespace std;

int main() {
    int userLen,passLen;
    cin>>userLen>>passLen;

    if(userLen>4 && passLen>6)
        cout<<"Login valid";
    else
        cout<<"Login invalid";

    return 0;
}
```

---

# Ex.12

```cpp
#include <iostream>
using namespace std;

int main() {
    int year;
    cin>>year;

    if(!(year%4==0))
        cout<<"Not leap year";
    else
        cout<<"Leap year";

    return 0;
}
```

---

# Ex.13

```cpp
#include <iostream>
using namespace std;

int main() {
    int temp;
    cin>>temp;

    if(temp<0 || temp>45)
        cout<<"Alert";
    else
        cout<<"Normal";

    return 0;
}
```

---

# Ex.14

```cpp
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    int max = (a>b) ? a : b;

    cout<<"Greater number: "<<max;

    return 0;
}
```

---

# Ex.15

```cpp
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    int largest = (a>b) ? (a>c ? a : c) : (b>c ? b : c);

    cout<<"Largest: "<<largest;

    return 0;
}
```

---

# Ex.16

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    string result = (n>0) ? "Positive" : (n<0 ? "Negative" : "Zero");

    cout<<result;

    return 0;
}
```

---

# Ex.17

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n>=1 && n<=100 && n!=50)
        cout<<"True";
    else
        cout<<"False";

    return 0;
}
```

---

# Ex.18

```cpp
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;

    if(x!=0 && y!=0)
        cout<<"True";
    else
        cout<<"False";

    return 0;
}
```

---

# Ex.19

```cpp
#include <iostream>
using namespace std;

int main() {
    int correctUser,adminOverride;
    cin>>correctUser>>adminOverride;

    if(correctUser==1 || adminOverride==1)
        cout<<"Login allowed";
    else
        cout<<"Login denied";

    return 0;
}
```



# Ex.20

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n%2!=0 && n>10)
        cout<<"Odd and greater than 10";
    else
        cout<<"Condition not satisfied";

    return 0;
}
```

Below are **simple C++ sample codes** for the exercises (using functions, arrays, and loops).

---

# 1. Pass two integers to a function (call by value)

```cpp
#include <iostream>
using namespace std;

void change(int a, int b){
    a = a + 10;
    b = b + 20;
}

int main(){
    int a,b;
    cin>>a>>b;

    change(a,b);

    cout<<"a="<<a<<" b="<<b<<endl;
}
```

---

# 2. Double value using call by value

```cpp
#include <iostream>
using namespace std;

void doubleValue(int x){
    x = x*2;
    cout<<"Inside function: "<<x<<endl;
}

int main(){
    int n;
    cin>>n;

    cout<<"Before: "<<n<<endl;
    doubleValue(n);
    cout<<"After: "<<n<<endl;
}
```

---

# 3. Change value using address (pointer)

```cpp
#include <iostream>
using namespace std;

void change(int *x){
    *x = *x + 10;
}

int main(){
    int n;
    cin>>n;

    cout<<"Before: "<<n<<endl;
    change(&n);
    cout<<"After: "<<n<<endl;
}
```

---

# 4. Check even or odd using function

```cpp
#include <iostream>
using namespace std;

bool evenOdd(int n){
    return n%2==0;
}

int main(){
    int n;
    cin>>n;

    if(evenOdd(n))
        cout<<"Even";
    else
        cout<<"Odd";
}
```

---

# 5. Print numbers 1–20 using function

```cpp
#include <iostream>
using namespace std;

void printNumbers(){
    for(int i=1;i<=20;i++)
        cout<<i<<" ";
}

int main(){
    printNumbers();
}
```

---

# 6. Sum from 1 to n

```cpp
#include <iostream>
using namespace std;

int sum(int n){
    int s=0;
    for(int i=1;i<=n;i++)
        s+=i;
    return s;
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n);
}
```

---

# 7. Multiplication table using function

```cpp
#include <iostream>
using namespace std;

void table(int n){
    for(int i=1;i<=10;i++)
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
}

int main(){
    int n;
    cin>>n;

    table(n);
}
```

---

# 8. Swap using call by value

```cpp
#include <iostream>
using namespace std;

void swapVal(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"Before "<<a<<" "<<b<<endl;
    swapVal(a,b);
    cout<<"After "<<a<<" "<<b<<endl;
}
```

---

# 9. Swap using reference

```cpp
#include <iostream>
using namespace std;

void swapRef(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"Before "<<a<<" "<<b<<endl;
    swapRef(a,b);
    cout<<"After "<<a<<" "<<b<<endl;
}
```

---

# 10. 2×3 array input and print

```cpp
#include <iostream>
using namespace std;

int main(){
    int a[2][3];

    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
```

---

# 11. Sum of 3×3 array

```cpp
#include <iostream>
using namespace std;

int main(){
    int a[3][3],sum=0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            sum+=a[i][j];

    cout<<"Sum="<<sum;
}
```

---

# 12. Print first row

```cpp
#include <iostream>
using namespace std;

int main(){
    int a[3][3];

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int j=0;j<3;j++)
        cout<<a[0][j]<<" ";
}
```

---

# 13. Print first column

```cpp
#include <iostream>
using namespace std;

int main(){
    int a[3][3];

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int i=0;i<3;i++)
        cout<<a[i][0]<<" ";
}
```

---

# 14. Count even numbers in 2D array

```cpp
#include <iostream>
using namespace std;

int main(){
    int a[3][3],count=0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j]%2==0)
                count++;

    cout<<"Even count="<<count;
}
```

---

# 15. Pass 2D array to function

```cpp
#include <iostream>
using namespace std;

void print(int a[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int a[2][2];

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin>>a[i][j];

    print(a);
}
```

---

# 16. Positive, negative, or zero

```cpp
#include <iostream>
using namespace std;

void check(int n){
    if(n>0) cout<<"Positive";
    else if(n<0) cout<<"Negative";
    else cout<<"Zero";
}

int main(){
    int n;
    cin>>n;

    check(n);
}
```

---

# 17. Largest number in array

```cpp
#include <iostream>
using namespace std;

int main(){
    int a[5],max;

    for(int i=0;i<5;i++)
        cin>>a[i];

    max=a[0];

    for(int i=1;i<5;i++)
        if(a[i]>max)
            max=a[i];

    cout<<"Largest="<<max;
}
```

---

# 18. Star square pattern

```cpp
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<"* ";
        cout<<endl;
    }
}
```

---

# 19. Marks total and average

```cpp
#include <iostream>
using namespace std;

void calc(int m[]){
    int sum=0;

    for(int i=0;i<5;i++)
        sum+=m[i];

    cout<<"Total="<<sum<<endl;
    cout<<"Average="<<sum/5.0;
}

int main(){
    int marks[5];

    for(int i=0;i<5;i++)
        cin>>marks[i];

    calc(marks);
}
```

---

# 20. Count numbers divisible by 5

```cpp
#include <iostream>
using namespace std;

void countFive(){
    int count=0;

    for(int i=1;i<=100;i++)
        if(i%5==0)
            count++;

    cout<<"Count="<<count;
}

int main(){
    countFive();
}
```

---

Below are **more advanced C++ versions** using **constructors, encapsulation (private data), member functions, and better class design**.

---

# 1. Student Class

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a){
        name = n;
        age = a;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    Student s("John",20);
    s.display();
}
```

---

# 2. Car Class

```cpp
#include <iostream>
using namespace std;

class Car{
private:
    string brand;
    int year;

public:
    Car(string b,int y){
        brand=b;
        year=y;
    }

    void displayInfo(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

int main(){
    Car c("Toyota",2022);
    c.displayInfo();
}
```

---

# 3. Book Class

```cpp
#include <iostream>
using namespace std;

class Book{
private:
    string title;
    double price;

public:
    Book(string t,double p){
        title=t;
        price=p;
        cout<<"Title: "<<title<<" Price: "<<price<<endl;
    }
};

int main(){
    Book b("C++ Programming",550);
}
```

---

# 4. Rectangle Class

```cpp
#include <iostream>
using namespace std;

class Rectangle{
private:
    int length,width;

public:
    Rectangle(int l,int w){
        length=l;
        width=w;
    }

    int area(){
        return length*width;
    }
};

int main(){
    Rectangle r(5,4);
    cout<<"Area: "<<r.area();
}
```

---

# 5. Employee Class

```cpp
#include <iostream>
using namespace std;

class Employee{
private:
    string name;
    double salary;

public:
    Employee(string n,double s){
        name=n;
        salary=s;
    }

    void show(){
        cout<<name<<" Salary: "<<salary<<endl;
    }
};

int main(){
    Employee e1("Ali",30000);
    Employee e2("Sara",45000);

    e1.show();
    e2.show();
}
```

---

# 6. Demo (Constructor & Destructor) 

```cpp
#include <iostream>
using namespace std;

class Demo{
public:
    Demo(){
        cout<<"Object created"<<endl;
    }

    ~Demo(){
        cout<<"Object destroyed"<<endl;
    }
};

int main(){
    Demo d;
}
```

---

# 7. Calculator Class

```cpp
#include <iostream>
using namespace std;

class Calculator{
private:
    int a,b;

public:
    Calculator(int x,int y){
        a=x;
        b=y;
    }

    int add(){
        return a+b;
    }

    int subtract(){
        return a-b;
    }
};

int main(){
    Calculator c(10,5);
    cout<<"Sum: "<<c.add()<<endl;
    cout<<"Difference: "<<c.subtract();
}
```

---

# 8. Circle Class

```cpp
#include <iostream>
using namespace std;

class Circle{
private:
    double radius;

public:
    Circle(double r){
        radius=r;
    }

    double calculateArea(){
        return 3.1416*radius*radius;
    }
};

int main(){
    Circle c(7);
    cout<<"Area: "<<c.calculateArea();
}
```

---

# 9. Person Class

```cpp
#include <iostream>
using namespace std;

class Person{
private:
    string name;
    int age;

public:
    Person(string n,int a){
        name=n;
        age=a;
    }

    void introduce(){
        cout<<"My name is "<<name<<" and I am "<<age<<" years old"<<endl;
    }
};

int main(){
    Person p("David",25);
    p.introduce();
}
```

---

# 10. BankAccount Class

```cpp
#include <iostream>
using namespace std;

class BankAccount{
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name,double bal){
        accountHolder=name;
        balance=bal;
    }

    void deposit(double amount){
        balance += amount;
    }

    void displayBalance(){
        cout<<"Account Holder: "<<accountHolder<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount acc("Alex",1000);
    acc.deposit(500);
    acc.displayBalance();
}
```

---

# 11. Laptop Class

```cpp
#include <iostream>
using namespace std;

class Laptop{
private:
    string brand;
    int price;

public:
    Laptop(string b,int p){
        brand=b;
        price=p;
    }

    void showDetails(){
        cout<<"Brand: "<<brand<<" Price: "<<price<<endl;
    }
};

int main(){
    Laptop l("Dell",65000);
    l.showDetails();
}
```

---

# 12. Animal Class

```cpp
#include <iostream>
using namespace std;

class Animal{
private:
    string name,sound;

public:
    Animal(string n,string s){
        name=n;
        sound=s;
    }

    void makeSound(){
        cout<<name<<" says "<<sound<<endl;
    }
};

int main(){
    Animal a("Dog","Bark");
    a.makeSound();
}
```

---

# 13. Movie Class

```cpp
#include <iostream>
using namespace std;

class Movie{
private:
    string title;
    double rating;

public:
    Movie(string t,double r){
        title=t;
        rating=r;
        cout<<"Movie: "<<title<<" Rating: "<<rating<<endl;
    }
};

int main(){
    Movie m("Avengers",8.5);
}
```

---

# 14. Box Class

```cpp
#include <iostream>
using namespace std;

class Box{
private:
    int length,width,height;

public:
    Box(int l,int w,int h){
        length=l;
        width=w;
        height=h;
    }

    int volume(){
        return length*width*height;
    }
};

int main(){
    Box b(3,4,5);
    cout<<"Volume: "<<b.volume();
}
```

---

# 15. Phone Class

```cpp
#include <iostream>
using namespace std;

class Phone{
private:
    string model;
    double price;

public:
    Phone(string m,double p){
        model=m;
        price=p;
    }

    void showPhone(){
        cout<<"Model: "<<model<<" Price: "<<price<<endl;
    }
};

int main(){
    Phone p("iPhone 14",90000);
    p.showPhone();
}
```

---

# 16. Teacher Class

```cpp
#include <iostream>
using namespace std;

class Teacher{
private:
    string name,subject;

public:
    Teacher(string n,string s){
        name=n;
        subject=s;
        cout<<name<<" teaches "<<subject<<endl;
    }
};

int main(){
    Teacher t("Mr. Smith","Mathematics");
}
```

---

# 17. Product Class

```cpp
#include <iostream>
using namespace std;

class Product{
private:
    string productName;
    double cost;

public:
    Product(string n,double c){
        productName=n;
        cost=c;
    }

    void showProduct(){
        cout<<"Product: "<<productName<<" Cost: "<<cost<<endl;
    }
};

int main(){
    Product p("Laptop",75000);
    p.showProduct();
}
```

---

# 18. Game Class

```cpp
#include <iostream>
using namespace std;

class Game{
private:
    string gameName;
    int players;

public:
    Game(string g,int p){
        gameName=g;
        players=p;
    }

    void display(){
        cout<<"Game: "<<gameName<<" Players: "<<players<<endl;
    }
};

int main(){
    Game g("Football",11);
    g.display();
}
```

---

# 19. City Class

```cpp
#include <iostream>
using namespace std;

class City{
private:
    string name;
    long population;

public:
    City(string n,long p){
        name=n;
        population=p;
    }

    void showCity(){
        cout<<"City: "<<name<<" Population: "<<population<<endl;
    }
};

int main(){
    City c("New York",8000000);
    c.showCity();
}
```

---

# 20. Course Class

```cpp
#include <iostream>
using namespace std;

class Course{
private:
    string courseName;
    int duration;

public:
    Course(string n,int d){
        courseName=n;
        duration=d;
    }

    void showCourse(){
        cout<<"Course: "<<courseName<<" Duration: "<<duration<<" months"<<endl;
    }
};

int main(){
    Course c("Computer Science",36);
    c.showCourse();
}
```

THANK YOU FOR USING THIS CODE! HOPE IT HELPS YOU LEARN C++ BETTER. HAPPY CODING!
WORK BY AVI PATEL 
