class Solution {
    void dfs(vector<vector<int>>&graph, vector<vector<int>>&result, vector<int>&path, int u){
        path.emplace_back(u);
        if(u==graph.size()-1)
            result.emplace_back(path);
        else{
            for(int v : graph[u])
                dfs(graph, result, path, v);
        }
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(graph, ans, path, 0);
        return ans;
    }
};