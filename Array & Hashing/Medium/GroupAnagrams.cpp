// Problem: 49. Group Anagrams
// LeetCode: https://leetcode.com/problems/group-anagrams/
// NeetCode: https://neetcode.io/problems/group-anagrams
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n * k log k), where n = number of strings, k = max string length
// Space Complexity: O(n * k)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> str;
        for (string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            str[t].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto& pair : str) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
