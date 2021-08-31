show databases;
create database course;
use course;
show tables;
create table student(htno varchar(10),sname char(20),phno int, branch char(10),age real);
show tables;
insert into student values("197R123","ram",12345,"cse",21);
insert into student values("197R124","sita",234567,"AIML",24);
insert into student values("hno","name",23456,"branch",36);
insert into student(htno,phno) values("197R125",145879);
insert into student(age,sname) values(23.5,"laxman");
insert into student(phno,age,htno,branch,sname) values(12487,22.5,"197R125","DS","hanuma");
insert into student values("197R1234","aakasm",23756,"CSE",28);
insert into student values("197R153","abhi",23463567,"CSD",19);
insert into student values("197R127","madhu",23453167,"AIML",20);
select *from student;


