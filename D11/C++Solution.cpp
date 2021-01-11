class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        for x in nums2:
            i = m-1
            while i >= 0 and nums1[i] > x:
                nums1[i+1] = nums1[i]
                i -= 1
            nums1[i+1] = x
            m += 1
        
                
        
