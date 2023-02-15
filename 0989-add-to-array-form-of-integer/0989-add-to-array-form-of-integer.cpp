class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int carry = 0, n = num.size()-1;
        while(n>=0){
            int temp = num[n] + (k%10) + carry;
            if(temp<10){
                ans.push_back(temp);
                carry = 0;
            }
            else{
                ans.push_back(temp%10);
                carry = temp/10;
            }
            k/=10;
            n--;
        }
        
        while(k>0){
            int temp = (k%10) + carry;
            if(temp<10){
                ans.push_back(temp);
                carry = 0;
            }
            else{
                ans.push_back(temp%10);
                carry = temp/10;
            }
            k/=10;
        }
        if(carry>0)
            ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};