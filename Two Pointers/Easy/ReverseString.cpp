// Problem: 344. Reverse String
// LeetCode: https://leetcode.com/problems/reverse-string/
// NeetCode: https://neetcode.io/problems/reverse-string
// Difficulty: Easy
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while (i <= j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};
