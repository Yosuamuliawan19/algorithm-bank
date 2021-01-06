# Write your MySQL query statement below
select name, sum(rest) rest, sum(paid)paid, sum(canceled)canceled, sum(refunded)refunded
from product join invoice using (product_id)
group by product_id
order by name