create table employee01(empno number(3) primary key, ename char(20) not null, salary number(10) not null, commision number(4), job char(20), deptno number(3));
insert into employee01 values(102, 'Nisha', 55000, 500, 'Engineer', 7);
insert into employee01 values(103, 'Neha', 60000, 350, 'Manager', 10);
insert into employee01 values(104, 'Ashish', 50000, 1000, 'Supervisor', 8);
insert into employee01 values(105, 'Nishant', 70000, 2000, 'Assistance Manager', 9);
insert into employee01 values(106, 'Niikhil', 70000, 200, 'Clerk', 11);
select *from employee01;


select avg(salary), sum(salary) from employee01;
select avg(salary), sum(salary) from employee01 group by job;
select min(salary) from employee01 where job = 'Manager';
select max(salary) from employee01 where job = 'Manager';
select count(empno) from employee01 where job = 'Manager';
