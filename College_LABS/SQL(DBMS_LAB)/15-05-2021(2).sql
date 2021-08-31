use course;
select sid from students
union
select sid from enrolled order by sid;
select * from students
union
select * from enrolled;
desc students;
desc enrolled;
select sid from students
union all
select sid from enrolled order by sid;
select distinct sid from students
inner join
enrolled using(sid);
select count(*)from students;
select count(*)from enrolled;
select distinct sid from students where sid in
(select sid from enrolled);
select sid from students left join enrolled
using(sid) where enrolled.sid is not null;