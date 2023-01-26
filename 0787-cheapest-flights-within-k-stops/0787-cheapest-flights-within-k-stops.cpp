class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& edges, int src, int dst, int k) {
        vector<int> dist(n, INT_MAX);
        dist[src]=0;
        for(int i=0; i<=k; i++) {
            vector<int> temp(n);
            copy(dist.begin(), dist.end(), temp.begin());
            for(auto e : edges) {
                if(dist[e[0]]==INT_MAX)
                    continue;
                if(temp[e[1]]>dist[e[0]]+e[2])
                    temp[e[1]]=dist[e[0]]+e[2];
            }
            copy(temp.begin(), temp.end(), dist.begin());
        }
        if(dist[dst]==INT_MAX)
            return -1;
        return dist[dst];
    }
};