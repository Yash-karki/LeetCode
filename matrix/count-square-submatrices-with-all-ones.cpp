class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }
        int rows = matrix.size();
        int cols = matrix[0].size();
        int total = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 1) {
                    if (i > 0 && j > 0) {
                        matrix[i][j] = 1 + min({matrix[i-1][j], matrix[i][j-1], matrix[i-1][j-1]});
                    }
                    
                    total += matrix[i][j];
                }
            }
        }

        return total;
    }
};
