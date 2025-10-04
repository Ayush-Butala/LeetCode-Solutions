class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> myV;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                myV.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                myV.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                myV.push_back("Buzz");
            }
            else
            {
                myV.push_back(to_string(i));
            }
        }
        return myV;
    }
};

// Example 1:
// Input: n = 3
// Output: ["1","2","Fizz"]

// Example 2:
// Input: n = 5
// Output: ["1","2","Fizz","4","Buzz"]

// Example 3:
// Input: n = 15
// Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]