use course;
select *from students;
create view s_students as
select sid,std_name from students;
select *from s_students;
create view g_students as
select sid,std_name from students where gender='f';
select *from g_students;
create view b_students as select sid,std_name from students
where gender='m';
select *from b_students;
create view s_details as select sid,std_name from students
where gpa>2.4;
select *from s_details;
create or replace view s_details as select sid,age from students 
where gpa>2.4 and gender="f";
alter view s_details as select sid,std_name from students 
where gpa>2.4 and gender="m";
drop view s_details;
create or replace view training as 
select s.std_name,e.grade from students s,enrolled e 
where s.sid=e.sid;
select *from training;
create or replace view training as
select s.std_name,s.gpa,e.grade from students s,enrolled e
where s.gpa>2.4 and e.grade='a' and s.gender='m' and s.sid=e.sid;