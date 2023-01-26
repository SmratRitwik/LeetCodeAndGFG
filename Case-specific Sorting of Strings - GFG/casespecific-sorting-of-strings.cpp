//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string temp = str;
        sort(temp.begin(), temp.end());
        int s=-1, c=-1;
        for(int i=0; i<n; i++){
            if((temp[i]>='A'&&temp[i]<='Z') && c==-1)
                c=i;
            else if((temp[i]>='a'&&temp[i]<='z') && s==-1)
                s=i;
        }
        for(int i=0; i<n; i++){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]=temp[c];
                c++;
            }
            else{
                str[i]=temp[s];
                s++;
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends