class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=-1;
        int n=nums.size();
        if(nums[0]==target||target<nums[0])
            index=0;
        else if(nums[n-1]==target)
            index=n-1;
        else if(target>nums[n-1])
            index=n;
        else if(n==2&&target>nums[0]&&target<nums[1])
            index=1;
        else{
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]==target)
            {
                index=i;
                break;
            }
            else if(target>nums[i-1]&&target<nums[i])
            {
                index=i;
                break;
            }
            else if(target>nums[i]&&target<nums[i+1])
            {
                index=i+1;
                break;
            }
        }
        }
        return index;
    }
};