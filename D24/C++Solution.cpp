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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size()==0)
                return NULL;
        
        int n = lists.size();
        if(n == 1)
            return lists[0];
        
        ListNode* head = mergeList(lists[0],lists[1]);
        for(int x=2;x<n;x++)
        {
            head = mergeList(head,lists[x]);
        }
        return head;
    }
    
    ListNode* mergeList(ListNode* l1, ListNode* l2)
    {
        if(l1 == NULL)
                return l2;
        if(l2 == NULL)
                return l1;
        
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else
            {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        
        if(l1)
            temp->next = l1;
        if(l2)
            temp->next = l2;
        
        return dummy->next;
    }
};
