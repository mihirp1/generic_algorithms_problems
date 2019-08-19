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
    bool hasCycle(ListNode *head) {
        
    if(head == nullptr)
        
     {
         //std::cout<<"Case 1!"<<std::endl;
         return false;
     }      
        
        
          if(head->next == NULL)
     {
         //std::cout<<"Case 2!"<<std::endl;
         return false;
     }
        

        
     ListNode* temp1;
     ListNode* temp2;
     
     temp1 = temp2  = head;
        
     while(temp1!=NULL && temp2!=NULL && temp1->next != NULL && temp2->next != NULL)
     {
         temp1 = temp1->next;
         temp2 = temp2->next->next;
         if(temp1==temp2)
             return true;
         
     }
        return false;
    }
};
