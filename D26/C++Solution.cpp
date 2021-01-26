class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int row = heights.size();
        int col = heights[0].size();
                
        int direction[] = {0,1,0,-1,0};
        
        int ans[row][col];
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ans[i][j] = INT_MAX;
            }
        }
         
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        pq.push({0,0,0});
        
        
        while(!pq.empty())
        {
            vector<int> head = pq.top();
            pq.pop();
            int x = head[1];
            int y = head[2];
            int currentAns = head[0];
            
            if(x == row-1 && y == col-1)
                return currentAns;
            
            for(int k=0;k<4;k++)
            {
                int newX = x+direction[k];
                int newY = y+direction[k+1];
                
                if(newX >= 0 && newX < row && newY >= 0 && newY < col)
                {
                    int nextAns = max(currentAns,abs(heights[newX][newY] - heights[x][y]));
                    
                    if(nextAns < ans[newX][newY])
                    {    
                        ans[newX][newY] = nextAns;
                        pq.push({nextAns,newX,newY});
                    }
                }
            }
        }
        return 0;
    }
};
