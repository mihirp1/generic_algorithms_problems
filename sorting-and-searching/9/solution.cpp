//https://www.youtube.com/watch?v=FOa55B9Ikfg
//https://stackoverflow.com/questions/1730961/convert-a-2d-array-index-into-a-1d-index
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size()==0)
        {
            return false;
        }
        
        int l  = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int r = (m * n) - 1;
        int mid = l + (r-l) /2;
        int nrow,ncol;
        
        while(l <= r)
        {
            mid = l + (r-l)/2;
            nrow = mid/n;
            ncol = mid%n;
            
            if(matrix[nrow][ncol] == target)
            {
                return true;
            }
            else if(matrix[nrow][ncol] < target)
            {
                int i = nrow * n + ncol; /* IMP */
                /* int oneDindex = (row * length_of_row) + column; // Indexes*/
                //i = i +1;
                
                l = i+1;
            }
            else if(matrix[nrow][ncol] > target)
            {
                int i = nrow * n + ncol; /* IMP */
                /* int oneDindex = (row * length_of_row) + column; // Indexes*/
                //i = i -1;
                
                r = i-1;
            }
            
            
        }
        
        return false;
        
    }
};
