class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int total = 0;
        vector<int> height(cols, 0);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0) height[j] = 0;
                else height[j] += 1;
            }

        
            for (int j = 0; j < cols; j++) {
                int minHeight = height[j];
                for (int k = j; k >= 0; k--) {
                    minHeight = min(minHeight, height[k]);
                    if (minHeight == 0) break;
                    total += minHeight;
                }
            }
        }

        return total;
    }
};