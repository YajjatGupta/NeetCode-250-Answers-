// Problem: 75. Sort Colors
// LeetCode: https://leetcode.com/problems/sort-colors/
// NeetCode: https://neetcode.io/problems/sort-colors
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int l = 0, mid = 0, h = arr.size() - 1;
        while (mid <= h) {
            if (arr[mid] == 0) {
                swap(arr[mid], arr[l]);
                mid++;
                l++;
            } else if (arr[mid] == 1) {
                mid++;
            } else {
                swap(arr[mid], arr[h]);
                h--;
            }
        }
    }
};
