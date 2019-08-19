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
        auto temp = head;
        
        while(temp)
        {
            ++len;
            temp = temp->next;
        }
        std::cout<<"len: "<<len<<std::endl;
        
        temp = head;
        
        while(temp)
        {
            --len;

            temp = temp->next;
                        if(len == n)
            {
                return temp;
            }
        }
        
        
      return head;  
    }
};
