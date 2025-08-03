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
        if (strs.empty()) {
            return "";
        }
        string pref = strs[0];
        int preflen = pref.length();
        for (int i = 1; i < strs.size(); i++) {
            string s = strs[i];
            while (preflen > s.length() || pref != s.substr(0, preflen)) {
                preflen--;
                if (!preflen) {
                    return "";
                }
                pref = pref.substr(0, preflen);
            }
        }
        return pref;
    }
};
