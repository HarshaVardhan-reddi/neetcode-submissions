class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    
    int minnimum = INT_MAX;
    MinStack() {
        this->st = stack<int>();
    }

    void push(int val) {
        if(minst.empty() || val <= minst.top()){
            minst.push(val);
        }else{
            minst.push(minst.top());
        }

        this->st.push(val);
    }

    void pop() {
        this->st.pop();
        minst.pop();
    }

    int top() {
        return this->st.top();
    }

    int getMin() {
        return minst.top();
    }
};
