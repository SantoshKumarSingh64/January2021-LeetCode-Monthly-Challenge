# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        
        head = None
        prev = None
        temp = None
        carry = 0
        
        while l1 is not None or l2 is not None:
            
            l1_data = l1.val if l1 else 0
            l2_data = l2.val if l2 else 0
            
            data = l1_data + l2_data + carry
            carry = 1 if data >= 10 else 0
            data = data%10
            
            temp = ListNode(data)
            
            if head is None:
                head = temp
            else:
                prev.next = temp
            
            prev = temp
            
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
        
        if carry:
            temp.next = ListNode(carry)
        
        return head    
