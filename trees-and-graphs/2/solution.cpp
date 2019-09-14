/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
     TreeNode* createBST(int l , int r,vector<int>& nums)
    {
        if(r <= l)
        {
            return NULL;
        }
        
        int mid = l + (r - l)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        
        
        node->left = createBST(l,mid,nums);
        node->right = createBST(mid+1,r,nums);
        

        return node;
        
    }
    
    
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return (createBST(0 , nums.size(), nums)) ;
    }
    
   
    
    
};
