# Write your MySQL query statement belo
select player_id, min(event_date) as first_login
from Activity 
group by player_id 
order by player_id, event_date ASC 

