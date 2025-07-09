// Leetcode #121 - Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Author: Aachal Saxena

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            // Update minimum price so far
            minPrice = min(minPrice, prices[i]);

            // Calculate current profit if sold today
            int currentProfit = prices[i] - minPrice;

            // Update max profit if current is greater
            maxProfit = max(maxProfit, currentProfit);
        }

        return maxProfit;
    }
};
