class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        n = len(nums)
        index1 = n-2
        while index1 >= 0 and nums[index1] >= nums[index1+1]:
            index1 -= 1
        if index1 == -1:
            low = 0
            high = n-1
            while low < high:
                nums[low],nums[high] = nums[high],nums[low]
                low += 1
                high -= 1
        else:
            index2 = n-1
            while nums[index1] >= nums[index2]:
                index2 -= 1
            nums[index1],nums[index2] = nums[index2],nums[index1]

            low = index1+1
            high = n-1

            while low < high:
                nums[low],nums[high] = nums[high],nums[low]
                low += 1
                high -= 1
        
        
