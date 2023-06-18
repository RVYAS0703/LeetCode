# Write your MySQL query statement below
SELECT c.name AS Customers
from Customers c
LEFT JOIN Orders o
on c.id=o.customerId 
WHERE o.customerId IS NULL