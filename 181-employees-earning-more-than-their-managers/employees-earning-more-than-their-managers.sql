# Write your MySQL query statement below
Select e2.name as Employee from employee e1 Inner join employee e2 on e1.id=e2.managerID where e1.salary<e2.salary;