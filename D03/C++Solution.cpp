class Solution {
public:
    int result = 0;
    int countArrangement(int n) {
        int nums[n+1];
        for(int i=1;i<=n;i++)
            nums[i] = i;
        dfs(nums,n);
        return result;
    }
    
    void dfs(int[] nums,int n) {
        if(n == 0)
        {
            result++;
            return;
        }
        
        for(int i = n;i>0;i--)
        {
            swap(nums,i,n);
            if(nums[n]%n == 0 || n%nums[n]==0)
                dfs(nums,n-1);
            swap(nums,i,n);
        }
    }
    
    void swap(int[] nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
};
