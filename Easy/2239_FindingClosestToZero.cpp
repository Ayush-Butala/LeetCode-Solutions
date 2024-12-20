class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        int n = nums.size();
        int closest = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (abs(nums[i]) < abs(closest))
            {
                closest = nums[i];
            }
            else if (abs(nums[i]) == abs(closest) && nums[i] > closest)
            {
                closest = nums[i];
            }
        }
        return closest;
    }
};

// Example 1:
//  Input: nums = [-4,-2,1,4,8]
// Output: 1

// Example 2:
// Input: nums = [2,-1,1]
// Output: 1