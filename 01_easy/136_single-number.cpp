// Leetcode #136 - Single Number
// Link: https://leetcode.com/problems/single-number/
// Author: Aachal Saxena

#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int num : nums) {
            // XOR cancels out numbers appearing twice
            result ^= num;
        }

        return result;
    }
};