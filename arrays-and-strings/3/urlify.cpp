#include<iostream>
#include<map>

int main(int argc, char* argv[])

	{
         std::string s1 = "Mihir Tulsidas Phatak";
         std::string temp = "";

         for(int i = 0 ; i < s1.size() ; ++i)
            {
             	if(s1[i] == ' ')
             	{
			temp += "%20";

		}
		else
		{
			temp += s1[i];
		}


            }

          std::cout <<"Answer : " <<temp << std::endl;


          return 0;

	}
