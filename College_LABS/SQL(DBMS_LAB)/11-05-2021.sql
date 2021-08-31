show databases;
use course;
show tables;
desc students;
desc enrolled;
select *from students;
select *from enrolled;
select s.std_name,e.cid from students s,enrolled e 
where s.sid=e.sid;
select s.std_name,e.cid from students s 
join enrolled e using(sid);
select s.std_name,e.cid from students s 
join enrolled e on(s.sid=e.sid);
select s.std_name,e.cid from students s 
join enrolled e on s.sid=e.sid;
select s.std_name,e.cid from students s,enrolled e 
where s.sid>e.sid;
select s1.std_name,s2.age from students s1,students s2 
where s1.sid=s2.sid;
select std_name,cid from students natural join enrolled;
select std_name,cid from students cross join enrolled;
select std_name,cid from students s left outer join 
enrolled e on(s.sid=e.sid);
select std_name,cid from students s right outer join 
enrolled e on(s.sid=e.sid);
select std_name,cid from students inner join 
enrolled using(sid);
select s.std_name,e.cid from students s,enrolled e
where s.sid=e.sid and e.grade="b";
select s.std_name from students s, enrolled e
where s.sid=e.sid and e.grade="a" and s.gender="f";