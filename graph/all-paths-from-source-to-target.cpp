class Solution {
public:

    vector<vector<int>> ans;

    void dfs(int node, vector<int> &path, vector<vector<int>> &graph){
        if(node == graph.size() - 1){
            ans.push_back(path);
            return;
        }

        for (auto next : graph[node]) {
            path.push_back(next);
            dfs(next, path, graph);
            path.pop_back();    
        }

    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path;
        path.push_back(0);

        dfs(0,path,graph);
        return ans;
    }
};