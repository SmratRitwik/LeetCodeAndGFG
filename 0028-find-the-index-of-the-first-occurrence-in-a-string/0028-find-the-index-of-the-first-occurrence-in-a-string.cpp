class Solution {
public:
    int strStr(string hstk, string ndl) {
        int m = hstk.length(), n = ndl.length();
        if(n>m)
            return -1;
        int ans = -1;
        for(int i=0; i<m; i++){
            if((m-i)<n)
                return -1;
            for(int j=0, k=i; j<n; j++, k++){
                if(hstk[k]!=ndl[j])
                    break;
                if(j==n-1)
                    return i;
            }
        }
        return ans;
    }
};