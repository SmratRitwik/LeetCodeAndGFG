//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int n, int k, vector<long long> GeekNum) {
        // code here
        if(k==1)
            return GeekNum[0];
        if(n<=k)
            return GeekNum[n-1];
        long long ans=0;
        vector<long long int> arr(n);
        for(int i=0, j=0; i<n; i++, j++){
            if(i<k){
            ans+=GeekNum[i];
            arr[i] = GeekNum[i];
            j=-1;
            }
            else{
                arr[i] = ans;
                ans = (2*ans) - (arr[j]) ;
            }
        }
        return arr[n-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends