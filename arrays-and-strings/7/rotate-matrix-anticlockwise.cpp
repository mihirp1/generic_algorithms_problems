#include<iostream>
#include<map>
#include<vector>

	/* Approach 
	Step 1) Take a transpose
	STep 2) Copy contents along horizontal mirror axis
	*/

int main(int argc, char* argv[])

        {
	int N = 4;
        std::vector<std::vector<char>> mat(N);
	std::vector<std::vector<char>> temp(N);
	int let = 65;
	//auto temp = mat;

	for(int i = 0 ; i < mat.size() ; ++i)
	{
		mat[i].resize(N);
	}

	 for(int i = 0 ; i < temp.size() ; ++i)
        {
                temp[i].resize(N);
        }


	for(int i = 0; i < mat.size(); ++i)
	{
		for(int j = 0 ; j < mat[0].size() ; ++j)
		{
			mat[i][j] = let;
			++let;
		}

	}

	for(int i = 0; i < mat.size(); ++i)
        {
                for(int j = 0 ; j < mat[0].size() ; ++j)
                {
                        std::cout << mat[i][j] <<" ";
                }
		std::cout<<std::endl;

        }


	for(int i = 0; i < mat.size(); ++i)
        {
                for(int j = 0 ; j < mat[0].size() ; ++j)
                {
                        temp[j][i] = mat[i][j];
                }
                std::cout<<std::endl;

        }

	for(int i = 0; i < temp.size(); ++i)
        {
                for(int j = 0 ; j < temp[0].size() ; ++j)
                {
                        std::cout << temp[i][j]<<" ";
                }
                std::cout<<std::endl;

        }

	int offset = temp.size() - 1;
	for(int j = 0 ; j < temp.size() ; ++j)
	{
		for(int i = 0 ; i <= temp[0].size()/2 -1 ; ++i)
		{
			std::swap(temp[i][j],temp[i+offset][j]);
			offset /=2;
		}
			offset = temp.size() - 1;	

	}
		std::cout<<std::endl;

	for(int i = 0; i < temp.size(); ++i)
        {
                for(int j = 0 ; j < temp[0].size() ; ++j)
                {
                        std::cout << temp[i][j]<<" ";
                }
                std::cout<<std::endl;

        }
	
	return 0;
	}
