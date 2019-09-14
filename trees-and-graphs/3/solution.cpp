//https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
       vector<vector<int>> res;
       queue<TreeNode*> q;
       q.push(root); 
        
        if(root == nullptr)
        {
            return res;
        }
        
       while(!q.empty())
       {
           int size = q.size();
           vector<int> vec;
           for(int i = 0 ; i < size ; ++i)
           {
            auto f = q.front();
               vec.push_back(f->val);
            q.pop();
            //std::cout<<f->val<<" Queue Size: "<<q.size() <<std::endl;
            if(f->left)
               q.push(f->left);
            if(f->right)
               q.push(f->right);
           
           //std::cout<<"#"<<std::endl;
            //q.pop();
           //std::cout<<"#"<<std::endl;
           }
           res.push_back(vec);
           
       }
        
     return res;   
        
    }
};
