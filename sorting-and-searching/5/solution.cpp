#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

int ans() {
	//code
	std::vector<std::string> vec = {"for", "geeks", "", "", "", "", "ide","practice", "", "", "", "quiz"};
	std::string target = "quiz";
	int l = 0;
	int r = vec.size() - 1;
	int mid = l + (r-l)/2;
	int left,right;
	std::cout <<"Size : "<<vec.size()<<std::endl;
	while(l < r)
	{
	        mid = l + (r-l)/2;
		std::cout << "CP 1"<<std::endl;
	        if(vec[mid] == target)
	        {
	            return mid;
	 
	        }
	        if(vec[mid] == "")
	        {
			if(mid-1 > -1)
	            		left = mid -1;
			if(mid+1 < vec.size())
	            		right = mid + 1;
	            while(1)                                         // If new mid recheck mid with target again
	            {
			std::cout << left<<" "<<l<<" "<<right<<" "<<r<<std::endl;
	                if(left < l && right > r)
	                {
	                    return -1;
	                }
	                else if(vec[left] != "" && left >= l)
	                {
	                    mid = left;
	                    break;
	                }
	                else if(vec[right] != "" && right <= r)
	                {
	                    mid = right;
	                    break;
	                }
	                
	                
	                --left;
	                ++right;
	            }
	   
	        }
	        if(vec[mid] > target && vec[mid] != "")
	        {
	            r = mid-1;
	            
	        }
	        if(vec[mid] < target && vec[mid] != "")
	        {
	            l = mid+1;
	        }
		if(vec[mid] == target)     // Crucial Clause Check should reappear since right and left reset
                {
                    return mid;
                }
	    
	}
	return mid;
}

int main()

{
auto one = ans();

std::cout<<"Answer = " << one<<std::endl;

}


