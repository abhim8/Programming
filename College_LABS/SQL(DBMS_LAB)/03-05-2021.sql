show databases;
use college;
show tables;
use course;
show tables;
select *from students;
create table if not exists students(id varchar(10), name char(15));
create table tasks(task_id int auto_increment,
title varchar(200) not null, start_date date,
due_date date, priority int not null default 5,
description text,primary key(task_id));
describe tasks;
insert into tasks(title,priority) 
values("learning MySql insert stmt",1);
select *from tasks;
insert into tasks(title,priority) 
values("learning MySql insert stmt2",default);
insert into tasks(title,start_date,due_date)
values("insert date into table","2020-09-01","2021-01-02");
insert into tasks(title,start_date,due_date)
values("use current date for the task",CURRENT_DATE(),
CURRENT_DATE());
insert into tasks(title,priority)
values("my first task",1),
("my second task",2),
("my third task",3);