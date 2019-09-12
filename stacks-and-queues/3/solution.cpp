//Stack Of Plates
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

class stackofplates

	{

	private:
		int capacity;
		std::vector<std::stack<int>*>* vec;

	public:	
	stackofplates()
	{
	vec = new std::vector<std::stack<int>*>;
	
	auto temp = new std::stack<int>;
	
	vec->push_back(temp);
	capacity = 10;

	}

	~stackofplates()
	{
		for(int i = 0 ; i < vec->size() ; ++i)
		{
			delete [] vec;
		}
		//delete [] vec;
	}


	std::stack<int>* allocate_stack()
	{
	std::stack<int>* st_p = new std::stack<int>;		
	return st_p;	
	}

	void deallocate_stack(std::stack<int>* st_p)
	{
		delete st_p;
	}
	

	};

