 -- Find all employees
 SELECT *FROM employee;

 -- Find all clients
 SELECT *FROM client;
 
  -- Find all employees ordered by salary
 SELECT *FROM employee ORDER BY salary DESC;
 
 -- Find all employees ordered by sex, then name
 SELECT *FROM employee ORDER BY sex, first_name, last_name;
 
 -- Find all firstname and last names of all the employees
 SELECT first_name, last_name FROM employee;
 
 -- Find all forename and surnames of all the employees
 SELECT first_name AS forename, last_name AS surname FROM employee;
 
 -- Find out all the different genders
 SELECT DISTINCT sex as gender FROM employee;
 
 -- Find the no of employees (FUNCTION)
 SELECT COUNT(emp_id) FROM employee;
 
 -- Find the no of female employees who were born after 1970 (FUNCTION)
 SELECT COUNT(emp_id) FROM employee WHERE sex='F' AND birth_day>'1970-01-01';
 
 -- Find the avg of all the employees (FUNCTION)
 SELECT AVG(salary) FROM employee;
 
 -- Find the avg of all the male employees (FUNCTION)
 SELECT AVG(salary) FROM employee WHERE sex='M';
 
 -- Find the sum of all the employees (FUNCTION)
 SELECT SUM(salary) FROM employee;
 
 -- Find out ham many males and females employees are there (FUNCTION)
 SELECT COUNT(sex), sex as gender FROM employee GROUP BY sex;
  
 -- Find the total sales of each salesman (FUNCTION)
SELECT SUM(total_sales), emp_id FROM works_with GROUP BY emp_id;	

-- Find the total money spent by each client (FUNCTION)
SELECT SUM(total_sales), client_id FROM works_with GROUP BY client_id;	


-- WildCards:
-- % = any no of characters, _ = one character
-- Find any clients who are an LLC-Limited liability company (WildCards)
SELECT *FROM client WHERE client_name LIKE '%LLC';


-- Find a list of employees and branch names (Union)
SELECT first_name FROM employee UNION SELECT branch_name FROM branch;

-- Find a list of all clients & branch suppliers names (Union)
SELECT client_name, branch_id FROM client 
UNION 
SELECT supplier_name, branch_id FROM branch_supplier;
 
 INSERT INTO branch VALUES(4, 'Buffalo', NULL, NULL);


 -- JOINS:
 -- Find all branches and the names of their branches (JOIN)
SELECT employee.emp_id, employee.first_name, branch.branch_name
 FROM employee
 JOIN branch
 ON employee.emp_id=branch.mgr_id;
 
 
 -- Find all branches and the names of their branches (LEFT JOIN)
SELECT employee.emp_id, employee.first_name, branch.branch_name
 FROM employee
 LEFT JOIN branch
 ON employee.emp_id=branch.mgr_id;
 
 
 -- Find all branches and the names of their branches (RIGHT JOIN)
SELECT employee.emp_id, employee.first_name, branch.branch_name
 FROM employee
 RIGHT JOIN branch
 ON employee.emp_id=branch.mgr_id;
 
 
 -- NESTED Queries:
 -- Find names of all employees who have sold over 30,000 to a single client
 SELECT employee.first_name, employee.last_name 
 FROM employee 
 WHERE employee.emp_id IN (
	SELECT works_with.emp_id 
    FROM works_with 
    WHERE works_with.total_sales>30000
 );



CREATE TABLE trigger_test(
	message VARCHAR(100)
);