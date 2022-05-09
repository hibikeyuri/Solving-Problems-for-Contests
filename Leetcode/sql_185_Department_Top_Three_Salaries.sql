select dep.name as Department, emp.name as Employee, emp.salary as Salary
from Employee as emp 
INNER JOIN Department as dep
ON emp.departmentId = dep.id
where
(
    select count(distinct emp2.salary) from Employee as emp2 
    where emp2.salary > emp.salary and emp2.departmentId = emp.departmentId
) in (0, 1, 2)
#compare with the same table, and compare with same departmentId
order by Salary desc
#order by emp.salary desc
