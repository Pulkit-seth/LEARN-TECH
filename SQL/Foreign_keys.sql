create table Customers( customer_id number(5) primary key, customer_name varchar(20) not null);
insert into Customers values('1', 'John');
insert into Customers values(2, 'Jatin');
insert into Customers values(3, 'Bob');
select *from Customers;
select *from Orders;


create table Orders ( Order_id number(5) primary key, OrderNumber Number(5) not null, customer_id number(5), foreign key(customer_id) references Customers(customer_id));
insert into Orders values (1, 101, 1);
insert into Orders values (2, 102, 2);
insert into Orders values (3, 103, 3);

select Customers.customer_id, Orders.OrderNumber from Customers, Orders;
