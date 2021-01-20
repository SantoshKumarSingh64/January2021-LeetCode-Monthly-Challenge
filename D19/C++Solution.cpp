class Solution {
public:
    int expand(string s, int left,int right)
    {
        while(left >=0 && right < s.length() && s[left] == s[right])
        {
                left--;
                right++;
        }
        return right-left-1;
    }
    
    string longestPalindrome(string s) {
        if(s.length() == 1)
            return s;
        
        int start = 0,end = 0;
        
        for(int i=0;i<s.length();i++)
        {
            int odd = expand(s,i,i);
            int even = expand(s,i,i+1);
            
            int len = max(odd,even);
            
            if(len > (end-start))
            {
                start = i - (len-1)/2;
                end = i + len/2;
            }
        }
        return s.substr(start,end);
    }
};
