class Solution {
    int dist[100005];
    int ans = 1;
    void dfs(int src, string& s, vector<vector<int>> &adj){
        dist[src] = 1;
        for(int node : adj[src]){
            dfs(node,s,adj);
            if(s[src] != s[node]){
                ans = max(ans, dist[src] + dist[node]);
                dist[src] = max(dist[src], dist [node]+1);
            }
        }
    }
public:
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        vector<vector<int>> adj(n);
        for(int i=1; i<n; i++)
            adj[parent[i]].push_back(i);
        dfs(0,s,adj);
        return ans;
    }
};