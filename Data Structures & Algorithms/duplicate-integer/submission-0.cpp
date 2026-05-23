class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> seen;
      for(auto ele:nums){
        auto res = seen.insert(ele);
        if(!res.second) return true;
      }
      return false;
    }
};