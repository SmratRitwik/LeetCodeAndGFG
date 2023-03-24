//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int z=0,b=0,c=0;
        for(int i=0; i<n; i++){
            if(a[i]==0)
            z++;
            if(a[i]==1)
            b++;
            if(a[i]==2)
            c++;
        }
        for(int i=0; i<n; i++){
            if(z){
                a[i]=0;
                z--;
                continue;
            }
            if(b){
                a[i]=1;
                b--;
                continue;
            }
            if(c){
                a[i]=2;
                c--;
                continue;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends