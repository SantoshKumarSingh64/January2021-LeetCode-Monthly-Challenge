#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) 
{
	map <char,int> index_map;
	int l = 0, r = 0, max_length = 0,n= s.length();
	while(l< n && r < n)
	{
		if(index_map.find(s[r]) != index_map.end())
			l = max(index_map[s[r]]+1,l);
        index_map[s[r]] = r;
        max_length = max(max_length,r-l+1);
        r++;
	}  
	return max_length;      
}

int main()
{
	cout<<lengthOfLongestSubstring("abcaabcdba")<<endl;
	return 0;
}
