class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        int n = parent.size();
        vector<vector<int>> child(n);
        for(int i = 1; i<n; i++){
            child[parent[i]].push_back(i);
        }

        vector<int> d(n);
        d[0] = 1;
        queue<int> q;
        q.push(0);
        int h = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int it : child[node]){
                d[it] = d[node] + 1;
                h = max(h,d[it]);
                q.push(it);
            }
        }
        long long ans = 0;

        for(int i = 0; i<n; i++){
            long long wt = 1LL * nums[i]*(h-d[i] + 1);
            ans += wt;
        }

        return ans;
    }
};