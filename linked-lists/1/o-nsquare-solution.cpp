/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL)
            return head;
        
        ListNode* next = NULL;
        ListNode* prev = head;
        
        
        while(prev)
        {
            if(prev->next)
                
               next = prev->next;
            else
                return head;
            
            while(next)
            {
                if(prev->val == next->val)
                {
                    prev->next = next->next;
                    
                }
                
                    next = next->next;            
            }
            
            prev = prev->next;
        }
            
    return head;        
            
    }
};
