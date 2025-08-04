// Problem: 128. Longest Consecutive Sequence
// LeetCode: https://leetcode.com/problems/longest-consecutive-sequence/
// NeetCode: https://neetcode.io/problems/longest-consecutive-sequence
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1) (ignoring sort space if in-place)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int lastnumber = INT_MIN;
        int cnt = 0;
        int longest = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == lastnumber) continue;
            else if (nums[i] - 1 == lastnumber) {
                cnt += 1;
                lastnumber = nums[i];
            }
            else {
                cnt = 1;
                lastnumber = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};
