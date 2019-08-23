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
        
        //ListNode* curr = head;
        ListNode* next = head;
        ListNode* prev = NULL;
        std::unordered_map<int,int> hash;
        //hash[head->val] = 1;
        
        while(next)
        {   
            if(hash.count(next->val) > 0)
            {
                prev->next = next->next;
                ++hash[next->val];
                //curr = next;
            }
            else
            {
                hash[next->val] = 1;
                prev = next;
            }
            
            next = next->next;
        }
            
    return head;        
            
    }
};
