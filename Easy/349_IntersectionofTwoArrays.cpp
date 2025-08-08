class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> elementsInArray1;
        for (int i = 0; i < nums1.size(); i++)
        {
            elementsInArray1.insert(nums1[i]);
        }
        unordered_set<int> intersectionSet;
        for (int j = 0; j < nums2.size(); j++)
        {
            if (elementsInArray1.find(nums2[j]) != elementsInArray1.end())
            {
                intersectionSet.insert(nums2[j]);
            }
        }
        vector<int> result(intersectionSet.begin(), intersectionSet.end());
        return result;
    }
};

// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.