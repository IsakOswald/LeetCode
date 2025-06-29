# 242. Valid Anagram

## Profile: https://leetcode.com/u/s7ky/

## Challenge Room: https://leetcode.com/problems/valid-anagram/description/

I solved this two different ways. One being sorting the two strings with `std::sort` and then comparing them (`==`). Beucase an anagram has to have the same ammount of letters and the same letters to be valid so this solution is very fast. The second way I solved it was more "normal" using a hashmap with `<letter:times_seen>` and looping through each string and subtracting one for the times_seen and the other adding one. If they s is an anagram of t it will "cancel" out the times seen. This means we loop through the hashmap and check to see if all values are 0. 
