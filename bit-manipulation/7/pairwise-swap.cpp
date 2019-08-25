#include<iostream>
#include<bitset>

int main(int argc, char* argv[])

	{

	unsigned int a = 897656;
	
	std::cout << "Ori : "<<std::bitset<32>(a)<<std::endl; 

	unsigned int a_even = a & 0xAAAAAAAA;
	unsigned int a_odd = a & 0x55555555;

	a_even >>= 1;
	a_odd <<= 1;

	unsigned int ans = a_even | a_odd;

	std::cout << "Ans : "<<std::bitset<32>(ans)<<std::endl;


	return 0;
	}
