class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> main;
        vector<int> temp;
        int mask = 1;
        
        for(int i = 0 ; i < pow(2,nums.size()) ; ++i)
        {
              for(int j = 0 ; j < nums.size() ; ++j)
              {
                    if(((mask & i) >> j) & 1)
                        temp.push_back(nums[j]);
                    mask <<= 1;
              }
                mask = 1;
              main.push_back(temp);  
              temp = {};
        }
     
        return main;
    }
    
    
};

