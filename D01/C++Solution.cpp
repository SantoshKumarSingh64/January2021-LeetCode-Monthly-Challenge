class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) 
    {
        
  		unordered_map <int,int> dt;
		int n = arr.size();
		
		for(int i=0;i<n;i++)
		{
			dt[arr[i]] = i;
		}      
        
        for(auto a : pieces)
        {
        	if(dt.find(a[0]) == dt.end())
        		return false;
        	
        	int index = dt[a[0]];
        	for(auto b: a)
        	{
        		if(dt.find(b) == dt.end())
        			return false;
        		if(index >= n || arr[index] != b)
        			return false;
        		index++;
			}
		}
		return true;
    }
};
