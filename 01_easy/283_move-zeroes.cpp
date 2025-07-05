// Leetcode #283 - Move Zeroes
// Link: https://leetcode.com/problems/move-zeroes/
// Author: Aachal Saxena

#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        // placing non-zero elements at the beginning
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }

        // filling rest of the positions with zeroes
        for (int i = index; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};