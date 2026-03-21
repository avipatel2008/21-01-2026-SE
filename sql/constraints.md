# Beginner MySQL Essentials — Operators, Constraints, Data Types, and Basic Clauses

Before a beginner starts writing proper SQL queries, they should clearly understand four basic things: **data types**, **constraints**, **operators**, and a few **basic SQL clauses**.

These are related, but they are not the same.

A **data type** tells MySQL what kind of value a column can store.
Examples:

* `INT` stores whole numbers
* `VARCHAR(100)` stores text
* `DATE` stores dates

So data type is about the **kind of data**.

A **constraint** is a rule applied to a column or table.
It controls what is allowed and what is not allowed.
Examples:

* `NOT NULL` means a value is required
* `UNIQUE` means duplicates are not allowed
* `PRIMARY KEY` means each row must have a unique identity

So constraint is about **rules and validity**.

An **operator** is used inside queries to compare values, combine conditions, or do calculations.
Examples:

* `=` checks equality
* `>` checks greater than
* `AND` joins conditions
* `+` adds values

So operator is about **working with values in queries**.

A **basic SQL clause** is a structural part of a query.
Examples:

* `SELECT` chooses columns
* `FROM` chooses the table
* `WHERE` applies conditions
* `ORDER BY` sorts the result

So a clause is about **how the whole query is built**.

A beginner should keep this clear in the mind:

* data type = what kind of value is stored
* constraint = what rules that value must follow
* operator = how values are compared or manipulated
* clause = how the query is structured

These four things are the early foundation of MySQL.
Without data types, MySQL would not know what kind of values are being stored.
Without constraints, incorrect or duplicate data could enter the table.
Without operators, you could not filter, compare, or calculate properly.
Without clauses, you could not properly write queries at all.

---

# 1) Beginner Data Types in MySQL

A data type defines what kind of value a column can hold.
Choosing the correct data type matters because it affects storage, validation, and behavior.

## `INT`

Used for whole numbers.

Common beginner use cases:

* age
* marks
* quantity
* id

```sql
age INT
```

## `BIGINT`

Used for very large whole numbers.
A beginner does not use it every day, but should know it exists.

```sql
phone_number BIGINT
```

## `DECIMAL(p,s)`

Used for exact decimal values.
This is usually better than `FLOAT` for money.

Here:

* `p` = total digits
* `s` = digits after decimal

```sql
salary DECIMAL(10,2)
```

## `FLOAT`

Used for decimal values, but not ideal where exact precision is important.
A beginner should remember this simple rule:

Use `DECIMAL` for money, not `FLOAT`.

```sql
percentage FLOAT
```

## `CHAR(n)`

Used for fixed-length text.
Good when the size is always nearly the same.

```sql
gender CHAR(1)
```

## `VARCHAR(n)`

Used for variable-length text.
This is one of the most commonly used data types in beginner SQL.

```sql
name VARCHAR(100)
```

Use it for things like:

* name
* email
* city
* title

## `TEXT`

Used for long text.
Helpful when a normal `VARCHAR` may not be enough.

```sql
description TEXT
```

## `DATE`

Used to store only a date.
Format is usually `YYYY-MM-DD`.

```sql
dob DATE
```

## `TIME`

Used to store only time.

```sql
login_time TIME
```

## `DATETIME`

Used to store both date and time.

```sql
created_at DATETIME
```

## `TIMESTAMP`

Also stores date and time.
Beginners often see it in tables that track record creation or updates.

```sql
updated_at TIMESTAMP
```

## `BOOLEAN` / `BOOL`

Used for true or false style values.
In MySQL, it behaves like a tiny integer internally.

```sql
is_active BOOLEAN
```

Typical meaning:

* `1` = true
* `0` = false

---

## Beginner data type summary

The main beginner-friendly data types worth knowing are:

* `INT`
* `BIGINT`
* `DECIMAL`
* `FLOAT`
* `CHAR`
* `VARCHAR`
* `TEXT`
* `DATE`
* `TIME`
* `DATETIME`
* `TIMESTAMP`
* `BOOLEAN`

---

# 2) Beginner Constraints in MySQL

Constraints are rules placed on columns or tables.
They help keep data valid, clean, and meaningful.

## `NOT NULL`

Means the column cannot contain `NULL`.
So a value must be provided.

```sql
name VARCHAR(100) NOT NULL
```

## `UNIQUE`

Means duplicate values are not allowed.

```sql
email VARCHAR(100) UNIQUE
```

## `PRIMARY KEY`

Uniquely identifies each row in a table.
It must be unique and cannot be `NULL`.

```sql
id INT PRIMARY KEY
```

## `AUTO_INCREMENT`

Automatically generates the next numeric value.
Usually used with a primary key.

```sql
id INT PRIMARY KEY AUTO_INCREMENT
```

## `DEFAULT`

Provides a default value if no value is given.

```sql
city VARCHAR(100) DEFAULT 'Ahmedabad'
```

## `CHECK`

Restricts values based on a condition.

```sql
age INT CHECK (age >= 18)
```

## `FOREIGN KEY`

Creates a relation between two tables.
Usually points to the primary key of another table.

```sql
FOREIGN KEY (department_id) REFERENCES departments(id)
```

---

## Beginner constraint summary

The main beginner constraints worth learning first are:

* `NOT NULL`
* `UNIQUE`
* `PRIMARY KEY`
* `AUTO_INCREMENT`
* `DEFAULT`
* `CHECK`
* `FOREIGN KEY`

---

# 3) Beginner Operators in MySQL

