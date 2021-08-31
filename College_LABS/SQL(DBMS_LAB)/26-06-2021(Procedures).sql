show databases;
use classicmodels;
show tables;
SELECT 
    customerName, 
    city, 
    state, 
    postalCode, 
    country
FROM
    customers
ORDER BY customerName;
DELIMITER $$

CREATE PROCEDURE GetCustomers()
BEGIN
	SELECT 
		customerName, 
		city, 
		state, 
		postalCode, 
		country
	FROM
		customers
	ORDER BY customerName;    
END$$
DELIMITER ;


call GetCustomers();
use course;
select *from students;
DELIMITER $$
CREATE PROCEDURE mstudent()
BEGIN
	SELECT std_name from students where gpa>2.4 and gender='m';
END$$
DELIMITER ;
call mstudent();
call csustomer();
drop procedure csustomer();
drop procedure csustomer;
drop procedure abd;
drop procedure if exists abd;

DELIMITER $$

CREATE PROCEDURE GetTotalOrder()
BEGIN
	DECLARE totalOrder INT DEFAULT 0;
    
    SELECT COUNT(*) 
    INTO totalOrder
    FROM orders;
    
    SELECT totalOrder;
END$$

DELIMITER ;
call GetTotalOrder();
DELIMITER $$
SELECT * FROM offices;
CREATE PROCEDURE GetOfficeByCountry(IN countryName VARCHAR(255))
BEGIN
	SELECT * 
 	FROM offices
	WHERE country = countryName;
END $$

DELIMITER ;
call GetOfficeByCountry('USA');
call GetOfficeByCountry('France');
call GetOfficeByCountry();
call GetOfficeByCountry('India');

SELECT *FROM orders;

DELIMITER $$

CREATE PROCEDURE GetOrderCountByStatus (
	IN  orderStatus VARCHAR(25),
	OUT total INT)
BEGIN
	SELECT COUNT(orderNumber)
	INTO total
	FROM orders
	WHERE status = orderStatus;
END$$

DELIMITER ;
CALL GetOrderCountByStatus('Shipped',@total);
SELECT @total;
CALL GetOrderCountByStatus('Cancelled',@total);
SELECT @total;
CALL GetOrderCountByStatus('in process',@total);
SELECT @total;
DELIMITER $$

CREATE PROCEDURE SetCounter(
	INOUT counter INT,
    IN inc INT
)
BEGIN
	SET counter = counter + inc;
END$$

DELIMITER ;
SET @counter = 1;
CALL SetCounter(@counter,1); 
SELECT @counter; 
CALL SetCounter(@counter,1); 
SELECT @counter; 
CALL SetCounter(@counter,5); 
SELECT @counter; 