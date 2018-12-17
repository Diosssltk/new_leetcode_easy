//本来想用size，temp标记的方法，后来发现太多过程要思考了，很麻烦，，下面这个方法很简便很好
class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> min_stack;
public:
    void push(int x) {
        stack.push(x);
        if (min_stack.empty() || ((!min_stack.empty()) && x <= min_stack.top())) {  //NOTE: 是“小于等于”，不是“小于”
            min_stack.push(x);
        }
    }
    
    void pop() {
        if (!stack.empty()) {
            if (stack.top() == min_stack.top())
                min_stack.pop();
            stack.pop();
        }
    }
    
    int top() {
        if (!stack.empty())
            return stack.top();
    }
    
    int getMin() {
        if (!min_stack.empty())
            return min_stack.top();
    }
};