Operators are symbols or keywords used to perform actions on values.
They are used heavily in `WHERE`, `SELECT`, `UPDATE`, and `DELETE` queries.

## Arithmetic Operators

### `+`

Addition

```sql
SELECT 10 + 5;
```

### `-`

Subtraction

```sql
SELECT 10 - 5;
```

### `*`

Multiplication

```sql
SELECT 10 * 5;
```

### `/`

Division

```sql
SELECT 10 / 5;
```

### `%`

Remainder operator

```sql
SELECT 10 % 3;
```

---

## Comparison Operators

### `=`

Equal to

```sql
SELECT * FROM employees WHERE city = 'Ahmedabad';
```

### `!=` or `<>`

Not equal to

```sql
SELECT * FROM employees WHERE city != 'Ahmedabad';
```

```sql
SELECT * FROM employees WHERE city <> 'Ahmedabad';
```

### `>`

Greater than

```sql
SELECT * FROM employees WHERE salary > 30000;
```

### `<`

Less than

```sql
SELECT * FROM employees WHERE age < 25;
```

### `>=`

Greater than or equal to

```sql
SELECT * FROM employees WHERE marks >= 70;
```

### `<=`

Less than or equal to

```sql
SELECT * FROM employees WHERE marks <= 40;
```

---

## Logical Operators

### `AND`

Both conditions must be true.

```sql
SELECT * FROM employees WHERE city = 'Ahmedabad' AND salary > 30000;
```

### `OR`

At least one condition must be true.

```sql
SELECT * FROM employees WHERE city = 'Ahmedabad' OR city = 'Rajkot';
```

### `NOT`

Reverses a condition.

```sql
SELECT * FROM employees WHERE NOT city = 'Ahmedabad';
```

---

## Common Special Operators

### `BETWEEN`

Checks whether a value lies in a range.

```sql
SELECT * FROM students WHERE marks BETWEEN 60 AND 80;
```

### `IN`

Checks multiple possible values.

```sql
SELECT * FROM employees WHERE city IN ('Ahmedabad', 'Surat', 'Rajkot');
```

### `NOT IN`

Opposite of `IN`.

```sql
SELECT * FROM employees WHERE city NOT IN ('Ahmedabad', 'Surat');
```

### `LIKE`

Used for pattern matching.

```sql
SELECT * FROM employees WHERE name LIKE 'A%';
```

Common wildcard symbols:

* `%` means any number of characters
* `_` means exactly one character

### `IS NULL`

Checks whether a value is `NULL`.

```sql
SELECT * FROM employees WHERE manager_id IS NULL;
```

### `IS NOT NULL`

Checks whether a value is not `NULL`.

```sql
SELECT * FROM employees WHERE manager_id IS NOT NULL;
```

---

# 4) Basic SQL Clauses Every Beginner Should Know

These are not operators or constraints.
They are the main building blocks of a query.

## `SELECT`

Used to choose columns.

```sql
SELECT name, city FROM employees;
```

## `FROM`

Used to choose the table.

```sql
SELECT * FROM employees;
```

## `WHERE`

Used to apply conditions.

```sql
SELECT * FROM employees WHERE salary > 30000;
```

## `ORDER BY`

Used to sort the result.

```sql
SELECT * FROM employees ORDER BY name ASC;
```

## `GROUP BY`

Used to group rows with similar values.
A beginner should at least know the purpose.

```sql
SELECT city, COUNT(*) FROM employees GROUP BY city;
```

## `HAVING`

Used to apply conditions on grouped data.

```sql
SELECT city, COUNT(*) FROM employees GROUP BY city HAVING COUNT(*) > 2;
```

## `LIMIT`

Used to restrict the number of rows returned.

```sql
SELECT * FROM employees LIMIT 5;
```

---

# 5) One simple table example using all three main ideas

```sql
CREATE TABLE students (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE,
    age INT CHECK (age >= 18),
    city VARCHAR(100) DEFAULT 'Ahmedabad',
    marks DECIMAL(5,2),
    created_at DATETIME
);
```

Here:

* `INT`, `VARCHAR`, `DECIMAL`, `DATETIME` are data types
* `PRIMARY KEY`, `AUTO_INCREMENT`, `NOT NULL`, `UNIQUE`, `CHECK`, `DEFAULT` are constraints

Now a query using operators and clauses:

```sql
SELECT name, marks
FROM students
WHERE age >= 18 AND marks > 70
ORDER BY marks DESC;
```

Here:

* `>=`, `>`, `AND` are operators
* `SELECT`, `FROM`, `WHERE`, `ORDER BY` are clauses

---

# 6) What a beginner should focus on first

If someone is just starting MySQL, these are the most important first things to remember:

## Data types first

* `INT`
* `VARCHAR`
* `DECIMAL`
* `DATE`
* `DATETIME`

## Constraints first

* `PRIMARY KEY`
* `AUTO_INCREMENT`
* `NOT NULL`
* `UNIQUE`
* `DEFAULT`
* `FOREIGN KEY`

## Operators first

* `=`
* `!=`
* `>`
* `<`
* `>=`
* `<=`
* `AND`
* `OR`
* `LIKE`
* `IN`
* `BETWEEN`
* `IS NULL`

## Clauses first

* `SELECT`
* `FROM`
* `WHERE`
* `ORDER BY`
* `GROUP BY`
* `HAVING`
* `LIMIT`

---

# Final beginner note

A very easy way to remember the difference is this:

* **data type** = what kind of value can be stored
* **constraint** = what rule that value must obey
* **operator** = how you test or work with the value in a query
* **clause** = how the full query is structured

That is the beginner foundation before moving into joins, subqueries, normalization, and advanced SQL.
