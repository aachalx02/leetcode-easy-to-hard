// Leetcode #9 - Palindrome Number
// Link: https://leetcode.com/problems/palindrome-number/
// Author: Aachal Saxena

class Solution {
public:
    bool isPalindrome(int x) {
         // Negative numbers and numbers ending with 0 (except 0 itself) can't be palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed = 0;

        // Reverse only half the number
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x = x / 10;
        }

        // x == reversed for even length, x == reversed / 10 for odd length
        return x == reversed || x == reversed / 10;
    }
};