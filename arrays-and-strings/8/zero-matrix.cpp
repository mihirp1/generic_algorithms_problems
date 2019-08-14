/* 

Add exisiting block rows to a set and mark the rest to 0

*/


#include<iostream>
#include<string>
#include<vector>
#include<set>
	int main(int argc, char* argv[])

	{
	int N = 5;	
	int start = 65;
	std::vector<std::vector<int>> mat(N);
	
	for(int i = 0 ; i < mat.size(); ++i)
	{
		mat[i].resize(N);

	}

	for(int i = 0 ; i < mat.size() ; ++i)
	{
		
		for(int j = 0 ; j < mat[0].size() ; ++j)
		{
			
			mat[i][j] = start;
			start+=1;
			if((mat[i][j] % 7) == 0)
		          mat[i][j] = 0;	 
		}

	}

	/* Printing The Matrix */

	for(int i = 0 ; i < mat.size() ; ++i)
	{
		for(int j = 0 ; j < mat[0].size() ; ++j)
		{
			std::cout << mat[i][j]<<" ";
		}
		std::cout<<std::endl;

	}

	
	/* Making row and column Zero */	
	int zr = 0;
	int zc = 0;

	std::set<int>s1;
	std::set<int>s2;
	
	
	for(int i = 0 ; i < mat.size() ; ++i)
	{
		for(int j = 0 ; j < mat[0].size() ; ++j)
		{
				if(s1.count(i) == 0 && s2.count(j) == 0)
				{
					if(mat[i][j] == 0)
					{
						s1.insert(i);
						s2.insert(j);
						std::cout <<i<<" "<<j<<std::endl;	

						zc = 0;
						zr = 0;
						while(zc < mat[0].size())
						{
						mat[i][zc] = 0;
						++zc;	

						}
						while(zr < mat[0].size())
                                		{
                                        	mat[zr][j] = 0;
                                        	++zr;
						}
					}
                                }
	
			
		
		}
	}

	std::cout <<"Printing Out the Matrix!"<<std::endl;

	for(int i = 0 ; i < mat.size() ; ++i)
	{
		for(int j = 0 ; j < mat[0].size() ; ++j)
		{
			std::cout<<mat[i][j] << " ";
		}
		std::cout << std::endl;

	}	

	return 0;
	}
