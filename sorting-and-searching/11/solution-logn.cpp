#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>

	int maxx(std::vector<int>& vec , int a , int b , int c)

	{
		int len = vec.size();
		int aval = a < len ? vec[a]:INT_MIN;
		int bval = b < len ? vec[b]:INT_MIN;
		int cval = c < len ? vec[c]:INT_MIN; 

		int max = std::max(aval,std::max(bval, cval));

		if(max == aval)
		{
			return a;
		}
		else if(max == bval)
		{
			return b;

		}
		else 
			return c;


	}

int main()

{

std::vector<int> vec = {9,1,0,4,8,7};


	for(int i = 1 ; i < vec.size() ; i+=2)
	{
	int biggest_index = maxx(vec,i-1,i,i +1);	
		if(i != biggest_index)
		{
		  std::swap(vec[i],vec[biggest_index]);

		}			

	}


	for(int i = 0 ; i < vec.size() ; ++i)
	{
		std::cout<<vec[i]<<" ";

	}



return 0;
}
