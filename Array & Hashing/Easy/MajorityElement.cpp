// Problem: 169. Majority Element
// LeetCode: https://leetcode.com/problems/majority-element/
// NeetCode: https://neetcode.io/problems/majority-element
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
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        for (auto& pair : map) {
            if (pair.second > nums.size() / 2) {
                return pair.first;
            }
        }
        return 0;
    }
};
