// Problem: 1929. Concatenation of Array
// LeetCode: https://leetcode.com/problems/concatenation-of-array/
// NeetCode: https://neetcode.io/problems/concatenation-of-array
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};
