//https://leetcode.com/problems/path-sum-iii/
//https://www.geeksforgeeks.org/number-subarrays-sum-exactly-equal-k/
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
    int pathSum(TreeNode* root, int sum) {
    std::unordered_map<int,int> hash;
    int ans = 0;    
    //std::unordered_set<TreeNode*> s;    
        
    if(!root)
        return 0;
        //int res = 0;
    
    //std::cout<<long(root)<<std::endl;    
    ans = recurse(root,hash,0,sum,0);    
        
        
        
    return ans;
        
     
        
    }   
    
    
    int recurse(TreeNode* root, std::unordered_map<int,int>  hash,int currsum,const int& k, int res)
    {
        
        int l= 0;
        int r = 0;
        //s.insert(root);
        
        //std::cout << "Result : "<<res<<" Root->val "<<root->val<<std::endl;
        
        
        currsum += root->val;
        
        if(currsum == k)
            ++res;
        
        if(hash.count(currsum-k) > 0)
            res += hash[currsum-k];

        if(hash.count(currsum) > 0)
            ++hash[currsum];
        else
            hash[currsum] = 1;
               
        
        if(root->left )
        {
          //s.insert(root->left);  
          res =  recurse(root->left,hash,currsum,k,res);
          //res += l;
        }
        
        if(root->right)
        {
            //s.insert(root->right);  
            res = recurse(root->right,hash,currsum,k,res);
            //res += r;
        }
        
        if(!root->left && !root->right)
        {
            currsum = 0;
            //s.erase(s.begin(), s.end());
            hash.erase(hash.begin(), hash.end());
        
        }   
        return res;
    }
    
    
    
    
};
