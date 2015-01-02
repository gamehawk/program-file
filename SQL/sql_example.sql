-- This script creates a database and 2 tables in it, fills them with data, then demonstrates the ways of 
-- accessing and modifying the data.
DROP DATABASE db1;
CREATE DATABASE db1;
USE db1;
CREATE TABLE employee
(
ID INTEGER NOT NULL,
name VARCHAR(30),
dept_code  CHARACTER(3),
salary INTEGER,
PRIMARY KEY(ID)
);
CREATE TABLE department
(
code INTEGER NOT NULL,
headID INTEGER,
name VARCHAR(25),
PRIMARY KEY(code)
);

-- add the elements to the tables
INSERT INTO department
VALUES(1,1,'Google labs');

INSERT INTO department
VALUES(2,2,'Google');

INSERT INTO department
VALUES(3,3,'Calico');

INSERT INTO employee
VALUES(1,'Sergey Brin',1,10000000);

INSERT INTO employee
VALUES(2,'Larry Page',2,10000000);

INSERT INTO employee
VALUES(3,' Arthur D. Levinson',3,10000000);

INSERT INTO employee
VALUES(4,'Arthur Dent',2,100000);

INSERT INTO employee
VALUES(5,'David Botstein',3,10000000);

INSERT INTO employee
VALUES(6,'Robert Cohen',3,1000000);

INSERT INTO employee
VALUES(7,'Mark Levoy',2,1000000);

INSERT INTO employee
VALUES(8,'Eric Schmidt',1,10000000);

-- List all the departments

SELECT * FROM department;

-- list the employees
SELECT * FROM employee;

-- list heads of department
SELECT * from employee,department
WHERE employee.ID = department.headID;

-- give little Arthur Dent a raise, hitchhiking across the galaxy is hard work
UPDATE employee
SET salary = salary*10
WHERE ID = 4;

-- Mark Levoy has exceeded all expectations and has been found suitable for the research work at google labs. 
-- Let's transfer him
update employee
SET dept_code = 1
WHERE ID = 7;

-- Calico's mission is complete, ageing has been stopped and successfully reversed. Calico is to be dissolved, -- its employees moved back to Google.

update employee
SET dept_code = 2
WHERE dept_code = 3;

DELETE FROM department
WHERE code = 3;

-- Google labs has been dissolved, but all of its assets are stealthily moved to a new top secret research 
-- division: Google[x]
UPDATE department
SET name = 'Google[x]'
WHERE code = 1; 

-- List all the departments
SELECT * FROM department;

-- list the employees
SELECT * FROM employee
ORDER BY name
GROUP BY dept_code;

SELECT count(ID) AS 'Number of employees' FROM employee;

ALTER TABLE employee
DROP name;


-- select everyone
SELECT e.ID AS 'ID',e.name AS 'name',e.dept_code AS 'department code',e.salary AS 'salary',d.headID AS 'head ID',d.name AS 'department name' FROM employee AS e,department AS d
WHERE e.dept_code = d.code;
-- select everyone with higher than average paygrade
SELECT e.ID AS 'ID',e.name AS 'name',e.deptcode AS 'department code',e.salary AS 'salary',d.headID AS 'head ID',d.name AS 'department name' FROM employee AS e,department AS d
WHERE e.dept_code = d.code AND e.salary>min(salary)+(range(salary)/2);
