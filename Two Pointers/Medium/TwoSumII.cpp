// Problem: 167. Two Sum II - Input Array Is Sorted
// LeetCode: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// NeetCode: https://neetcode.io/problems/two-sum-ii-input-array-is-sorted
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            } else {
                return {i + 1, j + 1}; 
            }
        }

        return {};
    }
};
