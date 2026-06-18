class Solution {
public:

    void bfs(vector<int> &vis, vector<int> adj[], int v){
        vis[v] = 1;
        queue<int> q;
        q.push(v);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> adj[v];
        for(int i = 0; i<v; i++){
            for(int j = 0; j<v; j++){
                if(isConnected[i][j] == 1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(v,0);
        int cnt = 0;
        for(int i = 0; i<v; i++){
            if(!vis[i]){
                cnt++;
                bfs(vis,adj,i);
            }
        }
        return cnt;
    }
};