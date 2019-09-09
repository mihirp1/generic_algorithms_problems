//https://leetcode.com/problems/search-in-a-sorted-array-of-unknown-size/
// Forward declaration of ArrayReader class.
class ArrayReader;

class Solution {
public:
    
    int binary_search(const ArrayReader& reader, int l, int right, int target)
    {
        l = 0;
        int r = right;
        int mid;
        while(l <= r)
        {
            mid = l + (r-l)/2;
            if(reader.get(mid) == target)
            {
                return mid;
            }
            
            else if(reader.get(mid) > target)
            {
                r =  mid-1;
            }
            else if(reader.get(mid) < target)
            {
                l = mid+1;
            }
            
        }
        return -1;
    }
    
    
    
    
    int search(const ArrayReader& reader, int target) {
        
        
        int low = 0;
        int high = 1;
        
        //std::cout <<reader.get(0)<<std::endl;
        int max_1 = 0;
        
        while(1)
        {
            if(reader.get(low) != INT_MAX)
            {
                if(reader.get(high) != INT_MAX)
                {
                    max_1 = low;
                    high = high*2;
                    low = high;
                }
                else
                {
                    max_1 = high;
                    break;
                }
                
            }
            else
            {
                max_1 = high;
                break;
            }
        }
        
        
        std::cout<<max_1<<std::endl;
        
        return (binary_search(reader,0,max_1,target));
        
    }
};
