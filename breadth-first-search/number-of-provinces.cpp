class Solution {
public:

    void dfs(int node, vector<vector<int>> &adjLs, int vis[]){
        vis[node] = 1;
        for(auto it : adjLs[node]){
            if(vis[it] == 0){
                dfs(it,adjLs,vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> adjLs(v);
        for(int i = 0; i<v; i++){
            for(int j = 0; j<v; j++){
                if(isConnected[i][j] == 0 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        int vis[v] = {0};
        int cnt = 0;
        for(int i = 0; i<v; i++){
            if(vis[i] == 0){
                cnt++;
                dfs(i,adjLs,vis);
            }
        }
        return cnt;
    }
};