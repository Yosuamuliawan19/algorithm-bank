# # Write your MySQL query statement below
select Email
from (
    select Email, count(Email) cnt from Person group by email 
) as Person
where cnt > 1
