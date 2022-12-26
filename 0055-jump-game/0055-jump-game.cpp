class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)
            return true;
        if(nums[0]==0)
            return false;
        int i, minjump = 0;
        for(i = nums.size()-2; i >= 0; i--){
            minjump++;
            if(nums[i] >= minjump)
			    minjump = 0;
        }
        if(minjump == 0) 
		    return true;
        else 
		    return false;
    }
};