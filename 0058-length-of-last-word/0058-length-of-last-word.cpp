class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int a=0, b=0;
        for(int i=0; i<n; i++){
            if(s[i]==32){
                if(a>0)
                    b = a;
                a = 0;
            }
            else
                a++;
        }
        if(a==0)
            return b;
        return a;
    }
};