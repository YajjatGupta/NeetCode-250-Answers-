// Problem: 229. Majority Element II
// LeetCode: https://leetcode.com/problems/majority-element-ii/
// NeetCode: https://neetcode.io/problems/majority-element-ii
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        vector<int> ans;
        for (auto& pair : freq) {
            if (pair.second > nums.size() / 3) {
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};
