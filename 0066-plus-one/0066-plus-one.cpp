class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1]<9){
            digits[n-1]++;
            return digits;
        }
        digits[n-1] = 0;
        for(int i=n-2; i>-1; i--){
            if(digits[i]==9)
                digits[i] = 0;
            else{
                digits[i]++;
                return digits;
            }
        }
        vector<int> ans;
        ans.push_back(1);
        for(int i=0; i<n; i++)
            ans.push_back(0);
        return ans;
    }
};