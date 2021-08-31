show databases;
use sakila;
show tables;
create database college;
show databases;
use college;
show tables;
create table student(hno varchar(10),name char(20),phno int(10),
branch char(10),age real);
show tables; 
desc student;
insert into student values("197R123","ram",12345,"cse",21.45);
select *from student;
insert into student values("197R124","sita",234567,"AIML",21.34);
select *from student;
insert into student values("hno","name",phno,"branch",age);
select *from student;
insert into student(hno,phno) values("197R125",145879);
select *from student;
insert into student(age,name) values(23.5,"laxman");
select *from student;
insert into student(phno,age,hno,branch,name) values(12487,22.5,
"197R125","DS","hanuma");
select *from student;
select name,branch from student;
select branch,hno from student;
select name from student;
select *from student;