class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int cont = 0;
        int ans = INT_MIN;
        for(int i =0; i< n; i++){
            for(int j = i+1; j<n; j++){
                cont = min(height[i], height[j]);
                ans = max(ans,cont*(j-i));
            }
        }
        return ans;
    }
};