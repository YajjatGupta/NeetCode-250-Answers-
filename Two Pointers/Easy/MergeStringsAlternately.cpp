// Problem: 1768. Merge Strings Alternately
// LeetCode: https://leetcode.com/problems/merge-strings-alternately/
// NeetCode: https://neetcode.io/problems/merge-strings-alternately
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0, j = 0;

        while (i < word1.size() && j < word2.size()) {
            ans += word1[i++];
            ans += word2[j++];
        }

        while (i < word1.size()) {
            ans.push_back(word1[i++]);
        }
        while (j < word2.size()) {
            ans += word2[j++];
        }

        return ans;
    }
};
