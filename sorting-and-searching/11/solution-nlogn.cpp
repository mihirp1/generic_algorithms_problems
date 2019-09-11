//Page 414 CTCI
#include <iostream>
#include <algorithm>

int main()



{

std::vector<int> vec = {0,1,4,7,8,3};


	for(int i = 1 ; i < vec.size() ; i+=2)

	{

		std::swap(vec[i],vec[i-1]);


	}

	for(int i = 0 ; i < vec.size() ; ++i)
	{
		std::cout << vec[i]<<" ";
	}



return 0;
}
