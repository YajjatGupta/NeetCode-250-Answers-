// Problem: 217. Contains Duplicate
// LeetCode: https://leetcode.com/problems/contains-duplicate/
// NeetCode: https://neetcode.io/problems/contains-duplicate
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n log n)
// Space Complexity: O(1) (ignoring sort space if in-place)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};
