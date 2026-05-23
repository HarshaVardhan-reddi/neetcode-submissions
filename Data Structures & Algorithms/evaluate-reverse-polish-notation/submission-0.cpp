class Solution {
public:
  int evalRPN(vector<string>& tokens) {
    stack<int> nums;
    int res = 0;
    for(auto token:tokens){
      if(token == "+" || token == "*" || token == "/" || token == "-"){
        int t1 = nums.top(); nums.pop();
        int t2 = nums.top(); nums.pop();
        if(token == "+") nums.push(t1+t2);
        if(token == "*") nums.push(t1*t2);
        if(token == "/") nums.push(t2/t1);
        if(token == "-") nums.push(t2 - t1);
      }else{
        int numtoken = stoi(token);
        nums.push(numtoken);
      }
    }
    return nums.top();
  }
};