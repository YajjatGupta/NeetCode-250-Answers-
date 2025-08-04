// Problem: 912. Sort an Array
// LeetCode: https://leetcode.com/problems/sort-an-array/
// NeetCode: https://neetcode.io/problems/sort-an-array
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }
        return result;
    }
};
