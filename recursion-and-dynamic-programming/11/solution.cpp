//https://leetcode.com/problems/coin-change-2/
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> vec(amount+1);
        
        vec[0] = 1;
        for(auto coin : coins)
        {
            for(int i = 1 ; i < vec.size() ; ++i)
            {
                if(i >= coin)
                {
                    vec[i] += vec[i - coin]; 
                    
                }
                
            }
            
        }
        
        return vec[vec.size()-1];
        
    }
};
