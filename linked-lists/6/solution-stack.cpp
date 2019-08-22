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
    bool isPalindrome(ListNode* head) {
        
        ListNode* temp2 = head;
        ListNode* temp1 = head;
        while(temp2)   
        {
            st.push(temp2->val);
            temp2 = temp2->next;
        }
        
        int temp;
        while(temp1)
        {
            if(!st.empty())
            {
                temp = st.top();
                st.pop();
            }
        
            if(temp1->val == temp)
            {
                temp1 = temp1->next;
            }
            else
            {
                return false;
            }
            
        }  
        
    return true;    
    }
    
    
};


