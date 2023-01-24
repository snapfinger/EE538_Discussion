#include "libs.h"

// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

// Example 1:

// Input: grid = [
//   ["1","1","1","1","0"],
//   ["1","1","0","1","0"],
//   ["1","1","0","0","0"],
//   ["0","0","0","0","0"]
// ]
// Output: 1

class Solution {
public:
    // Solution 1: DFS recursive 
    // TC: O(mn)
    // SC: O(mn)
    int numIslands1(vector<vector<char>>& grid) {
        int count = 0;
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    dfsHelper(grid, visited, i, j);
                    count += 1;
                }
            }
        }
        return count;
    }

    void dfsHelper(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0' || visited[i][j]){
            return;
        }

        visited[i][j] = true;

        dfsHelper(grid, visited, i + 1, j);
        dfsHelper(grid, visited, i, j - 1);
        dfsHelper(grid, visited, i - 1, j);
        dfsHelper(grid, visited, i, j + 1);
    }
};


int main(){
    Solution s1;
    vector<vector<char>> g1 = {{'0', '1', '1'}, {'0', '1', '1'}};
    for(int i = 0; i < g1.size(); i++){
        for(int j = 0; j < g1[0].size(); j++){
            cout << g1[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\n" << s1.numIslands1(g1) << endl;
}