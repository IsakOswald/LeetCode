#include <vector>
#include <algorithm>

class Solution
{
   public:
    bool containsDuplicate(std::vector<int>& nums)
    {
        // Check if the size is less than or equal to 1.
        // If it is we know there is no duplicates.
        if (nums.size() <= 1) return false;

        // Sort the vecotr of numbers.
        std::sort(nums.begin(), nums.end());

        // Now we can loop through a sorted vecotor strarting from the SECOND element.
        for (int i = 1; i < nums.size(); i++)
        {
            // Check if the current number matches the previous number.
            if (nums[i] == nums[i - 1]) return true;  // If it does then there are ATLEAST two of the same numbers.
        }

        // If not then there are no duplicates.
        return false;
    }
};
