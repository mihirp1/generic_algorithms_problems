#include<iostream>
#include<algorithm>
#include<map>
#include<string>

int main(int argc, char* argv[])

	{
         std::string s1 = "MIHIR";
         std::string s2 = "RIHIM";
         
         std::sort(s1.begin(),s1.end());    
         std::sort(s2.begin(),s2.end());
          

         if(s1 == s2)
         {
         std::cout << "Permutations of eachother"<<std::endl;
         return true;

         }

         return false;

	}
