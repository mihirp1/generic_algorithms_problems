// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

/*
Best Resource To understand Problem : https://www.youtube.com/watch?v=py3R23aAPCA&t=391s
*/


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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        TreeNode* ancl = NULL;
        TreeNode* ancr = NULL;

        if(!root)
        {
            return NULL;
        }

        if(root == p || root == q)
        {
            return root;
        }

        ancl = lowestCommonAncestor(root->left, p, q);
        ancr = lowestCommonAncestor(root->right, p, q);

        if(!ancl)
        {
            return ancr;
        }
        if(!ancr)
        {
            return ancl;
        }

        return root;

    }
};

