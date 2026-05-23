class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> eleIndices;
      vector<int> res;
      for(int i=0; i < nums.size(); i++) eleIndices[nums[i]] = i;
      for(int i=0; i<nums.size(); i++){
        bool diffExists = eleIndices.count(target - nums[i]) > 0;
        int resIndex = eleIndices[target - nums[i]];
        if(diffExists && resIndex != i) {
          int first, second;
          if(resIndex < i){
            first = resIndex;
            second = i;
          }else{
            first = i;
            second = resIndex;
          }
          res.push_back(first);
          res.push_back(second);
          break;
        }
      }
      return res;
    }
};