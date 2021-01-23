class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int> dt1;
        map<char,int> dt2;
        
        for(auto x: word1)
        {
            if(dt1.find(x) == dt1.end())
                dt1[x] = 1;
            else
                dt1[x]++;
        }
        
        for(auto x: word2)
        {
            if(dt1.find(x) == dt1.end())
                return false;
            if(dt2.find(x) == dt2.end())
                dt2[x] = 1;
            else
                dt2[x]++;
        }
        
        vector<int> freq_Set1;
        for(auto x:dt1)
        {
            freq_Set1.push_back(x.second);
        }
        sort(freq_Set1.begin(),freq_Set1.end());
        
        vector<int> freq_Set2;
        for(auto x:dt2)
        {
            freq_Set2.push_back(x.second);
        }
        sort(freq_Set2.begin(),freq_Set2.end());        
        
        if(freq_Set1 == freq_Set2)
            return true;
        
        return false;
    }
};
