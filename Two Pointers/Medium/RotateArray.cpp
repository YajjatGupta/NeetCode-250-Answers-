// Problem: 189. Rotate Array
// LeetCode: https://leetcode.com/problems/rotate-array/
// NeetCode: https://neetcode.io/problems/rotate-array
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
    void reverseArray(vector<int>& s, int i, int j) {
        while (i <= j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  
        if (k == 0) return;

        reverseArray(nums, 0, n - 1);    
        reverseArray(nums, 0, k - 1);    
        reverseArray(nums, k, n - 1);     
    }
};
