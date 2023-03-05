class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        string ans = "";
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            if(str[i].length()< mini)
                mini = str[i].length();
        }
        int j = 0;
        char a;
        while(j<mini){
            a = str[0][j];
            for(int i=0; i<n; i++){
                if(str[i][j]!= a)
                    return ans;
            }
            ans += a;
            j++;
        }
        return ans;
    }
};