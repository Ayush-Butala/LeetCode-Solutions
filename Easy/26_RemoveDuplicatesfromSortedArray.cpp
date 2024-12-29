class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        int n = nums.size();
        for (int j = 0; j < n; j++)
        {
            if (nums[j] != nums[i])
            {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return (i + 1);
    }
};

// Example 1:
// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]

// Example 2:
// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]