/* Find length of longest non repeating and repeating substring */

#include<iostream>
#include<map>
#include<vector>
#include<unordered_set>
#include<unordered_map>
	/* Longest */
	int main()

	{
	std::string str = "mihirphatak";
	std::string temp = "";
	std::unordered_map<int> hash;
	int back=0;
	int front=0;	
	int max;

	while(back < front)
	{
	
		if(hash.count(str[front]) > 0)
		{
			max = front - back - 1;
			st.empty();
			
		}

		else
		{
		hash[str[front]] = front;
		++front;

		}

	}




	return 0;
	}
