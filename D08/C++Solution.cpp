class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string Wrd1,Wrd2;
        for(auto x:word1)
            Wrd1 += x;
        for(auto x:word2)
            Wrd2 += x;
        
        return (Wrd1 == Wrd2);
    }
};
