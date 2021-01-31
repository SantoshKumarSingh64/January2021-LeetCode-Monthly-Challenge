class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int index1 = n-2;
        
        while(index1 >= 0 && nums[index1] >= nums[index1+1])
            index1--;
        if(index1 == -1)
        {   
            int low = 0,high=n-1,temp;
            while(low < high)
            {       
                temp = nums[low];
                nums[low] = nums[high];
                nums[high] = temp;
                low++;
                high--;
            }
        }
        else
        {
            int index2 = n-1;
            while(nums[index1] >= nums[index2])
                index2--;
            
            int temp;
            temp = nums[index1];
            nums[index1] = nums[index2];
            nums[index2] = temp;
            
            int low = index1+1, high=n-1;

            while(low < high)
            {       
                temp = nums[low];
                nums[low] = nums[high];
                nums[high] = temp;
                low++;
                high--;
            }        
        }
    }
};
