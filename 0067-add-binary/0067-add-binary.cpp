class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        bool carry = 0;
        int i=0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(i<a.length() || i<b.length()){
            if(i<a.length()){
                if(i<b.length()){
                    if(a[i]=='1' && b[i]=='1'){
                        if(carry==1)
                            ans = "1" + ans;
                        else
                            ans = "0" + ans;
                        carry = 1;
                    }
                    else if(a[i] == '0' && b[i] == '0'){
                        if(carry==0)
                            ans = "0" + ans;
                        else
                            ans = "1" + ans;
                        carry = 0;
                    }
                    else{
                        if(carry==0)
                            ans = "1" + ans;
                        else
                            ans = "0" + ans;
                    }
                }
                else{
                    if(carry==1){
                        if(a[i]=='1')
                            ans = "0" + ans;
                        else{
                            ans = "1" +ans;
                            carry = 0;
                        }
                    }
                    else
                        ans = a[i] + ans;
                }
            }
            
            else{
                if(carry==1){
                    if(b[i]=='1')
                        ans = "0" + ans;
                    else{
                        ans = "1" +ans;
                        carry = 0;
                    }
                }
                else
                    ans = b[i] + ans;
               }
            
            i++;
        }
        if(carry==1)
            ans = "1" + ans;
        return ans;
    }
};