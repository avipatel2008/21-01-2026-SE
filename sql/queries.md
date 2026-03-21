# Basic SQL Cheat Sheet (All Queries in One Flow)

This is a single continuous flow of basic SQL queries.
You can run this step-by-step in order.

---

```sql
-- Create Database
CREATE DATABASE mydb;

-- Use Database
USE mydb;

-- Create Table
CREATE TABLE users (
  id INT PRIMARY KEY,
  name VARCHAR(100),
  age INT
);

-- Insert Data (Single Row)
INSERT INTO users (id, name, age)
VALUES (1, 'John', 25);

-- Insert Data (Multiple Rows)
INSERT INTO users (id, name, age)
VALUES 
(2, 'Alice', 22),
(3, 'Bob', 30);

-- Read Data
SELECT * FROM users;

-- Update Data
UPDATE users
SET age = 26
WHERE id = 1;

-- Delete One Row
DELETE FROM users
WHERE id = 1;

-- Delete All Rows
DELETE FROM users;
```

---
