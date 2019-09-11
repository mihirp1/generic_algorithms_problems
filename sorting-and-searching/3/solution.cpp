//https://leetcode.com/problems/search-in-rotated-sorted-array/
//Solution with Explanation : https://leetcode.com/problems/search-in-rotated-sorted-array/discuss/14616/C++-binary-search-with-comments-easy-to-read-and-understand 

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size() - 1;
        int mid = 0;

        if(l == r)
        {
            if(target == nums[0])
                return 0;
            else
                return -1;
        }


        while(l <= r)
        {
            mid = l + (r-l)/2;

            if(nums[mid] == target)
            {
                return mid;
            }

            else if(nums[mid] < nums[l])
            {
                if(target > nums[mid] && target <= nums[r])
                {
                    l = mid+1;
                }
                else
                    r = mid-1;

            }

            else if(nums[mid] > nums[r])
            {

                if(nums[l] <= target && target < nums[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }

            }

            else


           {

                if(target < nums[mid])
                   r = mid-1;
                else
                    l = mid+1;


            }
        }

        return -1;

    }




};
                   
