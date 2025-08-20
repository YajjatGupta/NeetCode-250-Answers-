// Problem: 14. Longest Common Prefix
// LeetCode: https://leetcode.com/problems/longest-common-prefix/
// NeetCode: https://neetcode.io/problems/longest-common-prefix
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n * m) — n = number of strings, m = length of shortest string
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

