#include<iostream>
#include<map>

int main(int argc, char* argv[])

        {
        std::string s1 = "abbcccdddd";
        std::string s2 = "kle";
        std::map<int,char> m1;
        std::map<int,char> m2;
        int dissimilarity=0;
        int l = 0;
        int s = 0;
	int count = 1;
	std::string temp = "";


        for(int i = 0; i < s1.size()-1; ++i)

  	{
		if(s1[i] != s1[i+1])
		{
			temp += s1[i] + std::to_string(count);
			count = 1;	
		}

		else
		{

			++count;
		}
	} 


	std::cout << temp<<std::endl;
	return 0;
         }
