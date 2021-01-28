class Solution {
public:
    
    string getSmallestString(int n, int k) {
	
        string ans = "";
        for(int i=0;i<n;i++)
            ans += "a";
        
        k -= n;
        int index = n-1;
    
        while(k>0)
        {
            k++;
            if(k>26)
            {    
                ans[index--] = 'z';
                k -= 26;
            }    
            else
            {    
                ans[index--] = 'a' + k - 1;
                k = 0;
            }
        }
        
        return ans;
    }
};
