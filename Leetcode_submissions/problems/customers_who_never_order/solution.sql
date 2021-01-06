# Write your MySQL query statement below
select Name as Customers  from (
  select Name, count(Orders.id) cnt from Customers left join Orders on Customers.Id = Orders.CustomerId group by Customers.Id
) as Customer
where cnt = 0;

#  select Name, count(Orders.id) from Customers left join Orders on Customers.Id = Orders.CustomerId group by customerId

