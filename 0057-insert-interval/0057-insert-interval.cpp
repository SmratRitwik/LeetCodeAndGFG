class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& nI) {
        vector<vector<int>> ans;
        int ck=0, n = interval.size();
        if(n==0){
            vector<int> temp;
            temp.push_back(nI[0]);
            temp.push_back(nI[1]);
            ans.push_back(temp);
            return ans;
        }
        for(int i=0; i<n; i++){
            if(interval[i][0]>nI[1]){
               if(ck==0){
                   vector<int> temp;
                   temp.push_back(nI[0]);
                   temp.push_back(nI[1]);
                   ans.push_back(temp);
                   ck=1;
               }
                ans.push_back(interval[i]);
                continue;
            }
            if((interval[i][0]<nI[0] && interval[i][1]<nI[0]))
                ans.push_back(interval[i]);
            else{
                ck=1;
                vector<int> temp;
                int mini = min(interval[i][0],nI[0]);
                int maxi = max(interval[i][1],nI[1]);
                temp.push_back(mini);
                if(maxi>nI[1]){
                    temp.push_back(maxi);
                    ans.push_back(temp);
                    continue;
                }
                while(i<n-1 && (interval[i][0]<nI[1] && interval[i][1]<nI[1])){
                    i++;
                    if(interval[i][0]>maxi){
                        temp.push_back(maxi);
                        ans.push_back(temp);
                        break;
                    }
                }
                if(i==n-1 && (interval[i][0]<nI[1] && interval[i][1]<nI[1])){
                    temp.push_back(maxi);
                    ans.push_back(temp);
                }
                else if(interval[i][0]<=nI[1] && interval[i][1]>=nI[1]){
                    temp.push_back(interval[i][1]);
                    ans.push_back(temp);
                }
                else
                    i--;
            }
        }
        int t = ans.size()-1;
        if(t>=0 && ans[t][1]<nI[0])
            ans.push_back(nI);
        return ans;
    }
};