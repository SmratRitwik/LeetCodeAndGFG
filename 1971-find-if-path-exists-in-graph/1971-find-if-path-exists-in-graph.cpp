class Solution {
    bool solve(vector<int>adj[], int sv, int dest, int n, vector<bool>&vis){
    
    if(sv==dest) return true;
    
    vis[sv]=true;
    
    for(auto it:adj[sv]){
        if(!vis[it]){
            bool s=solve(adj,it,dest,n,vis);
            if(s==true) return true;
        }
    }
    return false;
}
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {      
    vector<bool>vis(n);  
    vector<int>adj[n];
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    
    return solve(adj,source,destination,n,vis);
    }
};