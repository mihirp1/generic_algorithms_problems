#include<iostream>
#include<map>

int main(int argc, char* argv[])

        {
        std::string s1 = "kale";
        std::string s2 = "kle";
        std::map<int,char> m1;
        std::map<int,char> m2;
	int dissimilarity=0;
	int l = 0;
	int s = 0;

        if(abs(s1.size() - s2.size()) > 1) 
	{
                std::cout << "Size diff greater than expected = 1"<<std::endl;
		return false;

	}

        int len_diff = abs(s1.size() - s2.size());
        int small;

        if(len_diff == 1)
	{
		dissimilarity+=1;
		if (s1.size()<s2.size())
                   small = s1.size();
                else
                   small = s2.size();  
	}  

	for(int i = 0 ; i < s1.size() ; ++i)
	{
		m1[i] = s1[i];
	}

	for(int i = 0 ; i < s2.size() ; ++i)
	{
		m2[i] = s2[i];
	}

        auto it1 = m1.begin() ;
        auto it2 = m2.begin() ;

        if(dissimilarity == 0)
	{
		while(it1 != m1.end() && it2 != m2.end())
		{
	
			if(it1->second != it2->second)
				++dissimilarity;
			++it1;
			++it2;	

		}
                if(dissimilarity == 1)
                {
                        std::cout << "Equal Length, One Edit!"<<std::endl;
                        return true;
                }
                else
                {
			std::cout << "Equal Length but too many dissimilarities!"<<std::endl;
			return false;
                }    

	}

	int simi;
	if(dissimilarity == 1)
	{	
		std::cout<<"One edit away!"<<std::endl;
                while(l < s1.size() && s < s2.size())
		{
			if(s1[l] == s2[s])
			{
				std::cout<<s1[l]<<std::endl;
				++simi;
				++l;
				++s;		
			}
			else
			{
				++l;
			}

		}
		std::cout<<"Similarity = "<<simi<<std::endl;
		if(simi == (small))

		{
		std::cout<<"This is a candidate!"<<std::endl;
		return true;
		}
                else
		{
		std::cout<<"Not a candidate!"<<std::endl;
		return false;
		}

	}

	
        //std::cout<<"Not one edit away"<<std::endl; 
	//return false;	
	}
