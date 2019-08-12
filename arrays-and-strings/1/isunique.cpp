#include<string>
#include<iostream>
#include<map>

int main()

   {
   std::map<char,int> m1;
   std::string tmp = "MIHIRPHATAK";
  
   for(int i = 0; i < tmp.size() ; ++i)
      {

      	if(m1.count(tmp[i]) > 0)
      	{
        std::cout << "Non Unique!"<<std::endl;
        return true;
      	}

      	else
      	{
        ++m1[tmp[i]];

      	}

      } 
   

   return 0;
   }
