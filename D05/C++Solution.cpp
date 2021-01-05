/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * newHead = new ListNode;
        newHead -> next = head;
        ListNode * prev = newHead;
        
        while(head && head->next)
        {
          if(head->val == head->next->val)
          {
            while(head && head->next && head->val == head->next->val)
                head = head->next;
            head = head->next;
            prev->next = head; 
          }
          else
          {
              prev = prev->next;
              head = head->next;
          }
        }
        return newHead->next;
    }
};
