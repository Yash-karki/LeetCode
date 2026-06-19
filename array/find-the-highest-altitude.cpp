class Solution {
public:
    int largestAltitude(vector<int>& grid) {
        int n = grid.size();
        for(int i = 1; i<n; i++){
            grid[i] = grid[i]+grid[i-1];
        }
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            if(grid[i] > maxi){
                maxi = grid[i];
            }
        }
        if(maxi < 0){
            return 0;
        }
        return maxi;
    }
};