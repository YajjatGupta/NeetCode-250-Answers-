// Problem: 238. Product of Array Except Self
// LeetCode: https://leetcode.com/problems/product-of-array-except-self/
// NeetCode: https://neetcode.io/problems/product-of-array-except-self
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1) (excluding the output array)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        int p = nums[0];
        pre[0] = 1;
        for (int i = 1; i < n; i++) {
            pre[i] = p;
            p *= nums[i];
        }
        p = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            pre[i] *= p;
            p *= nums[i];
        }
        return pre;
    }
};
