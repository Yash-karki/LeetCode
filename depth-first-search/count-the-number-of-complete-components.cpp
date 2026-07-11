class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);
        for(auto &it : edges){
            int u = edges[0];
            int v = edges[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n, 0);

        int comps = 0;

        for(int i = 0; i<n; i++){
            if(!vis[i]){
                vector<int> components;
                queue<int> q;
                q.push(i);
                vis[i] = 1;

                while(!q.empty()){
                    int cur = q.front();
                    q.pop();
                    components.push_back(cur);

                    for(auto it : adj[cur]){
                        if(!vis[it]){
                            q.push(it);
                            vis[it] = 1;
                        }
                    }
                }

                bool isComplete = true;
                for(int node : components){
                    if(adj[node].size() != component.size()-1){
                        isComplete = false;
                        break;
                    }
                }

                if(isComplete){
                    comps++;
                }
            }
        }
        return comps;

    }
};