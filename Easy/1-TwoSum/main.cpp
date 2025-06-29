#include <vector>
#include <unordered_map>

class Solution
{
   public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        // Create a has map to hold the numbers we have seen and their index in the vector.
        std::unordered_map<int, int> seen_nums;

        // Loop through nums.
        for (int i = 0; i < nums.size(); i++)
        {
            // Calculate the difference and check if that value is in the hashmap.
            // For example, if the target is 5 and the current num is 3, calculate 5-3 and then check if 2 is in the hash map.
            int comp = target - nums[i];

            // If the current number and the compliment are already in the hashmap we have our answer.
            if (seen_nums.count(comp)) return {seen_nums[comp], i};

            // If we couldnt find the asnwer, add it to the hashmap.
            seen_nums[nums[i]] = i;
        }

        // If we iterate through all of the nums and find now compliment and index that adds to target, there are no solutions.
        return {};
    }
};
