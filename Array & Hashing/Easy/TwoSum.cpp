// Problem: 1. Two Sum
// LeetCode: https://leetcode.com/problems/two-sum/
// NeetCode: https://neetcode.io/problems/two-sum
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int tar = target - nums[i];
            if (map.find(tar) != map.end()) {
                return {map[tar], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
