class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        int maxFreq = 0;
        for (auto it : freq)
        {
            maxFreq = max(maxFreq, it.second);
        }

        int total = 0;
        for (auto it : freq)
        {
            if (it.second == maxFreq)
            {
                total += it.second;
            }
        }
        return total;
    }
};

// Example 1:
//  Input: nums = [1,2,2,3,1,4]
//  Output: 4
//  Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
//  So the number of elements in the array with maximum frequency is 4.

// Example 2:
// Input: nums = [1,2,3,4,5]
// Output: 5
// Explanation: All elements of the array have a frequency of 1 which is the maximum.
// So the number of elements in the array with maximum frequency is 5.