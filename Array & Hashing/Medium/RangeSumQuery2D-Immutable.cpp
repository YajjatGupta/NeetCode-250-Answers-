// Problem: 304. Range Sum Query 2D - Immutable
// LeetCode: https://leetcode.com/problems/range-sum-query-2d-immutable/
// NeetCode: https://neetcode.io/problems/range-sum-query-2d-immutable
// Difficulty: Medium
// Language: C++
// Time Complexity: O(1) per query, O(m * n) preprocessing
// Space Complexity: O(m * n)

#include <iostream>
#include <vector>
using namespace std;

class NumMatrix {
    vector<vector<int>> matSum;
    int r, c, sum;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        r = matrix.size();
        c = matrix[0].size();
        matSum = vector<vector<int>>(r + 1, vector<int>(c + 1));
        for (int i = 1; i <= r; ++i) {
            for (int j = 1; j <= c; ++j)
                matSum[i][j] = matSum[i - 1][j] + matSum[i][j - 1] - matSum[i - 1][j - 1] + matrix[i - 1][j - 1];
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        sum = matSum[row2 + 1][col2 + 1] - matSum[row1][col2 + 1] - matSum[row2 + 1][col1] + matSum[row1][col1];
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1, col1, row2, col2);
 */
