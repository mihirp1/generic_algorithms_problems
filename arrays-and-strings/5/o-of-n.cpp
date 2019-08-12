#include<iostream>
#include<map>

int main(int argc, char* argv[])

        {
        std::string s1 = "kale";
        std::string s2 = "kle";
        std::map<int,char> m1;
        std::map<int,char> m2;
        int dis=0;
        int l = 0;
        int s = 0;
	int l1 = 0;
	int l2 = 0;

	if((abs(s1.size()) - abs(s2.size())) > 1)
	{
		std::cout<<"Not a Candidate: Dist > 1"<<std::endl;
		return false;
	}

	l1 = s1.size();
	l2 = s2.size();

	if(abs(l1-l2) == 1)
	{
		++dis;
	}

	int small;
	l1<l2?small=l1:small=l2;
	

	
	while(l < s1.size() && s < s2.size())
	{
		if(s1.size() == s2.size())
		{
			if(s1[l] != s2[s])
			{
				++dis;
				++l;
				++s;				
			}

			if(l == s1.size()-1 && s == s2.size()-1)
				{
					if(dis > 1)
					return false;

					else if(dis == 1)
					return true;
						
				}	
		}

		else

		{

			 if(s1[l] == s2[s])
                        {
                                ++l;
                                ++s;
                        }

                        else        
			{
	                	if(l1 < l2)
				{
					++s;
				} 
				else
				{
					++l;
				}              


                        }



		}		

	}
	
	
        if(dis > 1)
	{
        std::cout<<"Not a candidate!"<<std::endl;
	return false;
	}

	else if(dis == 1)
	{
	std::cout<<"CAndidate!"<<std::endl;
	return true;
	}


	return 0;
	}
