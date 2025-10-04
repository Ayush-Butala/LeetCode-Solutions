# LeetCode Solutions in C++

This repository contains my solutions to problems from [LeetCode](https://leetcode.com/), written in C++.  
Each problem is categorized by difficulty and topic for easy navigation.

---

## Structure

- **Easy**: Beginner-friendly problems.
- **Medium**: Moderate-level challenges.
- **Hard**: Advanced problems.

---

## Problems Solved

### Easy

1. [2239. Finding Closest to Zero](https://leetcode.com/problems/find-closest-number-to-zero/description/)  
   **Solution**: [2239_FindingClosestToZero.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/2239_FindingClosestToZero.cpp)

   - **Input**: `nums = {-4, -2, 1, 4, 8}`
   - **Output**: `1`

2. [1929. Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/description/)  
   **Solution**: [1929_ConcatenationOfArray.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/1929_ConcatenationOfArray.cpp)

   - **Input**: `nums = {1, 2, 1}`
   - **Output**: `{1, 2, 1, 1, 2, 1}`

3. [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)  
   **Solution**: [242_ValidAnagram.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/242_ValidAnagram.cpp)

   - **Input**:  
     `s = "anagram", t = "nagaram"`

   - **Output**:  
     `true`

4. [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)  
   **Solution**: [26_RemoveDuplicates.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/26_RemoveDuplicatesfromSortedArray.cpp)

   - **Input**: `nums = [1,1,2]`
   - **Output**: `2`
   - **Explanation**: The function should return `2`, and the first two elements of the array should be `1` and `2`. Note that the solution doesn't need to worry about the elements after the return value.

5. [7. Reverse Integer](https://leetcode.com/problems/reverse-integer/)  
   **Solution**: [7_ReverseInteger.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/7_ReverseInteger.cpp)

   - **Input**: `x = 123`
   - **Output**: `321`
   - **Explanation**: Reverses the digits of the input integer. Returns 0 if the reversed integer overflows.

6. [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)  
   **Solution**: [9_PalindromeNumber.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/9_PalindromeNumber.cpp)

   - **Input**: `x = 121`
   - **Output**: `true`
   - **Explanation**: The number reads the same forward and backward.

7. [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)  
   **Solution**: [125_ValidPalindrome.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/125_ValidPalindrome.cpp)

   - **Input**: `s = "A man, a plan, a canal: Panama"`
   - **Output**: `true`
   - **Explanation**: "amanaplanacanalpanama" is a palindrome.

8. [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)  
   **Solution**: [509_FibonacciNumber.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/509_FibonnaciNumber.cpp)

   - **Input**: `n = 2`
   - **Output**: `1`
   - **Explanation**: F(2) = F(1) + F(0) = 1 + 0 = 1.

9. [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)  
   **Solution**: [217_ContainsDuplicate.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/217_ContainsDuplicate.cpp)

   - **Input**: `[1,2,3,1]`
   - **Output**: `true`
   - **Explanation**: The element 1 occurs at the indices 0 and 3.

10. [189. Rotate Array](https://leetcode.com/problems/rotate-array/)  
    **Solution**: [189_RotateArray.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Medium/189_RotateArray.cpp)

    - **Input**: `nums = [1,2,3,4,5,6,7], k = 3`
    - **Output**: `[5,6,7,1,2,3,4]`
    - **Explanation**: rotate 1 steps to the right: [7,1,2,3,4,5,6]  
      rotate 2 steps to the right: [6,7,1,2,3,4,5]  
      rotate 3 steps to the right: [5,6,7,1,2,3,4]

11. [283. Move Zeros](https://leetcode.com/problems/move-zeroes/)  
    **Solution**: [283_MoveZeros.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/283_MoveZeros.cpp)

    - **Input**: `nums = [0,1,0,3,12]`
    - **Output**: `[1,3,12,0,0]`

12. [349. Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)  
    **Solution**: [349_IntersectionofTwoArrays.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/349_IntersectionofTwoArrays.cpp)

    - **Input**: `nums1 = [4,9,5], nums2 = [9,4,9,8,4]`
    - **Output**: `[9,4]`
    - **Explanation**: [4,9] is also accepted.

13. [268. Missing Number](https://leetcode.com/problems/missing-number/)  
    **Solution**: [268_MissingNumber.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/268_MissingNumber.cpp)

    - **Input**: `nums = [0,1]`
    - **Output**: `2`
    - **Explanation**: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

14. [485. Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/)  
    **Solution**: [485_MaxConsecutiveOnes.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/485_MaxConsecutiveOnesr.cpp)

    - **Input**: `nums = [1,1,0,1,1,1]`
    - **Output**: `3`
    - **Explanation**: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

15. [136. Single Number](https://leetcode.com/problems/single-number/)  
    **Solution**: [136_SingleNumber.cpp](https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/136_SingleNumber.cpp)

    - **Input**: `nums = [2,2,1]`
    - **Output**: `1`

16. [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/)  
    **Solution**: [69_Sqrt(x).cpp](<https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/69_Sqrt(x).cpp>)

    - **Input**: `x = 4`
    - **Output**: `2`
    - **Explanation**: The square root of 4 is 2, so we return 2

17. [3005. Count Elements With Maximum Frequency](https://leetcode.com/problems/count-elements-with-maximum-frequency/)  
    **Solution**: [3005_CountElementsWithMaximumFrequency.cpp](<https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/3005_CountElementsWithMaximumFrequency.cpp>)

    - **Input**: `nums = [1,2,2,3,1,4]`
    - **Output**: `4`
    - **Explanation**: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array. So the number of elements in the array with maximum frequency is 4.

18. [412. Fizz Buzz](https://leetcode.com/problems/fizz-buzz/)  
    **Solution**: [412_FizzBuzz.cpp](<https://github.com/Ayush-Butala/LeetCode-Solutions/blob/main/Easy/412_FizzBuzz.cpp)

    - **Input**: `Input: n = 5`
    - **Output**: `["1","2","Fizz","4","Buzz"]`

---

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/Ayush-Butala/LeetCode-Solutions.git
   ```
