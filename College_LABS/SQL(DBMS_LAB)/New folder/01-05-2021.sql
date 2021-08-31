show databases;
use course;
show tables;
desc students;
alter table students add phno int;
alter table students add mail varchar(20) not null;
alter table students add aadhaar int unique;
alter table students add pan varchar(10) primary key;
select *from students;
alter table students add pan varchar(15) unique,
add gender char not null;
alter table students modify gender char(5);
alter table students modify gender char(10) not null;
alter table students modify aadhaar int2,
modify pan varchar(10),modify gender char(5) null;
alter table students change column pan pan_num varchar(8);
alter table students change column sname std_name 
varchar(18) not null; 
desc students;
alter table students rename to std;
alter table students drop column pan_num;
show tables;
desc section;
create table section(sname varchar(10) primary key, room_no int,
block char not null, floor int not null);
select *from std;
insert into section values("cse-a",216,"c",2);
insert into section values("cse-b",217,"c",2);
insert into section values("cse-c",218,"c",2);
insert into section values("cse-d",219,"c",2);
select *from section;
show tables;
drop table section;
truncate table section;
select *from enrolled;
desc enrolled;
select *from students;
insert into enrolled values("187R122","19lab","c");
alter table std rename to students;
select *from enrolled;