class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        int ori = x;
        int rev = 0;
        while (x > 0)
        {
            int ld = x % 10;
            if (rev > (INT_MAX - ld) / 10)
                return false;
            rev = (rev * 10) + ld;
            x = x / 10;
        }
        if (ori == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// Example 1:
// Input: x = 121
// Output: true

// Example 2:
// Input: x = -121
// Output: false

// Example 3:
// Input: x = 10
// Output: false