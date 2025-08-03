// Problem: 705. Design HashSet
// LeetCode: https://leetcode.com/problems/design-hashset/
// NeetCode: https://neetcode.io/problems/design-hashset
// Difficulty: Easy
// Language: C++
// Time Complexity: O(1) for all operations
// Space Complexity: O(n) where n is the max key size (1,000,001)

#include <iostream>
#include <vector>
using namespace std;

class MyHashSet {
public:
    vector<bool> set;

    MyHashSet() {
        set.resize(1000001, false);
    }

    void add(int key) {
        set[key] = true;
    }

    void remove(int key) {
        set[key] = false;
    }

    bool contains(int key) {
        return set[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
