class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0, temp = prices[0];
        for(int i=1; i<n; i++){
                if(prices[i]-temp > ans)
                    ans = prices[i]-temp;
                else if(prices[i]<temp)
                    temp = prices[i];
        }
        return ans;
    }
};