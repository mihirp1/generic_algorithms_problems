//https://leetcode.com/problems/group-anagrams/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<string,vector<string>>hash;
        std::vector<vector<string>> vec;
        vector<string> inner_vec; 
        string temp = "";
        
        for(int i = 0 ; i < strs.size() ; ++i)
        {
            temp = strs[i];
            std::sort(strs[i].begin() , strs[i].end());
            if(hash.count(strs[i]) > 0)
            {
                hash[strs[i]].push_back(temp);
            }
            else
            {
                hash[strs[i]] = {temp};
            }
        }
        // Print the Hash Table Out for verification purpose
        /*
        for(auto it = hash.begin() ; it != hash.end() ; ++it)
        {
            std::cout << "Key : "<<it->first <<std::endl;
            for(int i = 0 ; i < it->second.size() ; ++i)
            {
                std::cout << it->second[i]<<" ";
            }
            std::cout<<std::endl;
        }
        */
        //Create Output vector
        
        for(auto it = hash.begin() ; it != hash.end() ; ++it)
        {

            inner_vec.erase(inner_vec.begin(), inner_vec.end());
            
            for(int i = 0 ; i < it->second.size() ; ++i)
            {
                inner_vec.push_back(it->second[i]);
            }
            vec.push_back(inner_vec);

        }
        
        return vec;
    }
};
