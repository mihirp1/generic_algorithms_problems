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
        
        if(!root)
        {
            return true;
        }
        //int l = MaxDepth(root->left);
        //int r = MaxDepth(root->right);
        //std::cout << l << " "<< r <<std::endl;
        
        return (isBalanced(root->left) && isBalanced(root->right) && abs(MaxDepth(root->left) - MaxDepth(root->right)) <= 1);
        /*
        {
            return false;
        }
        else
            return true;
        */
        
    }
    
    int MaxDepth(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        
        //int l = MaxDepth(root->left);
        //int r = MaxDepth(root->right);
        
        //std::cout<<l<<" "<<r<<std::endl;

        
        return 1 + max(MaxDepth(root->left),MaxDepth(root->right));
        
    }
    
    
};
