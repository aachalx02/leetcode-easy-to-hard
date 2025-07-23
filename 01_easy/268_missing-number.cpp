// Leetcode #268 - Missing Number
// Link: https://leetcode.com/problems/missing-number/
// Author: Aachal Saxena

#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return total - sum;
    }
};