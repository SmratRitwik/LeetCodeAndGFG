class Solution {
public:
    int mySqrt(int x) {
        long long int i=1;
        for(;i*i<=x;i++);
        return i-1;
    }
};