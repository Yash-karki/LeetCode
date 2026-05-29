class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        vector<vector<int>> row(m, vector<int>(n+1, 0));
        vector<vector<int>> col(m+1, vector<int>(n, 0));
        vector<vector<int>> diag1(m, vector<int>(n, 0));
        vector<vector<int>> diag2(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                row[i][j+1] = row[i][j] + grid[i][j];
                col[i+1][j] = col[i][j] + grid[i][j];

                diag1[i][j] = grid[i][j] + 
                    (i > 0 && j > 0 ? diag1[i-1][j-1] : 0);

                diag2[i][j] = grid[i][j] + 
                    (i > 0 && j+1 < n ? diag2[i-1][j+1] : 0);
            }
        }

        for (int k = min(m, n); k >= 2; k--) {
            for (int i = 0; i + k <= m; i++) {
                for (int j = 0; j + k <= n; j++) {

                    int target = row[i][j+k] - row[i][j];
                    bool ok = true;

                    for (int r = i; r < i+k && ok; r++) {
                        if (row[r][j+k] - row[r][j] != target)
                            ok = false;
                    }

                    for (int c = j; c < j+k && ok; c++) {
                        if (col[i+k][c] - col[i][c] != target)
                            ok = false;
                    }

                    int d1 = diag1[i+k-1][j+k-1] -
                             (i > 0 && j > 0 ? diag1[i-1][j-1] : 0);

                    int d2 = diag2[i+k-1][j] -
                             (i > 0 && j+k < n ? diag2[i-1][j+k] : 0);

                    if (ok && d1 == target && d2 == target)
                        return k;
                }
            }
        }

        return 1;
    }
};