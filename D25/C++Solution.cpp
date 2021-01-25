class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        if(k==0)
            return true;
        int next_1 = -1,prev_1=-1,n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 1)
            {
                if(prev_1 == -1)
                {
                    prev_1 = i;
                }
                else
                {
                    next_1 = i;
                    if(next_1 - 1 - prev_1 < k)
                        return false;
                    prev_1 = i;
                }
            }
        }
        return true;      
    }
};
