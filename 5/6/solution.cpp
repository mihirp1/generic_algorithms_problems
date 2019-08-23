//https://leetcode.com/problems/hamming-distance/submissions/


Class Solution {
public:
    int hammingDistance(int x, int y) {
        
        //int one;
        int count = 0;
        for(int i = 0 ; i < 32 ; ++i)
        {
            if(((1 << i)  & x) ^ ((1 << i) & y))
            {
                ++count;
            }
              
        }
        return count;
    }
};
