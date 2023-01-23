class Solution {
public:
    int findJudge(int k, vector<vector<int>>& trust) {
        int n = trust.size();
        if(k==1 && n==0)
            return 1;
        if(n<k-1 || k==1)
            return -1;
        set<int> st;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            st.insert(trust[i][0]);
            mp[trust[i][1]]++;
        }
        if(st.size()!=k-1)
            return -1;
        for(auto x : mp){
            if(x.second==st.size())
                return x.first;
        }
        return -1;
    }
};