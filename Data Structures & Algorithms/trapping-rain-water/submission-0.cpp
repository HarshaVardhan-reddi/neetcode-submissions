class Solution {
public:
  int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1, leftMax = height[left], rightMax = height[right], fheight = 0;
    while(left < right){
      if(leftMax < rightMax){
        left++;
        fheight += max(leftMax - height[left], 0);
        leftMax = max(leftMax, height[left]);
      }else{
        right--;
        fheight += max(rightMax - height[right], 0);
        rightMax = max(rightMax, height[right]);
      }
    }
    return fheight;
  }
};