# Write your MySQL query statement below
SELECT  MAX(num) AS num
FROM MyNumbers
WHERE num IN (select num 
  from MyNumbers
  GROUP BY num
  having count(num) =1 
  ) 