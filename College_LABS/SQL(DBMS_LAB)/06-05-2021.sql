show databases;
use course;
show tables;
select *from students;
select sid,age,gpa from students;
select age,sid,gpa from students;
select sid from students;
select s.age,s.sid,s.gpa from students s;
update students set age=23 where sid="187R122";
update students s set s.age=24 where s.sid="187R123";
update students s set s.age=s.age+2,s.gpa=s.gpa-0.3,
s.gender="m" where s.sid="187R125";
desc enrolled;
desc students;
select *from enrolled;
select *from students;
desc students;
insert into enrolled values("187R121","19cse02","b");
delete from enrolled where sid="187R121";
delete from students where sid="187R121";
update enrolled set sid="187R121" where sid="187R123";
insert into students values("187R121","rajini","ra@cmr.com",
200,2.2,"2022-09-12",12345,"ra@m.com",123,"m");
insert into students() values(123,"rajini","ra@cmr.com",
200,2.2,"2022-09-12",12345,"ra@m.com","187R126","m");