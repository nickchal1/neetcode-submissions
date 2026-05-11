class MinStack {
private:
    vector<int> nums;
public:
    MinStack() {
    }
    
    void push(int val) {
        nums.push_back(val);
    }
    
    void pop() {
        nums.pop_back();
    }
    
    int top() {
        return nums.back();
    }
    
    int getMin() {
        int min = INT_MAX;
        for (auto num : nums) {
            if (num < min) {
                min = num;
            }
        }
        return min;
    }
};
