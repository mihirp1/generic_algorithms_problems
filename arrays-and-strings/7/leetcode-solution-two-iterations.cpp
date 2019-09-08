// Clockwise 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //Transpose Matrix
        vector<vector<int>> temp(matrix.size());
        
        for(int i = 0 ; i < temp.size() ; ++i)
        {
            temp[i].resize(temp.size());
        }      
        
        for(int i = 0 ; i < matrix.size() ; ++i)
        {
            for(int j = 0 ; j < matrix[i].size() ; ++j)
            {
                temp[i][j] = matrix[j][i];
            }
        }
        
        //Reflection along vertical axis
    
        
        for(int i = 0 ; i < temp.size() ; ++i)
        {
            for(int j = 0 ; j < temp[i].size() ; ++j)
            {
                
                if(j != temp[i].size()/2)
                {
                    swap(temp[i][j],temp[i][temp[i].size()-j-1]);
                }
                else
                    break;
            }
        }
        
        
        for(int i = 0 ; i < matrix.size() ; ++i)
        {
            
            for(int j = 0 ; j < matrix[i].size() ; ++j)
            {
                matrix[i][j] = temp[i][j];
            }
        }
        

        
        
        
        
    }
};
