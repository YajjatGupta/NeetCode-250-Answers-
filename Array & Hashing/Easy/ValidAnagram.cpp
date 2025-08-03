// Problem: 242. Valid Anagram
// LeetCode: https://leetcode.com/problems/valid-anagram/
// NeetCode: https://neetcode.io/problems/valid-anagram
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1) (since map size is bounded by character set)

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for (char c : s) {
            mp1[c]++;
        }
        for (char c : t) {
            mp2[c]++;
        }

        for (auto i : mp1) {
            if (i.second != mp2[i.first]) return false;
        }
        return true;
    }
};
