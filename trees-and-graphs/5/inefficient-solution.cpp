//https://leetcode.com/problems/validate-binary-search-tree/
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
    bool isValidBST(TreeNode* root) {
     
        long l = LONG_MIN;
        long r = LONG_MAX;
        bool lv = true;
        bool rv = true;
        if(!root)
            return true;
        if(root->left)
        {
            if(root->left->val < root->val)
            {
            if(root->left->right || root->left->left)
                lv = recurse(root->left, l , root->val);
            }
            else
                return false;
        }
        if(root->right)
        {
            if(root->right->val > root->val)
            {
                if(root->right->right || root->right->left)
                    rv = recurse(root->right,root->val,r);
            }
            else
                return false;
        }

        return (lv && rv);
    }
    
    bool recurse(TreeNode* root, long l, long r)
    {
        //std::cout<<"l,r : "<<l<<" "<<r<<std::endl;
        if(root->left)
        {
            if(root->left->val < root->val && root->left->val > l && root->left->val < r)
            {
                //std::cout<< "HERE! "<<root->val<<std::endl;
                if(root->left->left || root->left->right)
                return (recurse(root->left,l, root->val));
            }
            else 
                return false;
        }
        
        if(root->right)
        {
            if((root->right->val > root->val) && (root->right->val > l) && (root->right->val < r))
            {
                if(root->right->left || root->right->right)
                {
                    std::cout<<"I am here!"<<std::endl;
                return (recurse(root->right,root->val, r));
                }
            }
            else
                return false;
        }
  
        
      return true;
    }
    
    
    
};
