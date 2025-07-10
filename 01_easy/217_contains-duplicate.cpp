// Leetcode #217 - Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate/
// Author: Aachal Saxena

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};