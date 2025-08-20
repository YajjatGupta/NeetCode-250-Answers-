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
        if (s.size() != t.size()) return false;
        vector<int> count(26, 0);
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for (int c : count) if (c != 0) return false;
        return true;
    }
};
