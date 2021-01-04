# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        
        if l1 is None:
            return l2
        if l2 is None:
            return l1
        
        if l1.val <= l2.val:
            temp = l1
            l1 = l1.next
        else:
            temp = l2
            l2 = l2.next
        ans = temp
        while l1 and l2:
            if l1.val <= l2.val:
                temp.next = l1
                l1 = l1.next
            else:
                temp.next = l2
                l2 = l2.next
            temp = temp.next
        
        if l1:
            temp.next = l1
        elif l2:
            temp.next = l2
        else:
            temp.next = None
        
        return ans
            
        
            
            
        
