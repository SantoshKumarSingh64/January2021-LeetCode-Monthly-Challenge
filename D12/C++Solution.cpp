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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head = NULL;
        ListNode *temp, *prev = NULL;
        int l1_data,l2_data;
        int carry=0,data;
        
        while(l1 || l2)
        {
            if(l1 != NULL)
                l1_data = l1->val;
            else
                l1_data = 0;
        
            if(l2 != NULL)
                l2_data = l2->val;
            else
                l2_data = 0;
            
            data = l1_data + l2_data + carry ;
            if(data >= 10)
            {
                data = data%10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            temp = new ListNode(data); 
            if(head == NULL)
                head = temp;
            else
                prev->next = temp;
            
            prev = temp;
            if(l1 != NULL)
                l1 = l1->next;
            if(l2 != NULL)
                l2 = l2->next;
    
        }
        
        if(carry)
            temp->next = new ListNode(carry);
        
        return head;
    }
};
