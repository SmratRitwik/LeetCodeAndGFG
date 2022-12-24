class Solution {
public:
    int numTilings(int n) {
        if(n<3)
        return n;
        int md = 1e9+7;
        vector<long long int> v(n+1, 0);
        v[1] = 1;
        v[2] = 2;
        v[3] = 5;
        if(n<3)
        return n;
        if(n<4)
            return v[n];
        for(int i=4; i<=n; i++){
            v[i] = (2 * v[i-1]) + v[i-3];  
            v[i] %= md;
        }      
        return v[n];        
    }
};