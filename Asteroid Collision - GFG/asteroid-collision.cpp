//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &a) {
        // code here
        vector<int> v;
        stack<int> stk;
        int temp;
        for(int i=0; i<n; i++){
            if(stk.empty())
            stk.push(a[i]);
            else if((stk.top()<0 && a[i]<0)||(stk.top()>0&&a[i]>0)||(stk.top()<0&&a[i]>0))
            stk.push(a[i]);
            else if(abs(stk.top())==abs(a[i]))
                stk.pop();
            else if(abs(stk.top())<abs(a[i])){
                while(!stk.empty()){
                    if((stk.top()<0 && a[i]<0)||(stk.top()>0&&a[i]>0)||(stk.top()<0&&a[i]>0)){
                        stk.push(a[i]);
                        break;
                    }
                    else if(abs(stk.top())==abs(a[i])){
                        stk.pop();
                        // goto end;
                        break;
                    }       
                    else if(abs(stk.top())<abs(a[i])){
                        stk.pop();
                        if(stk.empty()){
                            stk.push(a[i]);
                            break;
                        }
                    }
                    else if(abs(stk.top())>abs(a[i]))
                    break;
                }
            }
            // end:
        }
        while(!stk.empty()){
            v.emplace_back(stk.top());
            stk.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends