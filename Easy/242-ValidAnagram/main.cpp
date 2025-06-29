#include <string>
#include <unordered_map>

class Solution
{
   public:
    bool isAnagram(std::string s, std::string t)
    {
        // If the size is different then they CANT be an anagram.

        if (s.size() != t.size())
        {
            return false;
        }

        // Create a hashmap to count the ammount of times we have seen each char <letter:time_seen>.
        std::unordered_map<char, int> seen_values;

        // Loop through any of the strings (since we know they the same size)
        for (size_t i = 0; i < s.size(); i++)
        {
            // For every letter in s add one to the time_seen.
            seen_values[s[i]]++;
            // For every letter in t subtrack one from the time_seen.
            seen_values[t[i]]--;
        }

        // Doing this (if the two stings are an anagram) will cancel each other out meaning every letter has a value of 0.

        // Loop through every hashmap entry.
        for (const auto& p : seen_values)
        {
            // Check if the time_seen is NOT 0.
            if (p.second != 0)
            {
                // If the times seen is anything but 0 its not a anagram.
                return false;
            }
        }

        // If the loop dosnt detect any ccharacters with acount above or below 0, we have a anagram.
        return true;
    }
};
