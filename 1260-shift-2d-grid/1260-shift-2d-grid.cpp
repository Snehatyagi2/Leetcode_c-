class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        int total = m * n;

        vector<vector<int>> result(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int idx = i * n + j;               
                int newIdx = (idx + k) % total;    // flatten index   
                int newRow = newIdx / n;           // shifted index   
                int newCol = newIdx % n;           // back to 2D
                result[newRow][newCol] = grid[i][j];
            }
        }

        return result;
    }
};