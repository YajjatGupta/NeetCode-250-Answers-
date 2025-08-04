// Problem: 271. Encode and Decode Strings
// LeetCode: https://leetcode.com/problems/encode-and-decode-strings/
// NeetCode: https://neetcode.io/problems/encode-and-decode-strings
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";
        for (const string& str : strs) {
            ans += to_string(str.size()) + '#' + str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.size()) {
            int len = 0;
            while (s[i] != '#') {
                len = len * 10 + (s[i] - '0');  
                i++;
            }
            i++;  
            ans.push_back(s.substr(i, len));
            i += len;
        }
        return ans;
    }
};
