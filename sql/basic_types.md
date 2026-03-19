# MySQL Basic Data Types

This file lists the most common MySQL data types, what they are used for, and quick notes.

---

## 1. Numeric Types

### INT

Whole numbers.
Example: age, id

### BIGINT

Very large whole numbers.
Example: large counters, big IDs

### SMALLINT

Smaller range integers.
Example: small counts

### TINYINT

Very small integers (often 0/1 for boolean).
Example: is_active (0 = false, 1 = true)

### DECIMAL(p, s)

Exact numbers with fixed decimal places.
Example: money (price 99.99)

### FLOAT / DOUBLE

Approximate decimal numbers.
Example: measurements, scientific values

---

## 2. String (Text) Types

### CHAR(n)

Fixed-length string.
Example: country codes like 'IN'

### VARCHAR(n)

Variable-length string.
Example: names, emails

### TEXT

Large text data.
Example: descriptions, comments

### MEDIUMTEXT / LONGTEXT

Very large text storage.
Example: articles, logs

---

## 3. Date & Time Types

### DATE

Stores date only (YYYY-MM-DD).
Example: birthdate

### TIME

Stores time only (HH:MM:SS).
Example: duration

### DATETIME

Stores date + time.
Example: created_at

### TIMESTAMP

Date + time (auto-updates, timezone-aware behavior).
Example: last_updated

### YEAR

Stores year only.
Example: 2026

---

## 4. Boolean Type

### BOOLEAN / BOOL

Alias of TINYINT(1).
Example: true/false values

---

## 5. Binary Types

### BINARY

Fixed-length binary data.

### VARBINARY

Variable-length binary data.

### BLOB

Binary Large Object (files, images).

---

## 6. Enum & Set

### ENUM

One value from a predefined list.
Example: ('small', 'medium', 'large')

### SET

Multiple values from a predefined list.
Example: ('red', 'blue', 'green')

---

## Quick Summary

* INT → normal numbers
* VARCHAR → text (most used)
* DECIMAL → money
* DATETIME / TIMESTAMP → date + time
* BOOLEAN → true/false
* TEXT → large text
* ENUM → fixed options

---

This is all the basic MySQL data types you actually use in real projects.
