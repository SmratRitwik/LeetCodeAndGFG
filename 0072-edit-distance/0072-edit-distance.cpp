class Solution {
public:
    //Time: O(m*n), Space: O(m*n);
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        
        //Base conditions
        for(int i=0; i<m+1; i++)
            dp[i][0] = i;
        
        for(int j=0; j<n+1; j++)
            dp[0][j] = j;
        
        //solving the sub-problems
        for(int i=1; i<m+1; i++){
            for(int j=1; j<n+1; j++){
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else{
                    int insertChar = dp[i][j-1];
                    int deleteChar = dp[i-1][j];
                    int replaceChar = dp[i-1][j-1];
                    
                    dp[i][j] = 1 + min({insertChar, deleteChar, replaceChar});
                }
            }
        }
        return dp[m][n];
    }
};