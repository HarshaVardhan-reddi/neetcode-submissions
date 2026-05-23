class Solution {
public:
  vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<int> st;
    vector<int> result(temperatures.size(), 0);
    for(int i=0; i < temperatures.size(); i++){
      while(!st.empty() && temperatures[st.top()] < temperatures[i]){
        int days = i - st.top();
        result[st.top()] = days;
        st.pop();
      }
      st.push(i);
    }
    return result;
  }
};