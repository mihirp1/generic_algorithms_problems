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
        
        int len = 0;
        auto front = head;
        auto back = head;       
        int count = 0;      
        
        while(count < n+1)
        {
            front = front->next;
            ++count;
        }
        
        if(count == 1 && n == 1)
        {
            return NULL;
        }
        
        //back_minus_1;
        //std::cout<<front->val<<std::endl;
        while(front)
        {
            back = back->next;
            front = front->next; 
        }
        
        std::cout<<front->val<<" "<<back->val<<std::endl;
        
      return back;  
    }
};
