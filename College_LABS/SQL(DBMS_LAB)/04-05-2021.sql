show databases;
use course;
show tables;
select *from tasks;
select *from tasks where priority=1;
select *from students;
select *from students where age=22;
update students set	login="ra@cmr.com" where sid="187R121";
desc students;
update students set	login="rj@cmr.com" where sid="187R122";
update students set login="ri@cmr.com",dob="2005-09-12"
where sid="187R122";
update students set login=REPLACE(login, "@cmr.com","@cse.com") 
where sid="187R121";
delete from students where sid="187R124";
delete from students;
delete from students where gpa=2.3 order by age limit 2;