class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        map<int,int> dt;
        int count = 0;
        for(auto x:nums)
        {
            if(dt.find(k-x) != dt.end() and dt[k-x] > 0)
            {
                count++;
                dt[k-x] -= 1;
            }
            else
            {
                if(dt.find(x) != dt.end())
                    dt[x] += 1;
                else
                    dt[x] = 1;
            }
        }
        return count;
    }   
};
