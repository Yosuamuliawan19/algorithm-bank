# Write your MySQL query statement belo


select extra report_reason, count(distinct post_id) as report_count
from actions
where action_date = '2019-07-04' and action = 'report'
group by extra