#include<bits/stdc++.h>
using namespace std;
int createSortedArray(vector<int>& instructions) {
        
        vector<int> s1;
        int left, right;
        vector<int>::iterator insert_pos;
        int cost = 0,MOD = 1000000007;      
        for(auto x:instructions)
        {	
        	insert_pos = lower_bound(s1.begin(), s1.end(), x);
            left =  insert_pos - s1.begin();
            right = s1.size() - (upper_bound(s1.begin(), s1.end(), x) - s1.begin());
            cout<<left<<" "<<right<<endl;
            cost += min(left,right);
            cost = cost%MOD;
            s1.insert(insert_pos,x);
        }
        return cost;
}

int main()
{
	vector<int> instructions = {1,3,3,3,2,4,2,1,2};
	cout<<createSortedArray(instructions)<<endl;
	return 0;
}
