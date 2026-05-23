class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0, bottom = matrix.size() - 1, row = 0, lastRowElement = matrix[0].size() - 1;
        while(top <= bottom){
            row = (top + bottom) / 2;
            if(target < matrix[row][0]) bottom = row - 1;
            else if(target > matrix[row][lastRowElement]) top = row + 1;
            else break;
        }
        if(top > bottom) return false;
        int start = 0, end = matrix[row].size() - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(target > matrix[row][mid]) start = mid + 1;
            else if(target < matrix[row][mid]) end = mid - 1;
            else return true;
        }
        return false;
    }
};