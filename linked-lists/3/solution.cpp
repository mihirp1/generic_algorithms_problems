//https://leetcode.com/problems/middle-of-the-linked-list/submissions/

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
    ListNode* middleNode(ListNode* head) {
        
        if(head == NULL)
        {
            return nullptr;
        }
        
        auto slow = head;
        auto fast = head;
        
        while(fast->next && fast)
        {
            if (fast->next->next==NULL)  
            {
                fast=fast->next;
                return slow->next;
            }
            else 
            {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        
        return slow;
        
        
    }
};
