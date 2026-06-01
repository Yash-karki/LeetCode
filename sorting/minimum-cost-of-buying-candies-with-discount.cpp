class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(),cost.end());
        int i = n-1;
        int ans = 0;
        for(int i = n-1; i>=0; i -= 3){
            ans += cost[i];
            ans += cost[i-1]; 
        }
        return ans;
    }
};