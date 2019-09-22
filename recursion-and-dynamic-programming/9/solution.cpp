//https://leetcode.com/problems/generate-parentheses/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> main; 
        string temp = "";
        recurse(n, 0 , 0, main, temp); 
     
        return main;
    }
    
    void recurse(int n , int open, int close, vector<string>& main, string temp)
    {
        if(close == n) 
        {
            main.push_back(temp);
            std::cout<<temp<<std::endl;
            //temp = "";
            return;
        }

            if(open < n)
            {

            recurse(n , open+1,close ,main, temp + "(");
            }
        
            if(close < open)
            {
                
            recurse(n , open, close+1 , main, temp + ")");
            }
        
        
        
        //recurse(n,0,0,main,"");
        //return main;

    }

    
};
