#include<iostream>
#include<bitset>

int main(int argc,char* argv[])

	
	{

	int a = 145786394;
	std::cout<<"Ori: "<<std::bitset<32>(a)<<std::endl;

	int upper = a & 0xFFFF0000;
	int lower = a & 0x0000FFFF;


	upper >>= 16;
	lower <<= 16;

	int ans = upper | lower;

	std::cout<<"Ans: "<<std::bitset<32>(ans)<<std::endl; 
	




	return 0;
	}			
