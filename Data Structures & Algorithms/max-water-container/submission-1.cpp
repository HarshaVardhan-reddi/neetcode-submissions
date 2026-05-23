class Solution {
public:
    int maxArea(vector<int>& heights) {
    int start = 0, end = heights.size() - 1, maxarea = INT_MIN;
    while(start < end){
      int length = end - start;
      int height = min(heights[start], heights[end]);
      maxarea = max(length * height, maxarea);
      if(heights[start] < heights[end]) start++;
      else end--;
    }
    return maxarea;
  }
};
