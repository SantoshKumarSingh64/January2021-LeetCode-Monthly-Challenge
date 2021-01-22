class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        
		stack<int> st;
        int numbersToRemoved = nums.size() - k;
		for(auto x: nums)
        {	
        	while(st.size() && numbersToRemoved > 0 && st.top() > x)
            {	
                st.pop();
                numbersToRemoved--;
            }
            st.push(x);
        }
        
        while(st.size() > k)
            st.pop();
        
        vector<int> ans;
        while(st.size())
        {
            ans.insert(ans.begin(),st.top());
            st.pop();
        }
        return ans;
    }
};
