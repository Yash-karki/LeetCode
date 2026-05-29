class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {

    int rows = grid.size();
    int cols = grid[0].size();

    int minRow = INT_MAX, maxRow = INT_MIN;
    int minCol = INT_MAX, maxCol = INT_MIN;

        for(int i = 0;i<rows; i++){
            for(int j = 0;j<cols; j++){
                if (grid[i][j] == 1) {
                minRow = min(minRow, i);
                maxRow = max(maxRow, i);
                minCol = min(minCol, j);
                maxCol = max(maxCol, j);
                }
            }
        }
        if (minRow == INT_MAX) return 0;
        return (maxRow - minRow + 1) * (maxCol - minCol + 1);
    }
};