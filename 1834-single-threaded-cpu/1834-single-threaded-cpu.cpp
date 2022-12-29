class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& task) {
        int n = task.size();
        priority_queue<vector<int>> pq;
        for(int i=0; i<n; i++){
            task[i].emplace_back(i);
            task[i][0] *= -1;
            task[i][1] *= -1;
            task[i][2] *= -1;
            pq.push(task[i]);
        }
        int range = abs(pq.top()[1]) + abs(pq.top()[0]);
        priority_queue<vector<int>> rd;
        vector<int> ans;
        ans.emplace_back(-1*pq.top()[2]);
        pq.pop();
        while(!pq.empty()){
            if(abs(pq.top()[0])<=range){
                vector<int> vt;
                vt = pq.top();
                pq.pop();
                swap(vt[0],vt[1]);
                swap(vt[1],vt[2]);
                rd.push(vt);
            }
            else if(rd.empty()){
                range = abs(pq.top()[1]) + abs(pq.top()[0]);
                ans.emplace_back(-1 * pq.top()[2]);
                pq.pop();
            }
            else{
                range += abs(rd.top()[0]);
                ans.emplace_back(-1*rd.top()[1]);
                rd.pop();
            }
        }
        while(!rd.empty()){
            ans.emplace_back(-1*rd.top()[1]);
            rd.pop();
        }
        return ans;
    }
};