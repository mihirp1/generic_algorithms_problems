//https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::map<ListNode*,int> hash;
        
        if(headA == headB)
        {
            return headA;
        }
        
        
        auto tempA = headA;
        auto tempB = headB;
        
        if(headA == NULL ||  headB == NULL)
        {
            return NULL;
        }

        ListNode* lastA = NULL;
        ListNode* lastB = NULL;
        
    
        while(tempA->next)
        {
            
            tempA = tempA->next;
            lastA = tempA;
            
        }
        if(!tempA->next)
        {
            lastA = tempA;
        }
        
        
        if(!tempB->next)
        {
            tempA = headA;
            lastB = tempB;
            
            
            while(tempA->next)
            {
            
                tempA = tempA->next;
                if(tempA == lastB)
                    {
                        return tempA;
                           
                    }
        
            
            }
            
            
            
        }
        
        while(tempB->next)
        {
            
            tempB = tempB->next;
            if(tempB == lastA)
            {
                tempA = headA;
                tempB = headB;
                
                while(tempA && tempB)
                {
                    tempA = tempA->next;
                    tempB = tempB->next;
                    if(tempA == NULL)
                    {
                        tempA = headB;
                    }
                    if(tempB == NULL)
                    {
                        tempB = headA;
                    }
                    
                    if(tempA == tempB)
                    {
                        return tempA;
                    }
                    
                    
                }
                
                
                
            }
        
            
        }
        
        
        return NULL;
        
    }
};
