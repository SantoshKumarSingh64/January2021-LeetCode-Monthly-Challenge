class Solution {
public:

    int getMaximumGenerated(int n) {
            
        vector<int> arr;
        arr.push_back(0);
        arr.push_back(1);
        arr.push_back(1);
        for(int i=3;i<=n;i++)
        {   
            int temp = i/2;
            if(i%2 == 0)
            {
                arr.push_back(arr[temp]);
            }
            else
            {   
                arr.push_back(arr[temp] + arr[temp+1]); 
            }
        }
        int maximum = 0;
        for(int i=1;i<=n;i++)
        {
            maximum = max(maximum,arr[i]);
        }
        return maximum;
    }
};
