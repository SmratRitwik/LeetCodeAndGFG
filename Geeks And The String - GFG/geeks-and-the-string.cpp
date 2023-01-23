//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        int n = s.length();
        stack<char> stk;
        for(int i=0; i<n; i++){
            if(stk.empty() || s[i]!=stk.top())
                stk.push(s[i]);
            else
                stk.pop();
        }
        string ans="";
        while(!stk.empty()){
            ans = stk.top() + ans;
            stk.pop();
        }
        if(ans.length()==0){
            ans = "-1";
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends