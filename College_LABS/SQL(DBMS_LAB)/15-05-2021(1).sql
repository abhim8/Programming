use course;
select *from students;
select *from students where gpa is null;
select *from students where gender is null;
select *from students where gpa is null and gender is null;
select *from students where age>24 and gpa is null;
select avg(age)from students where avg(gpa) is null;
select gender,avg(gpa) from students group by gender having avg(gender) is null;
select *from students where gpa is not null;
select gender,avg(age),avg(gpa) from students group by 
gender having avg(gender) is not null;
select *from students where std_name like 'a%';
select std_name from students where std_name like 'a%';
select std_name from students where std_name like '%i';
select std_name from students where std_name like '_a%';
select std_name from students where std_name like '__e%';
select std_name from students where std_name like '%e_';
select std_name from students where std_name like '%a%a%';
select std_name from students where std_name like '%ee%';
select *from students order by gpa;
select *from students order by gpa desc;
select sid,std_name,gpa from students where gpa>
(select avg(gpa) from students);
select std_name from students where sid in
(select sid from enrolled where grade="a");
select sid,std_name,gpa from students where gpa<=all
(select avg(gpa)from students);
select sid,std_name,gpa from students where gpa!=all
(select avg(gpa)from students);
select std_name from students where sid >all
(select sid from enrolled where grade="a");
select sid,std_name,gpa from students where gpa<=any
(select avg(gpa)from students);
select std_name from students where sid >any
(select sid from enrolled where grade="a");
select sid,std_name,gpa from students where gpa<=some
(select avg(gpa)from students);
select std_name from students where sid >some
(select sid from enrolled where grade="a");
select sid,std_name from students where exists
(select avg(gpa) from students);
select sid,std_name from students where not exists
(select sum(gpa) from students);
select std_name from students where exists
(select sid from enrolled);
select std_name from students where exists
(select sid from enrolled where grade="b");
select std_name from students where not exists
(select sid from enrolled);
select std_name from students where sid in
(select sid from enrolled where grade="b");
select std_name from students where age>24 and sid in
(select sid from enrolled where grade="a");
select std_name from students where sid not in
(select sid from enrolled where grade="b");
select std_name from students where age>24 and sid not in
(select sid from enrolled where grade="a");