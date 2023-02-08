class Solution {
public:
    int jump(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) 
            return 0; 
      
        int maxReach = arr[0];
        int step = arr[0];
        int jump = 1;
      
        for (int i = 1; i < n; i++) 
        { 
            if (i == n-1) 
                // return jump; 
                break;
      
            maxReach = max(maxReach, i+arr[i]); 

            step--; 
      
            if (step == 0) 
            { 
                jump++; 
      
                // if(i >= maxReach) 
                //     return -1; 
      
                step = maxReach - i; 
            } 
        } 
      return jump;
        // return -1; 
    }
};