class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0; i < nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int start = i+1, end = nums.size() - 1;
            while(start < end){
                int sum = nums[start] + nums[end] + nums[i];
                if(sum == 0){
                    res.push_back({nums[i], nums[start], nums[end]});
                    start++; end--;
                    while(start < end && nums[start] == nums[start - 1]) start++;
                    while(start < end && nums[end] == nums[end + 1]) end--;
                }else if(sum < 0){
                    start++;
                }else{
                    end--;
                }
            }
        }
        return res;
    }
};