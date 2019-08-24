//CTCI ED 6 : Chp 5, Problem #1
#include<iostream>
#include<bitset>

	int main(int argc, char* argv[])

	{
	
	int M = 2048;
	int N = 31;

	int start = 0;
	int end = 3;
	int main_mask = 0;	

	//std::cout<<std::bitset<32>(0xFFFFFFFF)<<std::endl;

	//Create A Mask
	int mask = 0xFFFFFFFF;
	//std::cout << mask<<std::endl;	
	


	for(int i = end; i >= start ; --i)
	{
		main_mask += 1 << i;

	}

	std::cout<<std::bitset<32>(main_mask)<<std::endl;

	main_mask = ~main_mask;
	std::cout<<std::bitset<32>(main_mask)<<std::endl;	

	int changed_number;

	changed_number = M & main_mask;
	std::cout<<std::bitset<32>(changed_number)<<std::endl;


	auto ans = changed_number | N;

	std::cout<<"M = "<<std::bitset<32>(M)<<std::endl;
	std::cout<<"N = "<<std::bitset<32>(N)<<std::endl;

	std::cout<<"A = "<<std::bitset<32>(ans)<<std::endl;

	return 0;
	}


