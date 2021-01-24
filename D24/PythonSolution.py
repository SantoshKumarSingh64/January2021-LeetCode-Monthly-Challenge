# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        
        if not lists or len(lists) == 0:
            return None
        
        n = len(lists)
        if n == 1:
            return lists[0]
        
        def mergeList(l1,l2):
            
            if l1 is None:
                return l2
            
            if l2 is None:
                return l1
            
            dummy = ListNode()
            temp = dummy
            
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
            if l2:
                temp.next = l2
                
            return dummy.next
        
        head = mergeList(lists[0],lists[1])
        for x in range(2,n):
            head = mergeList(head,lists[x])
        
        return head
        
