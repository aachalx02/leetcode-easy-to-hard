// Leetcode #242 - Valid Anagram
// Link: https://leetcode.com/problems/valid-anagram/
// Author: Aachal Saxena

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> count;

        // Count frequency of each char in s
        for (char c : s) {
            count[c]++;
        }

        // Subtract frequency for each char in t
        for (char c : t) {
            count[c]--;
            if (count[c] < 0) return false;
        }

        return true;
    }
};