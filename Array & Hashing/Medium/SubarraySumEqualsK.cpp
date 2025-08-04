// Problem: 560. Subarray Sum Equals K
// LeetCode: https://leetcode.com/problems/subarray-sum-equals-k/
// NeetCode: https://neetcode.io/problems/subarray-sum-equals-k
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
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int sum = 0;
        int ans = 0;
        map[sum] = 1;
        for (int num : nums) {
            sum += num;
            int f = sum - k;
            if (map.find(f) != map.end()) {
                ans += map[f];
            }
            map[sum]++;
        }
        return ans;
    }
};
