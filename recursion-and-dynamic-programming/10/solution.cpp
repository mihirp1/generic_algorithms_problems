//https://leetcode.com/problems/flood-fill/
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        
        
        int oldc = image[sr][sc];
        if(oldc == newColor)
            return image;
        recurse(image, sr, sc, newColor, oldc);
        
        
        return image;
        
    }
    
     void recurse(vector<vector<int>>& image,int i, int j, int newc,int oldc)
    {
        
        if(image[i][j] == oldc)
        {
            image[i][j] = newc;
        }
        
        
        
        if(checkbounds(image,i-1,j))
        {
            if(image[i-1][j]== oldc)
            recurse(image,i-1, j, newc, oldc);
        }
        
        if(checkbounds(image,i,j+1))
        {
            if(image[i][j+1]== oldc)
            recurse(image,i, j+1, newc, oldc);
        }
        
        if(checkbounds(image,i+1,j))
        {
            if(image[i+1][j]== oldc)
            recurse(image,i+1, j, newc, oldc);
        }
        if(checkbounds(image,i,j-1))
        {
            if(image[i][j-1]== oldc)
            recurse(image,i, j-1, newc, oldc);
        }
        
        
    }
    
    int checkbounds(vector<vector<int>>& image,int i , int j)
    {
        if(i < image.size() && j < image[0].size())
        {
            return true;
        }
        return false;
    }
    
    
};
