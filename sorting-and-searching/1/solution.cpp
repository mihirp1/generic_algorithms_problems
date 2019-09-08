//https://leetcode.com/problems/merge-sorted-array/description/
class Solution {
public:
        
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int p1 = m - 1;
        int p2 = nums2.size() - 1;
        int back = nums1.size()-1;
        if(m == 0) return;
        
        /*
        for(int i = nums1.size() - 1 ; i >= 0 ; -- i)
        {
            if(nums1[i] != 0)
            {
                p1 = i;
            }
        }
        */
        
        std::cout << "p1 : "<<p1<<std::endl;
        
        while(p1 > -1 && p2 > -1 && back > -1)
        {
            if(nums1[p1] > nums2[p2])
            {               
                nums1[back] = nums1[p1];
                --p1;
                --back;
            }
            else if(nums1[p1] < nums2[p2])
            {
                nums1[back] = nums2[p2];
                --p2;
                --back;
            }
            else
            {
                nums1[back] = nums2[p2];
                --p2;
                --back;
                
            }
            
    
        }
        
    }
};
