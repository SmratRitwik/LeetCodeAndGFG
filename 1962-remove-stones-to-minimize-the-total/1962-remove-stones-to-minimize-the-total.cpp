class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue <int> q;
        for(int i=0; i<piles.size(); i++)
            q.push(piles[i]);
        while(k--){
            int temp = q.top();
            temp = temp - (temp/2);
            q.pop();
            q.push(temp);
            if(q.top()==0)
                return 0;
        }
        int sum = 0;
        while(!q.empty()){
            sum += q.top();
            q.pop();
        }
        return sum;
    }
};