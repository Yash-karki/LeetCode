class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n + 1);
        int m = roads.size();
        for (int i = 0; i<roads.size(); i++) {
            int u = roads[i][0];
            int v = roads[i][1];
            int wt = roads[i][2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        vector<int> vis(n + 1, 0);
        queue<int> q;
        q.push(1);
        vis[1] = 1;

        int ans = INT_MAX;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int i = 0; i < adj[u].size(); i++) {
                int v = adj[u][i].first;
                int w = adj[u][i].second;

                ans = min(ans, w);

                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }

        return ans;
    }
};