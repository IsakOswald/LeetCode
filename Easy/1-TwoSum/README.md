# 1. Two Sum

## Profile: https://leetcode.com/u/s7ky/

## Challenge Room: https://leetcode.com/problems/two-sum/

To solve this I used a hashmap. I loop through the nums vector and check if the difference between target and the current num in the vector is equal to a value we have stored in the hasmap. If it is, that means out solution is the current num and whatever we found to be in our hash table. If not, we just add it to the hash table in hopes of finding it on a next iteration. If we iterate through the whole of the nums vector and no two numbers summed to be target, return an emptry vector.
