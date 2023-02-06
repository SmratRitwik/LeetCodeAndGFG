class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if(n==1)
            return nums;
        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};