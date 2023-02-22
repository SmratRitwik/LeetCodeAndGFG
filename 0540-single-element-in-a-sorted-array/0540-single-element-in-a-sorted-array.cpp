// Solved by me (Aman Keshari)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int n = nums.size();
        int l=0, r=n-1,mid;
        while(l<r){
            n = r-l+1;
            mid = (l+r)/2;
            if(n==3){
                if(nums[mid-1]==nums[mid])
                    return nums[mid+1];
                else
                    return nums[mid-1];
            }
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])
                return nums[mid];
            else if(mid%2==0){
                if(nums[mid]==nums[mid-1])
                    r = mid-2;
                else
                    l = mid+2;
            }
            else{
                if(nums[mid]==nums[mid-1])
                    l = mid+1;
                else 
                    r = mid-1;
            }
        }
        return nums[l];
    }
};