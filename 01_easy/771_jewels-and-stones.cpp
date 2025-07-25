// Leetcode #771 - Jewels and Stones
// Link: https://leetcode.com/problems/jewels-and-stones/
// Author: Aachal Saxena

#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int count = 0;

        for (char stone : stones) {
            if (jewelSet.count(stone)) {
                count++;
            }
        }

        return count;
    }
};
