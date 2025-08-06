// Problem: 881. Boats to Save People
// LeetCode: https://leetcode.com/problems/boats-to-save-people/
// NeetCode: https://neetcode.io/problems/boats-to-save-people
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n log n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0;
        int j = people.size() - 1;
        int cnt = 0;

        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
                j--;
            } else {
                j--;
            }
            cnt++;
        }

        return cnt;
    }
};
