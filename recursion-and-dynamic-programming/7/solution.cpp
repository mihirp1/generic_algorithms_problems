//https://leetcode.com/problems/permutations/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> main;
        permute(temp , main , nums);
     return main;   
    }
    
    
    void permute(vector<int>& temp, vector<vector<int>>& main, vector<int>& nums)
    {
        if(temp.size() == nums.size())
        {
            main.push_back(temp);
        }
        
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(find(temp.begin(), temp.end(),nums[i]) != temp.end())
                continue;
            
            temp.push_back(nums[i]);
            permute(temp , main , nums);
            temp.erase(temp.end()-1);
            
        }
        
        
    }
    
};
