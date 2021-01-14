class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int total = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            total += nums[i];
        }
        x = total-x;
        
        if(x == 0)
            return n;
        
        total = 0;
        int longest = 0;
        map<int,int> dt;
        dt[0] = 0;
        for(int i=0;i<n;i++)
        {
            total += nums[i];
            dt[total] = i+1;
            
            if(dt.find(total-x) != dt.end())
            {
                longest = max(longest,i+1-dt[total-x]);
            }
        }
        
        if(longest == 0)
            return -1;
        
        return (n-longest); 
    }
};
