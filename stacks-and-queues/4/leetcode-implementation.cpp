//https://leetcode.com/problems/implement-queue-using-stacks/submissions/

class MyQueue {
    
private:
     stack<int> q;
     stack<int> d;

    
public:
    /** Initialize your data structure here. */
    MyQueue() {}
        
    
    
    /** Push element x to the back of queue. */
    void push(int x) {
        
        q.push(x);

    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        
        
        
          while(!q.empty())
                        {
                        d.push(q.top());
                        q.pop();

                        }

                        int t = d.top();
                        d.pop();

                        while(!d.empty())
                        {
                        q.push(d.top());
                        d.pop();
                        }

        return t;
    }
    
    /** Get the front element. */
    int peek() {
        
                        while(!q.empty())
                        {
                            d.push(q.top());
                            q.pop();

                        }

                        int t = (d.top());

                        while(!d.empty())
                        {
                            q.push(d.top());
                            d.pop();
                        }
        return t;
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        
        return q.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
