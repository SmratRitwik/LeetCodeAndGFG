class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {

        int pref = 0; // prefix sum
        vector<int> cPref(K); //sum will not exceed K as we are taking modulo at every step
        cPref[pref]++; // adding 0 as prefix sum, base case
        
        int answer = 0; // count of number of subarrays whose sum is divisible by K
        
        for(int i = 0; i < A.size(); i++) {
            
            pref = (pref + A[i]) % K; // Here, we take modulo of prefix sum as outlined in the explanation
            
            if(pref < 0) pref += K; // since -1 mod 5 and 4 mod 5 are equivalent, we will keep only positives since we like them :)
                        
            answer += cPref[pref]; // if we have already found pref, then increase the answer count
            
            cPref[pref]++; // add pref seen count by 1
        }
        
        return answer;
    }
};