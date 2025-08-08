// Problem: 42. Trapping Rain Water
// LeetCode: https://leetcode.com/problems/trapping-rain-water/
// NeetCode: https://neetcode.io/problems/trapping-rain-water
// Difficulty: Hard
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int left = 0, right = n - 1;
        int left_max = 0, right_max = 0;
        int total = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= left_max) {
                    left_max = height[left];
                } else {
                    total += left_max - height[left];
                }
                left++;
            } else {
                if (height[right] >= right_max) {
                    right_max = height[right];
                } else {
                    total += right_max - height[right];
                }
                right--;
            }
        }

        return total;
    }
};
