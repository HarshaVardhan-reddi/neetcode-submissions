class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int> numset(nums.begin(), nums.end());
      int currentlen, maxlen = 0, currentnum;
      for(auto num:numset){
        if(!numset.count(num - 1)){
          currentlen = 1;
          currentnum = num;
          while(numset.count(currentnum+1)){
            currentnum++;
            currentlen++;
          }
          maxlen = max(maxlen, currentlen);
        }
      }
      return maxlen;
    }
};