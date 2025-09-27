// Problem: 219. Contains Duplicate II
// LeetCode: https://leetcode.com/problems/contains-duplicate-ii/
// NeetCode: https://neetcode.io/problems/contains-duplicate-ii
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(seen.count(nums[i]) && i - seen[nums[i]] <= k){
                return true;
            }
            seen[nums[i]] = i;
        }
        return false;
    }
};

// Problem: 219. Contains Duplicate II
// LeetCode: https://leetcode.com/problems/contains-duplicate-ii/
// NeetCode: https://neetcode.io/problems/contains-duplicate-ii/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(k)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> seen;
        if(k == 0) return false;
        if(k >= nums.size()) k = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            if(i > k){
                seen.erase(nums[i - k - 1]);
            }
            if(seen.find(nums[i]) != seen.end()){
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};
