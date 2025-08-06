// Problem: 11. Container With Most Water
// LeetCode: https://leetcode.com/problems/container-with-most-water/
// NeetCode: https://neetcode.io/problems/container-with-most-water
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n - 1;
        int area = 0;

        while (i < j) {
            area = max(area, (j - i) * min(heights[i], heights[j]));
            if (heights[j] > heights[i]) {
                i++;
            } else {
                j--;
            }
        }

        return area;
    }
};
