class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0,  ans=0, i=1, j=0;
        while(1){
            if(j>=arr.size() || i!=arr[j]){
                count++;
                ans = i;
                if(count==k)
                    return i;
            }
            else 
                j++;
            i++;
        }
        return ans;
    }
};