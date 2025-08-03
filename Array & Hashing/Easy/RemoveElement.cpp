// Problem: 27. Remove Element
// LeetCode: https://leetcode.com/problems/remove-element/
// NeetCode: https://neetcode.io/problems/remove-element
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};
