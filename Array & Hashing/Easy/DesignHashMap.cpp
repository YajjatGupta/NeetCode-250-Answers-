// Problem: 706. Design HashMap
// LeetCode: https://leetcode.com/problems/design-hashmap/
// NeetCode: https://neetcode.io/problems/design-hashmap
// Difficulty: Easy
// Language: C++
// Time Complexity: O(log n) for all operations (using std::map)
// Space Complexity: O(n)

#include <iostream>
#include <map>
using namespace std;

class MyHashMap {
public:
    map<int, int> obj;

    MyHashMap() {
    }

    void put(int key, int value) {
        obj[key] = value;
    }

    int get(int key) {
        if (obj.find(key) == obj.end()) return -1;
        return obj[key];
    }

    void remove(int key) {
        obj.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key, value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
