# Write your MySQL query statement below



# select ifnull(
#     round(
#         ((select count(*) from delivery where order_date = customer_pref_delivery_date)
#         / ( distinct delivery_id))
#     ,2), 0.00)    
# as immediate_percentage
# from delivery


select round(100 * sum(order_date = customer_pref_delivery_date) / count(*), 2) as immediate_percentage from Delivery;
