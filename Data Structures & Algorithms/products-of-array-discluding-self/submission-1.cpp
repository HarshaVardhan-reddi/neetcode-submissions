class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), suffixmul = 1;
        vector<int> prefix(n, 1), result(n);
        for(int i = 0; i < nums.size(); i++){
            int prefixmultipler = i - 1 < 0 ? 1 : prefix[i - 1];
            prefix[i] = prefixmultipler * nums[i];
        }
        for(int i = n-1; i >= 0; i--){
            suffixmul = i + 1 > n - 1 ? 1 : suffixmul * nums[i + 1];
            int prefixmul = i - 1 < 0 ? 1 : prefix[i-1];
            result[i] = suffixmul * prefixmul;
        }
        return result;
    }
};