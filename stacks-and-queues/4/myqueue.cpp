#include<stack>
#include<iostream>


class myqueue

{
	private :
		stack<int> q;
		stack<int> d; 

	public :
		myqueue() {}

		void enqueue(int x);
		{
		q.push(x);

		}

		void dequeue()
		{	
			while(!q.empty())
			{
			d.push(q.top());
			q.pop();

			}

			d.pop();

			while(!d.empty())
			{
			q.push(d.top());
			d.pop();		

			}

		}

		void enqueue(int x)

		{

			q.push(x);


		}



}
