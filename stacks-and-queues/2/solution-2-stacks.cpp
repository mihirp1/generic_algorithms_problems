https://leetcode.com/problems/min-stack/



class MinStack {
    
private:
    stack<int> s;
    stack<int> mins;

public:
    /** initialize your data structure here. */
    
    MinStack() {}
    
    void push(int x) {
        
        s.push(x);
    
        if(mins.empty())
        {
            mins.push(x);
            
        }
        else
        {
            if(x <= mins.top()) /* <= with popped or pushed element o LHS */
            {
                mins.push(x);
            }
        }      
    }
    
    void pop() {
        
        if(!s.empty())
        {
            int s_ele = s.top();
            if(s_ele <= mins.top() )
            {
                mins.pop();
            }    
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return (mins.top());

        
    }
    
    bool isEmpty() {

    if(s.empty())
    {
        return true;
    }
        else
        {
            return false;
        }
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
