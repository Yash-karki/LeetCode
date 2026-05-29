class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> rzero;
        vector<int> czero;
        for (int idx = 0; idx < m * n; idx++) {
            int i = idx / n;
            int j = idx % n;

            if (matrix[i][j] == 0) {
                rzero.push_back(i);
                czero.push_back(j);
            }
        }

        for (int r : rzero) {
            for (int j = 0; j < n; j++) {
                matrix[r][j] = 0;
            }
        }

        for (int c : czero) {
            for (int j = 0; j < m; j++) {
                matrix[j][c] = 0;
            }
        }
    }
};