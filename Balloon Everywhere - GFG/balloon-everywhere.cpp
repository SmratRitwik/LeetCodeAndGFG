//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        if(s.length()<7)
        return 0;
        bool arr[5]={0};
        int count=0, n=s.length();
        map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
            if(s[i]=='b')
                arr[0]=1;
            if(s[i]=='a')
                arr[1]=1;
            if(s[i]=='l')
                arr[2]=1;
            if(s[i]=='o')
                arr[3]=1;
            if(s[i]=='n')
                arr[4]=1;
        }
        for(int i=0; i<5; i++){
            if(arr[i]==0)
                return 0;
        }
        int mini=INT_MAX;
        for(auto x:mp){
            int temp=0;
            if(x.first == 'b'||x.first == 'n'|| x.first == 'a'){
                temp = x.second;
                mini = min(mini,temp);
            }
            else if(x.first == 'l' || x.first == 'o'){
                temp = x.second/2;
                mini = min(mini,temp);
            }
        }
        return mini;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends