class Solution {
public:
    int countVowelStrings(int n) {
        
        int dp[n][5];
        for(int col=0;col<5;col++)
            dp[0][col] = 1;
        for(int row=0;row<n;row++)
            dp[row][0] = 1;
        
        for(int row=1;row<n;row++)
        {
            for(int col=1;col<5;col++)
            {
                dp[row][col] = dp[row-1][col] + dp[row][col-1];
            }
        }
        int ans = 0;
        for(int col=0;col<5;col++)
        {
            ans += dp[n-1][col];
        }
        return ans;
    }
    
};
