class Solution {
public:

    void dfs(int node, vector<int> adjL[], vector<int> &vis){
        vis[node] = 1;
        for(auto it : adjL[node]){
            if(!vis[it]){
                dfs(it,adjL,vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> adjL[V];
        for(int i = 0; i<V; i++){
            for(int j = 0; j<V; j++){
                if(adj[i][j] == 1 && i!=j){
                    adjL[i].push_back(j);
                    adjL[j].push_back(i);
                }
            }
        }
        vector<int> vis(V,0);
        int count = 0;
        for(int i = 0; i<V; i++){
            if(!vis[i]){
                count++;
                dfs(i,adjL,vis);
            }
        }
        return count;        
    }
};