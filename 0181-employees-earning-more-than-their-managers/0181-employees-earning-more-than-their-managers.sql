# Write your MySQL query statement below
Select e1.name AS Employee
from Employee e1
INNER JOIN Employee e2
on e1.managerID=e2.id
WHERE e1.salary>e2.salary