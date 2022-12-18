class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        if (T.empty())
        {
            return vector<int>();
        }
        
		// A stack with values:  
		// <T[i], Number of days to the next larger number in T>
        stack<pair<int, int>> s;
		
		// The last number in T must have no value larger than it.
        s.push(make_pair(T.back(), 0));
        
        vector<int> ans(T.size(), 0);
        
		// Start from the back.
        for (int i = T.size() - 2; i >= 0; i--)
        {
            int counter = 1;
            
			// Pop the stack until its empty or the top number is smaller or equal to T[i]
			// The counter + the number of elements to the next larger number in T.
            while (!s.empty() && T[i] >= s.top().first)
            {
                counter += s.top().second;
                s.pop();
            }
            
			// If no number on stack is larger than T[i].
            if (s.empty())
            {
                s.push(make_pair(T[i], 0));
            }
            else
            {
                s.push(make_pair(T[i], counter));
                ans[i] = counter;
            }
        }
        
        return ans;
    }
};