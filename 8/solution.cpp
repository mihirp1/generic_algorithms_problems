#include<iostream>
#include<bitset>
#include<vector>
	int main(int argc, char* argv[])

	{
	
	unsigned char a = 0x00;
	int x1 = 45; 
	int x2 = 10;
	int y = 80;
	std::vector< unsigned char> vec;
	int array_size = 80;
	int width = 16;
	int height = array_size / width;


	for(int i = 1 ; i <= array_size/8 ; ++i)
	{
		vec.push_back(a);

	}


	int div = (y-1) * 8 * width;

	int x1_pixel_location = ((y-1)*8*width + x1) % div;   	
	int x2_pixel_location = x1_pixel_location + x2;	

	std::cout <<"Pixel Location : " << x1_pixel_location<<" "<<x2_pixel_location<<std::endl; 
	

	for(int i = 1 ; i <= array_size/8 ; ++i)
	{
		if( i < x1/8 )
		{
			vec[i-1] = 0x00;
		}
		else if()

	}

	return 0;
	}
