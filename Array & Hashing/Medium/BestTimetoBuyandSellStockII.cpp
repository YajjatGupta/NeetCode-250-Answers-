// Problem: 122. Best Time to Buy and Sell Stock II
// LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// NeetCode: https://neetcode.io/problems/best-time-to-buy-and-sell-stock-ii
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;
        for (int i = 0; i < n; i++) {
            if (buy > prices[i]) {
                buy = prices[i];
            } else {
                profit += prices[i] - buy;
                buy = prices[i];
            }
        }
        return profit;
    }
};
