class Solution {
public:
    bool comp(string &a, string &b, map<char, int> &m) {
        int i;
        for(i = 0; i < a.size() and i < b.size(); ++i) {
            if(m[a[i]] < m[b[i]]) return true;
            else if(m[a[i]]> m[b[i]]) return false;
        }
        if(a.size() <= b.size()) return true;
        return false;
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        map<char, int> mp;
        for(int i = 0; i < order.size(); ++i) {
            mp[order[i]] = i;
        }
        for(int i = 0; i < words.size()-1; ++i) {
            if(!comp(words[i],words[i+1],mp)) {
                return false;
            }
        }
        return true;
    }
};