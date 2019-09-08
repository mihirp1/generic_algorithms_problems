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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next == NULL && n ==1)
        {
            return NULL;
        }
  
        int count = 0;
        
        
        auto slow = head;
        auto back = head;
        
        while(count != n)
        {   
            slow = slow->next;
            ++count;
        }
        
        if(slow == NULL)
        {
            return head->next;
        }
        
        
        while(slow->next)
        {
            slow = slow->next;
            back = back->next;
        }
        

       back->next = back->next->next;
        
       
     return head;  
    }
};
