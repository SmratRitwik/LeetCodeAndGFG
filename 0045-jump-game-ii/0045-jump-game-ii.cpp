class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;       
        int maxReach = nums[0], step = nums[0], jump = 1;      
        for (int i = 1; i < n; i++) { 
            if (i == n-1) break;      
            maxReach = max(maxReach, i+nums[i]); 
            step--;       
            if (step == 0) { 
                jump++;      
                step = maxReach - i; 
            } 
        } 
      return jump;
    }
};