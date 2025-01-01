class Solution
{
public:
    int reverse(int x)
    {
        long rno = 0;
        while (x != 0)
        {
            int last = x % 10;
            x = x / 10;
            rno = rno * 10 + last;
        }
        if (rno > INT_MAX || rno < INT_MIN)
        {
            return 0;
        }

        return static_cast<int>(rno);
    }
};