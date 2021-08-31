use course;
select *from students;
select count(*) from students;
select count(gpa) from students;
select count(*) from students where age>25;
select count(*) from students where age>24 and gender='f';
select count(age) from students;
select count(distinct age) from students;
select count(distinct age)from students where gpa>2.3;
select gender,count(*) from students group by gender;
select gender,count(*) from students group by gender 
having count(*)>2;
select gender,count(*) from students group by gender 
having count(*)>2 order by count(*);
select *from students order by age;
select *from students order by age desc;
select sum(age) from students;
select sum(age) total_age from students;
select sum(age) from students where age>25;
select sum(age)from students where age>24 and gender='f';
select gpa,sum(age) from students group by gpa;
select gender,sum(age) from students group by gender;
select gpa,sum(age)from students group by gpa 
having sum(age)>45;
select gpa,sum(age)from students group by gpa;
select gpa,sum(age) from students group by gpa order by gpa;
select gpa,sum(age) from students group by gpa order by sum(age);
select gpa,sum(age)from students group by gpa 
having sum(age)>45 order by gpa;
select gpa,sum(age)from students group by gpa order by gpa desc;
select avg(age) from students;
select avg(distinct age) from students;
select avg(gpa) from students where age>25;
select gender,avg(age) from students group by gender;
select gender,avg(gpa) from students group by gender;
select gender,avg(age) from students group by gender 
having avg(age)>25;
select gender,avg(age) from students group by gender 
order by avg(age);
select gender,avg(age) from students group by gender 
order by avg(age) desc;
select *from students;
select max(age)from students;
select max(distinct age)from students;
select max(age) from students where gpa>2.4;
select max(age) from students where gpa>2.4 and gender='f';
select gender,max(age)from students group by gender;
select gender,max(gpa)from students group by gender;
select gender,max(age) from students group by gender 
having max(age)>27;
select gender,max(age)from students group by gender 
order by max(age) desc;
select min(age)from students;
select min(distinct gpa)from students;
select min(age)from students where gender='f';
select min(age)from students where gender='f' and gpa>2.3;
select gender,min(age)from students group by gender;
select gender,min(age)from students group by gender 
having min(age)>22;
select gender,min(age)from students group by gender 
order by min(age) desc;