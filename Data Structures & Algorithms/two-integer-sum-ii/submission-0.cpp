class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int start = 0, end = numbers.size() - 1;
      vector<int> res;
      while(start < end){
        int tsum = numbers[start] + numbers[end];
        if(tsum == target){
          res.push_back(start+1);
          res.push_back(end+1);
          break;
        } else if(tsum > target) end--;
        else if(tsum < target) start++;
      }
      return res;
    }
};
