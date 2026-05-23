class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // rows
        for(int i=0; i < board.size(); i++){
            unordered_set<char> seen;
            for(int j=0; j<board.size(); j++){
                if(board[i][j] == '.') continue;
                if(seen.count(board[i][j])) return false;
                seen.insert(board[i][j]);
            }
        }

        // columns
        for(int i=0; i < board.size(); i++){
            unordered_set<char> seen;
            for(int j=0; j<board.size(); j++){
                if(board[j][i] == '.') continue;
                if(seen.count(board[j][i])) return false;
                seen.insert(board[j][i]);
            }
        }

        
        // Boxes
    for(int row = 0; row < 9; row += 3){
        for(int col = 0; col < 9; col += 3){
            unordered_set<char> seen;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    char val = board[row+i][col+j];
                    if(val == '.') continue;
                    if(seen.count(val)) return false;
                    seen.insert(val);
                }
            }
        }
    }
        return true;
    }
};