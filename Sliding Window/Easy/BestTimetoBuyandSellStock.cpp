// Problem: 121. Best Time to Buy and Sell Stock
// LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// NeetCode: https://neetcode.io/problems/best-time-to-buy-and-sell-stock
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0]; 
        int profit = 0;      

        for(int i = 1; i < n; i++){
            if(prices[i] < buy){
                buy = prices[i];
            } else if(prices[i] - buy > profit){
                profit = prices[i] - buy;
            }
        }

        return profit;
    }
};
