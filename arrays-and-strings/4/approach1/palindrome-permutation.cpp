#include<iostream>
#include<map>

int main(int argc, char* argv[])

        {
         std::string s = "malayalam";
         std::map<char,int> m1;
	int odd_count = 0;


         for(int i = 0; i < s.size() ; ++i)
	{
            	if(m1.count(s[i]) > 0 )
		{
            	++m1[s[i]];
		}
                else
                m1[s[i]] = 1;
                     
	}
        
        if(s.size() % 2 == 0)
        {
          for(auto it = m1.begin() ; it != m1.end() ; ++it)

		{
                	if(it->second % 2 != 0)
                          {
                            std::cout << "Not a palindrome candidate!"<<std::endl; 
                            return false;
                          }
		} 



        }

        else
		{
                        for(auto it = m1.begin() ; it != m1.end() ; ++it)

                {
                        if(it->second % 2 != 0)
                          {
                            odd_count += 1; 
                            //std::cout << "Not a palindrome candidate!"<<std::endl;
                            //return false;
                          }
                }
 
                     



                } 

                         if(odd_count  == 1)
				{
					std::cout << "Candidate!" << std::endl;
					return true;
				}
 
        return 0;
	}
