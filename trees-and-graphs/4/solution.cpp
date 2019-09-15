//https://leetcode.com/problems/balanced-binary-tree/

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
public:
    bool isBalanced(TreeNode* root) {
     
        if(root == NULL)
        {
            return true;
        }
    
        if((abs(max_depth(root->left) - max_depth(root->right)) <= 1) && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }
        
        return false;
    }
    
    
    int max_depth(TreeNode* root)
    {
        return(root?1 + max(max_depth(root->left),max_depth(root->right)):0);
    }
    
    
};
