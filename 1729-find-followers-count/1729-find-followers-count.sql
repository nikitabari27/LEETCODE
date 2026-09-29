# Write your MySQL query statement below
SELECT user_id, COUNT(follower_id) AS followers_count
FROM Followers
Group by user_id
ORDER By user_id ASC;