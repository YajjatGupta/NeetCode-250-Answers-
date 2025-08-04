// Problem: 36. Valid Sudoku
// LeetCode: https://leetcode.com/problems/valid-sudoku/
// NeetCode: https://neetcode.io/problems/valid-sudoku
// Difficulty: Medium
// Language: C++
// Time Complexity: O(1) — fixed 9x9 board
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    char temp = board[i][j];
                    board[i][j] = '.';
                    if (!sudoku(board, i, j, temp)) {
                        return false;
                    }
                    board[i][j] = temp;
                }
            }
        }
        return true;
    }

    bool sudoku(const vector<vector<char>>& board, int row, int col, char val) {
        for (int i = 0; i < 9; ++i) {
            if (board[row][i] == val || board[i][col] == val) {
                return false;
            }
        }
        int boxRow = 3 * (row / 3);
        int boxCol = 3 * (col / 3);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[boxRow + i][boxCol + j] == val) {
                    return false;
                }
            }
        }
        return true;
    }
};
