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
    
    std::stack<int>st;
    
    ListNode* ReverseLinkedList(ListNode* head)
    {
        
        if(!head->next)
        {
            return head;
        }
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next;          
        }
        
        return prev;
    }
    
    
    
    bool isPalindrome(ListNode* head) {
        
    auto slow = head;
    auto fast = head;
        
    if(!head)
    {
        return true;
    }
        
        
   while(fast && fast->next)
   {
       slow = slow->next;
       fast = fast->next->next;
   }
        
   auto rev = ReverseLinkedList(slow);

        
   auto temp1 = head;
    auto temp2 = rev;
        
        while(temp1 && temp2)
        {
            if(temp1->val == temp2->val)
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else
            {
                return false;
            }
            
            
        }
        
        return true;
        
    }
    
    
    
};


