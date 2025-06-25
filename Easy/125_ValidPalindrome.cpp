class Solution
{
public:
    bool isPalindrome(string s)
    {
        int L = 0;
        int R = s.length() - 1;
        while (L < R)
        {
            while (L < R && !isalnum(s[L]))
                L++;
            while (L < R && !isalnum(s[R]))
                R--;

            if (tolower(s[L]) != tolower(s[R]))
            {
                return false;
            }
            L++;
            R--;
        }
        return true;
    }
};

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.