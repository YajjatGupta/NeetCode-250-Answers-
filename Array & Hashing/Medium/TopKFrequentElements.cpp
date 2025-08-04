// Problem: 347. Top K Frequent Elements
// LeetCode: https://leetcode.com/problems/top-k-frequent-elements/
// NeetCode: https://neetcode.io/problems/top-k-frequent-elements
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        vector<int> res;
        priority_queue<pair<int, int>> pq;
        for (auto i = freq.begin(); i != freq.end(); i++) {
            pq.push({i->second, i->first});
        }
        while (k-- && !pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
