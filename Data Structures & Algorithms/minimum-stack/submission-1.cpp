class MinStack {
private:
    stack<int> nums;
    stack<int> min_nums;
public: 
    MinStack() {
    }
    
    void push(int val) {

        nums.push(val);
        
        if (min_nums.empty()) {
            min_nums.push(val);
        }
        else if (val > min_nums.top()) {
            min_nums.push(min_nums.top());
        }
        else {
            min_nums.push(val);
        }
    }
    
    void pop() {
        nums.pop();
        min_nums.pop();
    }
    
    int top() {
        return nums.top();
    }
    
    int getMin() {
        return min_nums.top();
    }
};
