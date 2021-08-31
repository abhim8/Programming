show databases;

create database student;
use student;
show tables;

CREATE TABLE stdinfo(std_id INT PRIMARY KEY,
	name VARCHAR(20),
    branch VARCHAR(10)
 ); -- dropped after basic usage now using not null values

CREATE TABLE stdinfo(std_id INT PRIMARY KEY,
	name VARCHAR(20) NOT NULL,
    branch VARCHAR(10),
    gpa DECIMAL(3,2)
 ); -- dropped after using using not null & unique values, now using deafult values

CREATE TABLE stdinfo(std_id INT PRIMARY KEY,
	name VARCHAR(20) NOT NULL,
    branch VARCHAR(10) DEFAULT 'Not Given',
    gpa DECIMAL(3,2) DEFAULT '0'
 );
 
DESCRIBE stdinfo; -- describe the table 

DROP TABLE stdinfo;  -- deletes the table

ALTER TABLE stdinfo ADD gpa DECIMAL(3,2);  -- adds column to the table
ALTER TABLE stdinfo DROP column gpa; -- removes that particular column

SELECT *FROM stdinfo;

INSERT INTO stdinfo VALUES(535,'Abhilash', 'CSE', 8.01);
INSERT INTO stdinfo VALUES(534,'Mohan', 'CSE', 7.5);
INSERT INTO stdinfo VALUES(545,'Prithvi', 'IT', 6.4);
INSERT INTO stdinfo(std_id, name, gpa) VALUES(527,'Madhu', 7.25); -- we can insert only some specific columns
INSERT INTO stdinfo VALUES(546,'Rohit', 'CSE', 9.1);
INSERT INTO stdinfo VALUES(435,'Naresh', 'CIVIL', 8.01);
INSERT INTO stdinfo VALUES(354,'KC', 'MECH', 5.5);
INSERT INTO stdinfo VALUES(502,'Nag Raj', 'CSE', 4.9);
INSERT INTO stdinfo(std_id, name, branch) VALUES(513,'Bannu', 'CSE');

UPDATE stdinfo SET branch = 'CSE' WHERE branch = 'Comp. Sci'; -- used to update 

DELETE FROM stdinfo WHERE std_id=502;  -- deletes that entry

SELECT *FROM stdinfo ORDER BY name;  -- simple order by
SELECT *FROM stdinfo ORDER BY gpa desc;  -- order by descending order
SELECT *FROM stdinfo ORDER BY gpa desc, name;  -- order by gpa but if any of 2 gpa's are same it checks with name
SELECT *FROM stdinfo ORDER BY gpa desc, name LIMIT 3; -- simple order by but limiting the selection by 3







