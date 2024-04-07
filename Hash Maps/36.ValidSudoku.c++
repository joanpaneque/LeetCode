// Source: https://leetcode.com/problems/valid-sudoku/
// Author: Joan Paneque
// Date: 07/04/2024

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int fl = board.size();
        int cl = board[0].size();
        map<int, unordered_map<char,int>> b;
        for (int f = 0; f < fl; f++) {
            unordered_map<char,int> m;
            unordered_map<char,int> k;
            for (int c = 0; c < cl; c++) {
                if (board[f][c] != '.') {
                    int sg = 3*floor(f/3)+floor(c/3);
                    b[sg][board[f][c]]++;
                    if (b[sg][board[f][c]] > 1) {
                        return false;
                    }
                    m[board[f][c]]++;
                    if (m[board[f][c]] > 1) return false; 
                }
                if (board[c][f] != '.') {
                    k[board[c][f]]++;
                    if (k[board[c][f]] > 1) return false; 
                }

            }
        }
        return true;
    }
};