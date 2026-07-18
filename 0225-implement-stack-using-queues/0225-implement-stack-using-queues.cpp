class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int size=q.size()-1;
        for (int i=0; i<size; i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        if (!q.empty()) {
            int i= top();
            q.pop();
            return i;
        }
        return -1;
    }
    
    int top() {
        if (!q.empty()) {return q.front();}
        return -1;
    }
    
    bool empty() {
        if (!q.empty()) {return false;}
        return true;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */