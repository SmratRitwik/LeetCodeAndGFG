class Solution {
public:
    bool isValid(string s) {
        int n = s.length(), j=1;
        if(n%2==1)
            return false;
        bool ans = false;
        stack<char> stk;
        for(int i=0; i<n; i++){
            if(stk.empty()){
                if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                    stk.push(s[i]);
                else
                    return false;
            }
            else{
                if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                    stk.push(s[i]);
                else{
                    if(s[i]==')'){
                        if(stk.top()!='(')
                            return false;
                        stk.pop();
                    }
                    if(s[i]=='}'){
                        if(stk.top()!='{')
                            return false;
                        stk.pop();
                    }
                    if(s[i]==']'){
                        if(stk.top()!='[')
                            return false;
                        stk.pop();
                    }
                }
            }
        }
        if(stk.empty())
            return true;
        return false;
    }
};