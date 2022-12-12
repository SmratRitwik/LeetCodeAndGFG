class Solution
{
public:
    vector<int> v;
    int count(int n)
    {
        v.push_back(0);
        for (int i = 1; i < 46; i++)
        {
            if (i < 4)
                v.push_back(i);
            else
                v.push_back(v[i - 1] + v[i - 2]);
        }
        return v[n];
    }
    int climbStairs(int n)
    {
        return count(n);
    }
};