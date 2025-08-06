// Problem: 15. 3Sum
// LeetCode: https://leetcode.com/problems/3sum/
// NeetCode: https://neetcode.io/problems/3sum
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n^2)
// Space Complexity: O(n) — due to the use of a set for deduplication

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> triplets;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum > 0) {
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    triplets.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
            }
        }

        for (auto& triplet : triplets) {
            ans.push_back(triplet);
        }

        return ans;
    }
};
