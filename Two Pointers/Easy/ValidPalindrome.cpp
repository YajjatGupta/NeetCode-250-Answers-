// Problem: 125. Valid Palindrome
// LeetCode: https://leetcode.com/problems/valid-palindrome/
// NeetCode: https://neetcode.io/problems/valid-palindrome
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string common(string s) {
        string common = "";
        for (char ch : s) {
            if (isalnum(ch)) {
                common += tolower(ch);
            }
        }
        return common;
    }

    bool isPalindrome(string s) {
        s = common(s);
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
