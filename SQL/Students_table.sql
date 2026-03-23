-- Create a database (optional)
CREATE DATABASE school;
USE school;

-- Create a table
CREATE TABLE students (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    course VARCHAR(50)
);

-- Insert data
INSERT INTO students (id, name, age, course) VALUES
(1, 'Rahul', 20, 'BCA'),
(2, 'Priya', 21, 'BSc'),
(3, 'Aman', 19, 'BCom');

-- View all records
SELECT * FROM students;

-- Update a record
UPDATE students
SET age = 22
WHERE id = 2;

-- View after update
SELECT * FROM students;

-- Delete a record
DELETE FROM students
WHERE id = 3;

-- View after delete
SELECT * FROM students;
