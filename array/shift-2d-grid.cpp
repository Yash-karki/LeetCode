class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        int n = row*col;

        vector<int> temp;

        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                temp.push_back(grid[i][j]);
            }
        }

        k = k%n;
        reverse(temp.begin(), temp.end());
        reverse(temp.begin(), temp.begin() + k);
        reverse(temp.begin() + k, temp.end());

        vector<vector<int>> result(row, vector<int>(col,0));
        int idx = 0;

        for(int i = 0; i< row; i++){
            for(int j = 0; j<col; j++){
                result[i][j] = temp[idx];
                idx++;
            }
        }

        return result;
    }
};