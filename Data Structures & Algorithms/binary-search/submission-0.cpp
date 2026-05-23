class Solution {
public:
    int search(vector<int>& nums, int target) {
      int start = 0, end = nums.size() - 1, res = -1;
      while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] == target) {
          res = mid;
          break;
        }else if(target < nums[mid]){
          end = mid - 1;
        } else {
          start = mid + 1;
        }
      }
      return res;
    }
};